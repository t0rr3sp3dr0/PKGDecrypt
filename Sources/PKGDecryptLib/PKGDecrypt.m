//
//  PKGDecrypt.m
//  
//
//  Created by Pedro Tôrres on 2024-04-06.
//

#include <dlfcn.h>

#import <PackageKit/PackageKit.h>
#import <storedownloadd/storedownloadd.h>

#import "FridaGumFairPlayHelper.h"

#import "include/PKGDecrypt.h"

@implementation PKGDecrypt

+ (BOOL)runWithStoredownloaddPath:(NSString *)storedownloaddPath localFilePath:(NSString *)localFilePath dpInfo:(NSData *)dpInfo hwInfo:(nullable NSData *)hwInfo returningError:(NSError **)error {
    void *handle = dlopen([storedownloaddPath cStringUsingEncoding:NSUTF8StringEncoding], RTLD_LAZY);
    if (!handle) {
        if (error) {
            *error = [NSError errorWithDomain:NSPOSIXErrorDomain code:-1 userInfo:@{
                NSLocalizedDescriptionKey: [NSString stringWithCString:dlerror() encoding:NSUTF8StringEncoding],
            }];
        }

        return NO;
    }

    @try {
        if (hwInfo) {
            BOOL ok = [FridaGumFairPlayHelper setHWInfoWithData:hwInfo returningError:error];
            if (!ok) {
                return NO;
            }
        }

        @try {
            DecryptOperation *decryptOperation = [[NSClassFromString(@"DecryptOperation") alloc] initWithLocalFilePath:localFilePath dpInfo:dpInfo storeClient:nil];
            [decryptOperation run];
        } @catch(NSException *e) {
            if (error) {
                *error = [NSError errorWithDomain:NSCocoaErrorDomain code:-1 userInfo:@{
                    NSLocalizedDescriptionKey: [NSString stringWithFormat:@"%@: %@", [e name], [e reason]],
                }];
            }

            return NO;
        }
    } @finally {
        int ret = dlclose(handle);
        if (ret) {
            if (error) {
                *error = [NSError errorWithDomain:NSPOSIXErrorDomain code:ret userInfo:@{
                    NSLocalizedDescriptionKey: [NSString stringWithCString:dlerror() encoding:NSUTF8StringEncoding],
                }];
            }

            return NO;
        }
    }

    return YES;
}

+ (BOOL)verifyWithPath:(NSString *)path returningError:(NSError **)error {
    PKArchive *archive = [PKArchive archiveWithPath:path];
    return [archive verifyReturningError:error];
}

@end
