//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (951.9)]
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef DownloadServiceInterface_h
#define DownloadServiceInterface_h

@import Foundation;

@class ISServiceClientInterface; // @import StoreFoundation;
@protocol ISDownloadService; // @import StoreFoundation;

// @interface DownloadServiceInterface : ISServiceClientInterface <ISDownloadService>
// 
// @property (readonly) unsigned long long hash;
// @property (readonly) Class superclass;
// @property (readonly, copy) NSString *description;
// @property (readonly, copy) NSString *debugDescription;
// 
// /* instance methods */
// - (id)exportedObjectProtocol;
// - (id)exportedObjectInterface;
// - (id)_downloadQueue;
// - (void)performDownload:(id)_download withOptions:(unsigned long long)_options replyBlock:(id /* block */)_block;
// - (void)addDownload:(id)_download replyBlock:(id /* block */)_block;
// - (void)pauseDownloadWithItemIdentifier:(unsigned long long)_downloadWithItemIdentifier;
// - (void)resumeDownloadWithItemIdentifier:(unsigned long long)_downloadWithItemIdentifier;
// - (void)cancelDownloadWithItemIdentifier:(unsigned long long)_downloadWithItemIdentifier promptToConfirm:(signed char)_toConfirm askToDelete:(signed char)_toDelete;
// - (void)removeDownloadWithItemIdentifier:(unsigned long long)_downloadWithItemIdentifier;
// - (void)resetStatusForDownloadWithItemIdentifier:(unsigned long long)_statusForDownloadWithItemIdentifier;
// - (void)addDownloadQueueObserver:(id)_downloadQueueObserver reply:(id /* block */)_reply;
// - (void)removeDownloadQueueObserver:(id)_downloadQueueObserver;
// - (void)downloadsWithTypeMask:(long long)_withTypeMask reply:(id /* block */)_reply;
// - (void)downloadWithItemIdentifier:(unsigned long long)_withItemIdentifier reply:(id /* block */)_reply;
// - (void)checkStoreDownloadQueueForAccount:(id)_storeDownloadQueueForAccount;
// - (void)checkServerDownloadQueueWithReplyBlock:(id /* block */)_serverDownloadQueueWithReplyBlock;
// - (void)triggerDownloadsWithReplyBlock:(id /* block */)_downloadsWithReplyBlock;
// - (void)checkAutomaticDownloadQueue;
// - (void)cacheReceiptAsString:(id)_receiptAsString forDownload:(id)_download reply:(id /* block */)_reply;
// - (void)fetchIconForItemIdentifier:(unsigned long long)_iconForItemIdentifier atURL:(id)_url replyBlock:(id /* block */)_block;
// - (void)performedIconAnimationForDownloadWithIdentifier:(unsigned long long)_iconAnimationForDownloadWithIdentifier;
// - (void)lockApplicationsForBundleID:(id)_applicationsForBundleID;
// - (void)unlockApplicationsWithBundleIdentifier:(id)_applicationsWithBundleIdentifier;
// - (void)lockedApplicationTriedToLaunchAtPath:(id)_applicationTriedToLaunchAtPath;
// - (void)checkPreflightWithItemIdentifier:(unsigned long long)_preflightWithItemIdentifier url:(id)_url systemVersionInfo:(id)_versionInfo replyBlock:(id /* block */)_block;
// - (void)runErrorDialogForDownloadMetadata:(id)_downloadMetadata error:(id)_error;
// - (void)runWarningDialogForDownloadMetadata:(id)_downloadMetadata error:(id)_error replyBlock:(id /* block */)_block;
// - (void)restoreDownloadsWithArchivedFiles:(id)_downloadsWithArchivedFiles replyBlock:(id /* block */)_block;
// 
// @end

@class DownloadServiceInterface;

#endif /* DownloadServiceInterface_h */
