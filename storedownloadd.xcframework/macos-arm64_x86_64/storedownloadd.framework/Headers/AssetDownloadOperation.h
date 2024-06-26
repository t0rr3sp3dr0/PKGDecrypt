//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (951.9)]
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef AssetDownloadOperation_h
#define AssetDownloadOperation_h

@import Foundation;

#include "DownloadOperation.h"
#include "ISOperation.h" // @import StoreFoundation;

@class SSDownloadAsset; // @import StoreFoundation;

@protocol ISURLOperationDelegate; // @import CommerceKit;

@interface AssetDownloadOperation : ISOperation <ISURLOperationDelegate>

@property (retain) SSDownloadAsset *asset;
@property (readonly) DownloadOperation *downloadOperation;
@property (retain) NSData *dpinfo;
@property (retain) NSString *displayTitle;
@property (retain) NSString *downloadKey;
@property long long retryCount;
@property (retain) NSMutableDictionary *localServerInfo;
@property (retain) NSURLResponse *response;
@property signed char skipDownloadIfNotAlreadyOnDisk;
@property signed char skipCertificateValidation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)operationType;
+ (id)operationWithAsset:(id)_withAsset storeClient:(id)_client;

/* instance methods */
- (id)_setupDownloadKey:(id)_downloadKey;
- (signed char)_shouldSendBadDownloadKey;
- (signed char)_shouldSendBadDownloadKeyUsingPreferencesKey:(struct __CFString *)_sendBadDownloadKeyUsingPreferencesKey;
- (signed char)_didSendBadDownloadKey;
- (void)_sendBadDownloadKey:(id)_badDownloadKey;
- (id)initWithStoreClient:(id)_storeClient;
- (long long)progressWeight;
- (void)run;
- (void)operation:(id)_operation didReceiveResponse:(id)_receiveResponse;
- (void)operation:(id)_operation finishedWithOutput:(id)_withOutput;
- (void)operationFinished:(id)_finished;
- (void)operation:(id)_operation updatedProgress:(id)_progress;
- (void)operation:(id)_operation willSendRequest:(id)_sendRequest;
- (id)_newURLOperation;
- (id)_URLOperationForAsset:(id)_asset;
- (id)_defaultURLOperation;
- (id)_URLOperationWithDeltaPackage:(id)_deltaPackage;
- (id)_URLOperationWithLocalDeltaPackage:(id)_localDeltaPackage;
- (id)_URLOperationWithLocalServerInfo:(id)_localServerInfo;
- (signed char)_canDownloadDeltaPackage;
- (signed char)_canDownloadLocalDeltaPackage;
- (signed char)_canDownloadLocalFullPackage;
- (void)_run;
- (signed char)_timeoutCheckAtURL:(id)_checkAtURL timeoutInterval:(double)_interval;
- (id)_modifiedURLFromAssetURL:(id)_urlfromAssetURL timeoutInterval:(double)_interval;

@end

#endif /* AssetDownloadOperation_h */
