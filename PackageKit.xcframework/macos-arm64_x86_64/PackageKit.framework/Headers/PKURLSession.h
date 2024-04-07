//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKURLSession_h
#define PKURLSession_h

@import Foundation;

#include "_PKURLSessionDelegate.h"

@interface PKURLSession : NSObject {
    /* instance variables */
    id /* block */ _challengeBlock;
    id /* block */ _redirectResponseBlock;
}

@property (retain) NSLock *connectionLock;
@property (retain) NSURLSession *urlSession;
@property (retain) NSURLSessionDownloadTask *downloadTask;
@property (retain) _PKURLSessionDelegate *pkURLSessionDelegate;
@property (retain) NSData *resumeData;
@property (retain, nonatomic) NSURLRequest *urlRequest;
@property (retain, nonatomic) NSString *destinationDirectory;
@property signed char inBackground;

/* instance methods */
- (void)dealloc;
- (id)init;
- (void)cancel;
- (void)startAsyncDownloadNotifyingOnQueue:(id)_asyncDownloadNotifyingOnQueue withBytesReceivedHandler:(id /* block */)_bytesReceivedHandler withCompletionHandler:(id /* block */)_completionHandler;
- (id)_initWithURLRequest:(id)_withURLRequest withResumeData:(id)_resumeData withDestinationDirectory:(id)_destinationDirectory inBackground:(signed char)_background withAuthenticationHandler:(id /* block */)_authenticationHandler withRedirectResponseHandler:(id /* block */)_redirectResponseHandler;
- (void)_startAsyncDownloadNotifyingOnQueue:(id)_asyncDownloadNotifyingOnQueue notifyOnThread:(id)_onThread withBytesReceivedHandler:(id /* block */)_bytesReceivedHandler withCompletionHandler:(id /* block */)_completionHandler;
- (id)initWithResumeData:(id)_resumeData withDestinationDirectory:(id)_destinationDirectory inBackground:(signed char)_background withAuthenticationHandler:(id /* block */)_authenticationHandler withRedirectResponseHandler:(id /* block */)_redirectResponseHandler;
- (id)initWithURLRequest:(id)_urlrequest withDestinationDirectory:(id)_destinationDirectory inBackground:(signed char)_background;
- (id)initWithURLRequest:(id)_urlrequest withDestinationDirectory:(id)_destinationDirectory inBackground:(signed char)_background withAuthenticationHandler:(id /* block */)_authenticationHandler;
- (id)initWithURLRequest:(id)_urlrequest withDestinationDirectory:(id)_destinationDirectory inBackground:(signed char)_background withAuthenticationHandler:(id /* block */)_authenticationHandler withRedirectResponseHandler:(id /* block */)_redirectResponseHandler;
- (void)startAsyncDownloadNotifyingOnThread:(id)_asyncDownloadNotifyingOnThread withBytesReceivedHandler:(id /* block */)_bytesReceivedHandler withCompletionHandler:(id /* block */)_completionHandler;

@end

#endif /* PKURLSession_h */
