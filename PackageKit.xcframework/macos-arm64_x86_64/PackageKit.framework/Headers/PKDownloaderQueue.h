//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKDownloaderQueue_h
#define PKDownloaderQueue_h

@import Foundation;

@interface PKDownloaderQueue : NSObject {
    /* instance variables */
    unsigned long long _maxConcurrentDownloadCount;
    NSMutableArray *_queue;
    NSMutableDictionary *_active;
    unsigned long long _totalSizeQueued;
    unsigned long long _sizeDequeued;
    unsigned long long _sizeDownloaded;
    unsigned long long _sizeToDownload;
    unsigned long long _sizeToCheck;
    unsigned long long _dequeuedProgressIncrement;
    double _progressDerating;
    double _progressPercentage;
}

/* instance methods */
- (void)dealloc;
- (id)description;
- (id)init;
- (signed char)isEmpty;
- (void)addElement:(id)_element;
- (double)progressPercentage;
- (void)setMaxConcurrentDownloadCount:(long long)_maxConcurrentDownloadCount;
- (id)allElements;
- (void)checkedDataOfLength:(unsigned long long)_dataOfLength forElement:(id)_element;
- (unsigned long long)totalSizeQueued;
- (void)_adjustQueueSizeBy:(long long)_queueSizeBy;
- (id)activateNextElement;
- (id)activeElementForURL:(id)_elementForURL;
- (id)activeElements;
- (void)clearAll;
- (void)deactivateElement:(id)_element;
- (void)gotDataOfLength:(unsigned long long)_dataOfLength forElement:(id)_element;
- (long long)maxConcurrentDownloadCount;
- (void)removeElement:(id)_element didFinish:(signed char)_finish;
- (void)revertElement:(id)_element keepActive:(signed char)_active;
- (unsigned long long)sizeDownloaded;
- (unsigned long long)sizeToCheck;
- (unsigned long long)sizeToDownload;
- (void)updateProgressInfo;

@end

#endif /* PKDownloaderQueue_h */