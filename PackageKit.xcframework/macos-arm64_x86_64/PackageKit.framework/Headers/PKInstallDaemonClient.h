//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKInstallDaemonClient_h
#define PKInstallDaemonClient_h

@import Foundation;

#include "PKInstallService-Protocol.h"
#include "PKInstallServiceClient-Protocol.h"

@protocol OS_os_transaction;

@interface PKInstallDaemonClient : NSObject <PKInstallService, PKInstallServiceClient> {
    /* instance variables */
    int _clientPID;
    struct { unsigned int val[8]; } _clientAuditToken;
    unsigned int _clientUID;
    NSString *_clientPath;
    NSMutableSet *_outstandingInstallTokens;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithConnection:(id)_connection;
- (void)invalidate;
- (void)addToken:(id)_token reply:(id /* block */)_reply;
- (signed char)clientPermitted;
- (void)connectionEstablishedWithReply:(id /* block */)_establishedWithReply;
- (void)adoptToken:(id)_token reply:(id /* block */)_reply;
- (void)cancelInstallsWherePossible;
- (void)currentStageStatusOfInstallRequest:(id)_stageStatusOfInstallRequest calculatePurgeableSize:(signed char)_purgeableSize reply:(id /* block */)_reply;
- (void)displayNamesForToken:(id)_namesForToken reply:(id /* block */)_reply;
- (void)installDidBeginCommitForToken:(id)_didBeginCommitForToken;
- (void)installDidBeginForToken:(id)_didBeginForToken;
- (void)installDidEndForToken:(id)_didEndForToken;
- (void)installStatusForToken:(id)_statusForToken reply:(id /* block */)_reply;
- (void)installWillProceedForState:(int)_willProceedForState withSandbox:(id)_sandbox withToken:(id)_token completion:(id /* block */)_completion;
- (signed char)isWatchingInstallWithToken:(id)_watchingInstallWithToken;
- (void)registerAuthorizationFromInstallRequest:(id)_authorizationFromInstallRequest reply:(id /* block */)_reply;
- (void)tokenForCurrentCommitIgnoringBlockingClients:(signed char)_forCurrentCommitIgnoringBlockingClients reply:(id /* block */)_reply;
- (void)tokenForInstallRequest:(id)_forInstallRequest reply:(id /* block */)_reply;

@end

#endif /* PKInstallDaemonClient_h */
