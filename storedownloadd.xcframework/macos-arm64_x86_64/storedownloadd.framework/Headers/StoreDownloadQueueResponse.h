//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (951.9)]
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef StoreDownloadQueueResponse_h
#define StoreDownloadQueueResponse_h

@import Foundation;

@interface StoreDownloadQueueResponse : NSObject

@property (retain) NSArray *downloads;
@property (retain) NSData *keybag;
@property (retain) NSArray *rangesToLoad;
@property signed char triggeredQueueCheck;
@property signed char shouldCancelPurchaseBatch;
@property (retain) NSError *error;

/* instance methods */
- (id)initWithDictionary:(id)_dictionary userIdentifier:(id)_identifier;
- (id)initWithError:(id)_error userIdentifier:(id)_identifier;
- (id)_newDownloadsFromItems:(id)_items withDSID:(id)_dsid;

@end

#endif /* StoreDownloadQueueResponse_h */
