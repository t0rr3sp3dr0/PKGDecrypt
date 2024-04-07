//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (951.9)]
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef DownloadOperation_h
#define DownloadOperation_h

@import Foundation;

#include "Download.h"
#include "ISOperation.h" // @import StoreFoundation;

@class ISStoreClient; // @import StoreFoundation;
@protocol ISOperationDelegate; // @import CommerceKit;

@interface DownloadOperation : ISOperation <ISOperationDelegate> {
    /* instance variables */
    signed char _executing;
    signed char _finished;
}

@property (retain) Download *download;
@property (retain) NSArray *subOperations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)operationWithDownload:(id)_withDownload storeClient:(id)_client;
+ (long long)operationType;

/* instance methods */
- (void)run;
- (id)init;
- (signed char)isConcurrent;
- (signed char)isExecuting;
- (signed char)isFinished;
- (void)start;
- (void)completeOperation;
- (void)operation:(id)_operation updatedProgress:(id)_progress;
- (id)_copySubOperations;
- (void)_sendDownloadFinishedNotifications;
- (void)_createDownloadFolder;
- (void)_logAndSaveAssetForError:(id)_andSaveAssetForError;

@end

#endif /* DownloadOperation_h */