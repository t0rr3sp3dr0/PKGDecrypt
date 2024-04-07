//
//  FridaGumFairPlayHelper.m
//  
//
//  Created by Pedro Tôrres on 2024-05-07.
//

#import <FridaGum/FridaGum.h>
#import <storedownloadd/storedownloadd.h>

#import "FridaGumFairPlayHelper.h"

static struct FairPlayHWInfo_ _hwInfo = {
    .IDLength = 0,
    .ID = "",
};

static BOOL get_mac_address(unsigned char *data, unsigned int size) {
    if (size < _hwInfo.IDLength)
        return NO;

    for (size_t i = 0; i < size; ++i)
        data[i] = _hwInfo.ID[i];
    
    return YES;
}

@implementation FridaGumFairPlayHelper

+ (BOOL)setHWInfoWithData:(NSData *)data returningError:(NSError **)error {
    NSUInteger length = [data length];
    if (length > sizeof _hwInfo.ID) {
        if (error) {
            *error = [NSError errorWithDomain:NSPOSIXErrorDomain code:-1 userInfo:@{
                NSLocalizedDescriptionKey: [NSString stringWithFormat:@"data length %lu is greater than %lu", length, sizeof _hwInfo.ID],
            }];
        }
        
        return NO;
    }
    
    const unsigned char *bytes = [data bytes];
    for (size_t i = 0; i < length; ++i)
        _hwInfo.ID[i] = bytes[i];
    
    _hwInfo.IDLength = (unsigned int) length;
    
    return [self applyHWInfoReturningError:error];
}

+ (BOOL)applyHWInfoReturningError:(NSError **)error {
    gum_init_embedded();
    
    @try {
        return [self applyHWInfoWithGumEmbeddedReturningError:error];
    } @finally {
        gum_deinit_embedded();
    }
}

+ (BOOL)applyHWInfoWithGumEmbeddedReturningError:(NSError **)error {
    GumAddress address = gum_module_find_export_by_name("CommerceCore", "get_mac_address");
    if (address == 0) {
        if (error) {
            *error = [NSError errorWithDomain:NSPOSIXErrorDomain code:-1 userInfo:@{
                NSLocalizedDescriptionKey: @"gum_module_find_export_by_name returned 0",
            }];
        }
        
        return NO;
    }
    
    return [self applyHWInfoWithGumEmbeddedWithAddress:address returningError:error];
}

+ (BOOL)applyHWInfoWithGumEmbeddedWithAddress:(GumAddress)address returningError:(NSError **)error {
    GumInterceptor *interceptor = gum_interceptor_obtain();
    if (interceptor == NULL) {
        if (error) {
            *error = [NSError errorWithDomain:NSPOSIXErrorDomain code:-1 userInfo:@{
                NSLocalizedDescriptionKey: @"gum_interceptor_obtain returned NULL",
            }];
        }
        
        return NO;
    }
    
    @try {
        return [self applyHWInfoWithGumEmbeddedWithAddress:address withInterceptor:interceptor ReturningError:error];
    } @finally {
        g_object_unref(interceptor);
    }
}

+ (BOOL)applyHWInfoWithGumEmbeddedWithAddress:(GumAddress)address withInterceptor:(GumInterceptor *)interceptor ReturningError:(NSError **)error {
    BOOL ok = [self replaceGetMACAddressWithGumEmbeddedWithAddress:address withInterceptor:interceptor returningError:error];
    if (!ok) {
        return NO;
    }
    
    Class aClass = NSClassFromString(@"FairPlayHelper");
    if (aClass == nil) {
        if (error) {
            *error = [NSError errorWithDomain:NSPOSIXErrorDomain code:-1 userInfo:@{
                NSLocalizedDescriptionKey: @"FairPlayHelper class not found",
            }];
        }
        
        return NO;
    }
    
    id sharedInstance = [aClass performSelector:@selector(sharedInstance)];
    if (sharedInstance == nil) {
        if (error) {
            *error = [NSError errorWithDomain:NSPOSIXErrorDomain code:-1 userInfo:@{
                NSLocalizedDescriptionKey: @"+[FairPlayHelper sharedInstance] returned nil",
            }];
        }
        
        return NO;
    }
    
    return YES;
}

+ (BOOL)replaceGetMACAddressWithGumEmbeddedWithAddress:(GumAddress)address withInterceptor:(GumInterceptor *)interceptor returningError:(NSError **)error {
    gum_interceptor_begin_transaction(interceptor);
    
    @try {
        return [self replaceGetMACAddressWithGumEmbeddedWithAddress:address withInterceptor:interceptor withTransactionReturningError:error];
    } @finally {
        gum_interceptor_end_transaction(interceptor);
    }
}

+ (BOOL)replaceGetMACAddressWithGumEmbeddedWithAddress:(GumAddress)address withInterceptor:(GumInterceptor *)interceptor withTransactionReturningError:(NSError **)error {
    GumReplaceReturn replaceReturn = gum_interceptor_replace(interceptor,
                                                             GSIZE_TO_POINTER(address),
                                                             GSIZE_TO_POINTER(get_mac_address),
                                                             NULL,
                                                             NULL);
    if (replaceReturn != GUM_REPLACE_OK) {
        if (error) {
            *error = [NSError errorWithDomain:NSPOSIXErrorDomain code:-1 userInfo:@{
                NSLocalizedDescriptionKey: [NSString stringWithFormat:@"gum_interceptor_replace returned %d", replaceReturn],
            }];
        }
        
        return NO;
    }
    
    return YES;
}

@end
