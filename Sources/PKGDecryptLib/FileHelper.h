//
//  FileHelper.h
//  
//
//  Created by Pedro Tôrres on 2024-08-02.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FileHelper : NSObject

+ (BOOL)iterateFileAtPath:(NSString *)path withChunksOfLength:(NSUInteger)length error:(NSError **)error handler:(BOOL(^)(NSString *path, NSError **error))handler;

@end

NS_ASSUME_NONNULL_END
