//
//  PKGDecrypt.h
//  
//
//  Created by Pedro Tôrres on 2024-04-06.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PKGDecrypt : NSObject

+ (BOOL)runWithStoredownloaddPath:(NSString *)storedownloaddPath localFilePath:(NSString *)path dpInfo:(NSData *)dpInfo hwInfo:(nullable NSData *)hwInfo returningError:(NSError **)error;
+ (BOOL)verifyWithPath:(NSString *)path returningError:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
