//
//  FridaGumFairPlayHelper.h
//  
//
//  Created by Pedro Tôrres on 2024-05-07.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FridaGumFairPlayHelper : NSObject

+ (BOOL)setHWInfoWithData:(NSData *)data returningError:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
