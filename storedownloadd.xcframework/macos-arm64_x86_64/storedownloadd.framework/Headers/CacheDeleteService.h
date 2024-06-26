//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (951.9)]
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CacheDeleteService_h
#define CacheDeleteService_h

@import Foundation;

@interface CacheDeleteService : NSObject

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)purgeable:(id)_purgeable urgency:(int)_urgency;
- (id)purge:(id)_purge urgency:(int)_urgency;
- (id)periodic:(id)_periodic urgency:(int)_urgency;
- (void)cancel;
- (unsigned long long)_purgeAbandonedDownloadsForVolume:(id)_abandonedDownloadsForVolume;
- (id)_purgableDownloadsForVolume:(id)_downloadsForVolume urgency:(int)_urgency;
- (id)_downloadLastModified:(id)_lastModified;
- (id)_abandonedDownloadPathsForVolume:(id)_downloadPathsForVolume;
- (unsigned long long)_sizeOfItemAtPath:(id)_ofItemAtPath;

@end

#endif /* CacheDeleteService_h */
