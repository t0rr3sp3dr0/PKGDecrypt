//
//  PKGDecrypt.m
//  
//
//  Created by Pedro Tôrres on 2024-04-06.
//

#include <dlfcn.h>

#import <PackageKit/PackageKit.h>
#import <storedownloadd/storedownloadd.h>

#import "FileHelper.h"
#import "FridaGumFairPlayHelper.h"

#import "include/PKGDecrypt.h"

@implementation PKGDecrypt

+ (BOOL)decryptArchiveAtPath:(NSString *)path dpInfo:(NSData *)dpInfo hwInfo:(NSData *)hwInfo storedownloaddPath:(NSString *)storedownloaddPath returningError:(NSError **)error {
    void *handle = dlopen([storedownloaddPath cStringUsingEncoding:NSUTF8StringEncoding], RTLD_LAZY | RTLD_NODELETE);
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

        return [FileHelper iterateFileAtPath:path withChunksOfLength:10485760 error:error handler:^BOOL(NSString *path, NSError **error) {
            @try {
                DecryptOperation *decryptOperation = [[NSClassFromString(@"DecryptOperation") alloc] initWithLocalFilePath:path dpInfo:dpInfo storeClient:nil];
                [decryptOperation run];
            } @catch(NSException *e) {
                if (error) {
                    *error = [NSError errorWithDomain:NSCocoaErrorDomain code:-1 userInfo:@{
                        NSLocalizedDescriptionKey: [NSString stringWithFormat:@"%@: %@", [e name], [e reason]],
                    }];
                }

                return NO;
            }

            return YES;
        }];
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
}

+ (BOOL)verifyArchiveAtPath:(NSString *)path returningError:(NSError **)error {
    PKArchive *archive = [PKArchive archiveWithPath:path];

    NSArray<PKArchiveSignature *> *archiveSignatures = [archive archiveSignatures];
    if ([archiveSignatures count] > 0) {
        for (PKArchiveSignature *archiveSignature in archiveSignatures) {
            BOOL ok = [archiveSignature verifySignedDataReturningError:error];
            if (!ok) {
                return NO;
            }
        }

        return YES;
    }

    return [archive verifyReturningError:error];
}

@end
