//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKFileDownload_h
#define PKFileDownload_h

@import Foundation;

#include "PKDownload.h"
#include "PKDownloadDelegate-Protocol.h"

@interface PKFileDownload : PKDownload {
    /* instance variables */
    NSString *_srcPath;
    int _readFileDescriptor;
    int _writeFileDescriptor;
    long long _bytesDownloaded;
    signed char _isResume;
    signed char _runFileReadThread;
    NSThread *_fileReadThread;
    id <PKDownloadDelegate, NSObject> _delegate;
}

/* class methods */
+ (signed char)canDownloadURL:(id)_downloadURL;
+ (signed char)canDownloadWithResumeData:(id)_downloadWithResumeData;

/* instance methods */
- (void)dealloc;
- (id)delegate;
- (void)start;
- (void)cancel;
- (id)resumeData;
- (void)setDestination:(id)_destination allowOverwrite:(signed char)_overwrite;
- (id)sourceURL;
- (id)sourcePath;
- (void)_currentThreadCallback:(id)_threadCallback;
- (int)_fileCopyThread:(id)_copyThread;
- (id)initWithResumeData:(id)_resumeData destination:(id)_destination delegate:(id)_delegate;
- (id)initWithURL:(id)_url withChunklistURL:(id)_chunklistURL withChunklistSize:(id)_chunklistSize delegate:(id)_delegate;

@end

#endif /* PKFileDownload_h */
