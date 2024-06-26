//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (951.9)]
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef DownloadManifest_h
#define DownloadManifest_h

@import Foundation;

@class ISStoreClient; // @import StoreFoundation;

@interface DownloadManifest : NSObject {
    /* instance variables */
    NSMutableDictionary *mManifestDict;
}

@property (readonly) ISStoreClient *storeClient;

/* class methods */
+ (id)_legacyManifestPath;
+ (void)cleanLegacyManifestIfNecessaryForStoreClient:(id)_legacyManifestIfNecessaryForStoreClient;
+ (id)downloadManifestForStoreClient:(id)_manifestForStoreClient;

/* instance methods */
- (id)initWithStoreClient:(id)_storeClient;
- (id)copyDownloads:(char *)_downloads;
- (id)serializationQueue;
- (signed char)writeDownloads:(id)_downloads;
- (void)addPurgeablePath:(id)_purgeablePath;
- (void)removePurgeablePath:(id)_purgeablePath;
- (signed char)_writeManifest:(id)_manifest;
- (id)_manifestDictionaryReturningStyle:(long long *)_dictionaryReturningStyle;
- (id)_activeDownloadCookiePath;
- (id)_visibleDownloadCookiePath;

@end

#endif /* DownloadManifest_h */
