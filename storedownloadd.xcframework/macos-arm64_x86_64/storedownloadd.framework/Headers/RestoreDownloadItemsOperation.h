//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (951.9)]
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef RestoreDownloadItemsOperation_h
#define RestoreDownloadItemsOperation_h

@import Foundation;

#include "ISOperation.h" // @import StoreFoundation;
#include "RestoreDownloadItemsOperationDelegate-Protocol.h"

@class ISStoreAccount; // @import StoreFoundation;

@interface RestoreDownloadItemsOperation : ISOperation

@property (readonly) ISStoreAccount *account;
@property (readonly) NSArray *downloadItems;
@property id <RestoreDownloadItemsOperationDelegate> delegate;
@property signed char shouldShowTermsAndConditionsDialog;
@property (readonly) NSArray *responses;

/* instance methods */
- (id)initWithDownloadItems:(id)_downloadItems account:(id)_account storeClient:(id)_client;
- (void)run;
- (void)_addResponse:(id)_response;
- (id)_newResponseWithItems:(id)_items error:(id)_error;
- (id)_plistDataWithItems:(id)_dataWithItems options:(id)_options error:(id *)_error;
- (void)_run;
- (id)_runWithBodyData:(id)_bodyData contentEncoding:(id)_encoding options:(id)_options error:(id *)_error;
- (id)_runWithItems:(id)_items options:(id)_options;
- (signed char)_runWithOptions:(id)_options error:(id *)_error;
- (void)_showDialogsForResponse:(id)_dialogsForResponse;

@end

#endif /* RestoreDownloadItemsOperation_h */
