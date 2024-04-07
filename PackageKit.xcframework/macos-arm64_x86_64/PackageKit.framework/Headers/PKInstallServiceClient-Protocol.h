//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKInstallServiceClient_Protocol_h
#define PKInstallServiceClient_Protocol_h

@import Foundation;

@protocol PKInstallServiceClient <NSObject>

@required

/* required instance methods */
- (void)installDidBeginCommitForToken:(id)_didBeginCommitForToken;
- (void)installDidBeginForToken:(id)_didBeginForToken;
- (void)installDidEndForToken:(id)_didEndForToken;

@optional

/* optional instance methods */
- (void)installWillProceedForState:(int)_willProceedForState withSandbox:(id)_sandbox forToken:(id)_token completion:(id /* block */)_completion;

@end

#endif /* PKInstallServiceClient_Protocol_h */