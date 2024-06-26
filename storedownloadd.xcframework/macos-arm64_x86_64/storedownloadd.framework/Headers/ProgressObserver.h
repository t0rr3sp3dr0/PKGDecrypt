//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (951.9)]
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ProgressObserver_h
#define ProgressObserver_h

@import Foundation;

@class ClientIdentity;
@class ISStoreClient; // @import StoreFoundation;

@interface ProgressObserver : NSObject {
    /* instance variables */
    NSMutableDictionary *_progressItems;
    ClientIdentity *_downlodQueueClientIdentity;
    NSMetadataQuery *_placeholderMDQuery;
    NSMutableDictionary *_lockedAppPaths;
    ISStoreClient *_storeClient;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

/* class methods */
+ (id)sharedProgressObserverForStoreClient:(id)_progressObserverForStoreClient;

/* instance methods */
- (id)initWithStoreClient:(id)_storeClient;
- (id)_itemKeyForItemIdentifier:(unsigned long long)_keyForItemIdentifier;
- (void)_lockApplicationAtPath:(id)_applicationAtPath withBundleID:(id)_bundleID;
- (void)_unlockApplicationAtPath:(id)_applicationAtPath withBundleID:(id)_bundleID;
- (void)lockApplicationsForUpdateDownload:(id)_applicationsForUpdateDownload;
- (void)lockApplicationsForBundleID:(id)_applicationsForBundleID;
- (void)unlockApplicationsWithBundleIdentifier:(id)_applicationsWithBundleIdentifier;
- (void)lockedApplicationTriedToLaunchAtPath:(id)_applicationTriedToLaunchAtPath;
- (id)_writerIdentifierForAppAtPath:(id)_identifierForAppAtPath;
- (void)downloadQueue:(id)_queue didAddDownload:(id)_addDownload;
- (void)downloadQueue:(id)_queue statusChangedForDownload:(id)_changedForDownload;
- (void)downloadQueue:(id)_queue didRemoveDownload:(id)_removeDownload queueIsIdle:(signed char)_isIdle;

@end

#endif /* ProgressObserver_h */
