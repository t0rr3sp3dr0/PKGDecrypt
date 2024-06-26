//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (951.9)]
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CheckDownloadQueueOperation_h
#define CheckDownloadQueueOperation_h

@import Foundation;

#include "ISOperation.h" // @import StoreFoundation;

@interface CheckDownloadQueueOperation : ISOperation {
    /* instance variables */
    NSSet *_userIdentifiersToCheck;
}

@property (retain) NSSet *failedUserIdentifiers;
@property (retain) NSSet *userIdentifiersWithDownloads;
@property (retain) NSString *urlBagKey;
@property (retain) NSSet *userIdentifiers;
@property (readonly) long long downloadQueueItemCount;

/* instance methods */
- (void)run;
- (signed char)_getHaveDownloads:(char *)_haveDownloads forUserID:(id)_userID returningError:(id *)_error;

@end

#endif /* CheckDownloadQueueOperation_h */
