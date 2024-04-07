//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKDownloader_h
#define PKDownloader_h

@import Foundation;

#include "PKDownloaderQueue.h"
#include "PKDownloaderSpeedTracker.h"

@interface PKDownloader : NSObject {
    /* instance variables */
    PKDownloaderQueue *_queue;
    signed char _isQueueRunning;
    signed char _stopNotificationPending;
    PKDownloaderSpeedTracker *_downloadTracker;
    PKDownloaderSpeedTracker *_checksumTracker;
    NSTimer *_progressTimer;
    NSString *_lastKnownPeerAddress;
}

@property (weak) id delegate;
@property long long maxConcurrentDownloadCount;
@property signed char downloadInBackground;
@property (copy, nonatomic) id /* block */ loggingBlock;

/* class methods */
+ (void)setUserAgent:(id)_userAgent;
+ (id)userAgent;

/* instance methods */
- (void)dealloc;
- (id)description;
- (double)estimatedTimeRemaining;
- (id)initWithDelegate:(id)_delegate;
- (void)download:(id)_download didFailWithError:(id)_failWithError;
- (void)download:(id)_download didReceiveDataOfLength:(unsigned long long)_receiveDataOfLength;
- (void)download:(id)_download didReceiveResponse:(id)_receiveResponse;
- (id)download:(id)_download willSendRequest:(id)_sendRequest redirectResponse:(id)_response;
- (void)downloadDidFinish:(id)_didFinish;
- (void)__runBlock:(id /* block */)_block;
- (void)_runBlockOnThread:(id)_blockOnThread withBlock:(id /* block */)_block waitUntilDone:(signed char)_untilDone;
- (void)cancelDownloadWithPackageReference:(id)_downloadWithPackageReference;
- (unsigned long long)completedDownloadSize;
- (signed char)isQueueRunning;
- (double)progressValue;
- (void)queuePackageReference:(id)_packageReference destination:(id)_destination;
- (void)startQueue;
- (void)stopQueue;
- (unsigned long long)totalDownloadSize;
- (signed char)_cancelDownloadCapturingResumeData:(id)_downloadCapturingResumeData;
- (void)_element:(id)__element didFailWithError:(id)_failWithError;
- (void)_elementDidFinish:(id)_didFinish;
- (void)_finishFileCopyWithResult:(id)_fileCopyWithResult;
- (void)_notifyDelegateIfQueueStopped:(id)_delegateIfQueueStopped;
- (id)_peerAddressForURLResponse:(id)_addressForURLResponse;
- (void)_postProcessDownloadWithElement:(id)_processDownloadWithElement isValid:(signed char)_valid;
- (void)_startChecksumValidationForDownload:(id)_checksumValidationForDownload returningOnThread:(id)_onThread;
- (void)_startDownloadForQueueElement:(id)_downloadForQueueElement;
- (void)_startFileCopyForQueueElement:(id)_fileCopyForQueueElement;
- (void)_startNativeValidationForDownload:(id)_nativeValidationForDownload returningOnThread:(id)_onThread;
- (void)_startQueuedDownloads;
- (void)_startUpdateTimer;
- (void)_stopUpdateTimer;
- (void)_updateDownloadSpeed;
- (void)_updateIndicators:(id)_indicators;
- (void)_updateProgressInfo;
- (signed char)_validatePackageAtPath:(id)_packageAtPath;
- (void)clearQueue;
- (void)download:(id)_download didCheckDataOfLength:(unsigned long long)_checkDataOfLength;
- (void)download:(id)_download didReceiveChallenge:(id)_receiveChallenge withCompletionHandler:(id /* block */)_completionHandler;
- (void)download:(id)_download receiveLogWithLevel:(unsigned long long)_logWithLevel withLogMesage:(id)_logMesage;
- (void)download:(id)_download receivedResumeBytesOfLength:(long long)_resumeBytesOfLength;
- (void)download:(id)_download willSendRequestForAuthenticationChallenge:(id)_sendRequestForAuthenticationChallenge;
- (signed char)isQueueEmpty;
- (signed char)queueContainsPackageReference:(id)_containsPackageReference;
- (void)setIsQueueRunning:(signed char)_isQueueRunning;

@end

#endif /* PKDownloader_h */
