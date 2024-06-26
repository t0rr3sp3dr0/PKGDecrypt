//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (951.9)]
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CheckPreflightOperation_h
#define CheckPreflightOperation_h

@import Foundation;

#include "ISOperation.h" // @import StoreFoundation;

@protocol ISURLOperationDelegate; // @import CommerceKit;

@interface CheckPreflightOperation : ISOperation <ISURLOperationDelegate> {
    /* instance variables */
    NSURL *_remoteURL;
    NSURL *_localURL;
    NSNumber *_productID;
    id /* block */ _completionBlock;
}

@property (copy) NSDictionary *osVersionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)checkPreflightAtURL:(id)_preflightAtURL forProductID:(id)_productID storeClient:(id)_client completionBlock:(id /* block */)_block;
+ (void)runErrorDialogForDownloadMetadata:(id)_downloadMetadata error:(id)_error;
+ (void)runErrorDialogForDownloadMetadata:(id)_downloadMetadata storeClient:(id)_client error:(id)_error;
+ (signed char)runWarningDialogForDownloadMetadata:(id)_downloadMetadata error:(id)_error;
+ (signed char)runWarningDialogForDownloadMetadata:(id)_downloadMetadata storeClient:(id)_client error:(id)_error;

/* instance methods */
- (id)initWithProductID:(id)_productID url:(id)_url storeClient:(id)_client completionBlock:(id /* block */)_block;
- (void)run;
- (void)operation:(id)_operation failedWithError:(id)_withError;
- (void)operation:(id)_operation finishedWithOutput:(id)_withOutput;
- (signed char)_productIDMatchesPreferencesKey:(struct __CFString *)_idmatchesPreferencesKey;
- (signed char)_shouldFakePreflightReturningSuccess:(char *)_fakePreflightReturningSuccess error:(id *)_error;
- (signed char)verifyDistributionAtURL:(id)_distributionAtURL allowsDevSign:(signed char)_devSign allowsUnsigned:(signed char)_unsigned osVersionToBeInstalled:(id)_versionToBeInstalled error:(id *)_error distributionController:(id *)_controller;
- (void)_verifyPreflight;
- (signed char)_allowsDevSigned;

@end

#endif /* CheckPreflightOperation_h */
