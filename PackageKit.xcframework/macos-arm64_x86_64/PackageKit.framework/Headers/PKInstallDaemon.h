//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKInstallDaemon_h
#define PKInstallDaemon_h

@import Foundation;

#include "PKInstallService-Protocol.h"

@interface PKInstallDaemon : NSObject <PKInstallService, NSXPCListenerDelegate> {
    /* instance variables */
    NSXPCListener *_listener;
    NSString *_connectionName;
    NSMutableDictionary *_tokenToInstallDictionary;
    NSMutableDictionary *_tokenToDoneBlockDictionary;
    NSMutableDictionary *_tokenToQualityOfServiceClassDictionary;
    id _currentToken;
    NSMutableArray *_tokenQueue;
    NSMutableDictionary *_validatedAuthorizations;
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_queueQueue;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSObject<OS_dispatch_queue> *_clientNotifyQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    int _daemonState;
    int _idleCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (signed char)allowedToLookupInstallDaemonsWithSystemDaemonLookup:(signed char)_toLookupInstallDaemonsWithSystemDaemonLookup;
+ (signed char)doingRecursiveInstall;
+ (id)sharedServiceDaemon;

/* instance methods */
- (void)dealloc;
- (id)init;
- (signed char)listener:(id)_listener shouldAcceptNewConnection:(id)_acceptNewConnection;
- (id)_currentClients;
- (signed char)_isProvidingPrivilegeEscalation;
- (void)addToken:(id)_token reply:(id /* block */)_reply;
- (void)connectionEstablishedWithReply:(id /* block */)_establishedWithReply;
- (void)_attachToToken:(id)_toToken withDoneBlock:(id /* block */)_doneBlock;
- (id)_descriptionForToken:(id)_forToken;
- (signed char)_evaluateSecurityOfRequest:(id)_securityOfRequest;
- (void)_installDidEnd;
- (void)_invokeDoneBlocksForToken:(id)_doneBlocksForToken;
- (void)_queueInstallationForToken:(id)_installationForToken reply:(id /* block */)_reply;
- (signed char)_requestHasValidAuthorization:(id)_hasValidAuthorization allowInteraction:(signed char)_interaction;
- (signed char)_requestMeetsPolicyForInstallation:(id)_meetsPolicyForInstallation withError:(id *)_error;
- (void)_runIdleTasks;
- (signed char)_shouldOnlyInstallSystemSoftwareForRequest:(id)_onlyInstallSystemSoftwareForRequest;
- (signed char)_validateSecurityForInstall:(id)_securityForInstall withError:(id *)_error;
- (void)adoptToken:(id)_token reply:(id /* block */)_reply;
- (void)currentStageStatusOfInstallRequest:(id)_stageStatusOfInstallRequest calculatePurgeableSize:(signed char)_purgeableSize reply:(id /* block */)_reply;
- (void)displayNamesForToken:(id)_namesForToken reply:(id /* block */)_reply;
- (unsigned long long)estimateOfPurgeableSpaceForSandboxesOnVolume:(id)_ofPurgeableSpaceForSandboxesOnVolume systemSandboxes:(signed char)_sandboxes;
- (void)install:(id)_install didFailWithError:(id)_failWithError;
- (void)installDidBegin:(id)_didBegin;
- (void)installDidCancel:(id)_didCancel;
- (void)installDidFinish:(id)_didFinish;
- (void)installStatusForToken:(id)_statusForToken reply:(id /* block */)_reply;
- (void)installWillFinish:(id)_willFinish;
- (void)operationControllerDidChangeInstallState:(int)_controllerDidChangeInstallState withSandbox:(id)_sandbox;
- (long long)purgeableSpaceForOrphanedSandboxesOnVolume:(id)_spaceForOrphanedSandboxesOnVolume performPurge:(signed char)_purge;
- (void)registerAuthorizationFromInstallRequest:(id)_authorizationFromInstallRequest reply:(id /* block */)_reply;
- (signed char)removeTokenIfPossible:(id)_tokenIfPossible;
- (void)startListeningForConnectionsToService:(id)_listeningForConnectionsToService;
- (void)startNextInstallIfNeeded;
- (void)startPurgeOfSandboxesOnVolume:(id)_purgeOfSandboxesOnVolume purgeAmountNeeded:(unsigned long long)_amountNeeded systemSandboxes:(signed char)_sandboxes reply:(id /* block */)_reply;
- (void)tokenForCurrentCommitIgnoringBlockingClients:(signed char)_forCurrentCommitIgnoringBlockingClients reply:(id /* block */)_reply;
- (void)tokenForInstallRequest:(id)_forInstallRequest reply:(id /* block */)_reply;

@end

#endif /* PKInstallDaemon_h */
