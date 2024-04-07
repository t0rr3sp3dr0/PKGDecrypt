//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (951.9)]
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef DecryptOperation_h
#define DecryptOperation_h

@import Foundation;

#include "ISOperation.h" // @import StoreFoundation;

@interface DecryptOperation : ISOperation

@property (readonly) NSString *localFilePath;
@property (readonly) NSData *dpInfo;

/* instance methods */
- (id)initWithLocalFilePath:(id)_localFilePath dpInfo:(id)_info storeClient:(id)_client;
- (void)run;

@end

#endif /* DecryptOperation_h */