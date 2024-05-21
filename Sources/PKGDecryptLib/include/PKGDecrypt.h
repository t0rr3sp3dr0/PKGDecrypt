//
//  PKGDecrypt.h
//  
//
//  Created by Pedro Tôrres on 2024-04-06.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PKGDecrypt : NSObject

+ (BOOL)decryptArchiveAtPath:(NSString *)path dpInfo:(NSData *)dpInfo hwInfo:(nullable NSData *)hwInfo storedownloaddPath:(NSString *)storedownloaddPath returningError:(NSError **)error;
+ (BOOL)verifyArchiveAtPath:(NSString *)path returningError:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
