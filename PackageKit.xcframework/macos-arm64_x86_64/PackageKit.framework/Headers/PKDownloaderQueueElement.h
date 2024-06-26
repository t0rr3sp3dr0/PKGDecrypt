//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKDownloaderQueueElement_h
#define PKDownloaderQueueElement_h

@import Foundation;

#include "PKDownload.h"
#include "PKPackageReference.h"

@interface PKDownloaderQueueElement : NSObject {
    /* instance variables */
    PKPackageReference *_packageRef;
    NSString *_destination;
    PKDownload *_download;
    unsigned long long _downloadedBytes;
    unsigned long long _checksummedBytes;
    unsigned long long _progressIncrement;
}

/* instance methods */
- (void)dealloc;
- (id)description;
- (id)destination;
- (id)download;
- (id)packageReference;
- (unsigned long long)downloadedBytes;
- (void)setDownload:(id)_download;
- (void)_addToChecksummedBytes:(unsigned long long)_toChecksummedBytes;
- (void)_addToDownloadedBytes:(unsigned long long)_toDownloadedBytes;
- (unsigned long long)_getAndClearProgressIncrement;
- (unsigned long long)_reportedProgress;
- (void)_resetProgress;
- (unsigned long long)checksummedBytes;
- (id)initWithPackageReference:(id)_packageReference destination:(id)_destination;
- (id)partialPath;
- (id)resumeDataPath;

@end

#endif /* PKDownloaderQueueElement_h */
