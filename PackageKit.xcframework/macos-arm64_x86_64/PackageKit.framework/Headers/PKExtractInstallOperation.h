//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKExtractInstallOperation_h
#define PKExtractInstallOperation_h

@import Foundation;

#include "PKInstallOperation.h"
#include "PKPackageSpecifier.h"
#include "PKPayloadCopier.h"

@interface PKExtractInstallOperation : PKInstallOperation {
    /* instance variables */
    unsigned long long _payloadBytesCompleted;
    unsigned long long _totalPayloadSize;
    unsigned long long _informedExtractionSpeed;
    PKPackageSpecifier *_currentPackageSpecifier;
    PKPayloadCopier *_activeExtractor;
    NSObject<OS_dispatch_queue> *_updateQueue;
}

/* instance methods */
- (void)dealloc;
- (int)installState;
- (void)cancel;
- (double)estimatedTimeRemaining;
- (void)main;
- (id)_activeExtractor;
- (void)_clearQuarantineStateForPackage:(id)_quarantineStateForPackage;
- (signed char)_extractAllSpecifiersOnceAndReturnFailingSpecifier:(id *)_allSpecifiersOnceAndReturnFailingSpecifier andError:(id *)_error;
- (signed char)_extractBomForPackageSpecifier:(id)_bomForPackageSpecifier error:(id *)_error;
- (signed char)_extractPayloadForPackageSpecifier:(id)_payloadForPackageSpecifier error:(id *)_error;
- (signed char)_extractScriptsForPackageSpecifier:(id)_scriptsForPackageSpecifier error:(id *)_error;
- (void)_setActiveExtractor:(id)_activeExtractor;
- (id)currentPackageSpecifier;
- (id)initWithRequest:(id)_request sandbox:(id)_sandbox analyzer:(id)_analyzer;
- (id)messageTracerComment;
- (id)messageTracerDomain;

@end

#endif /* PKExtractInstallOperation_h */
