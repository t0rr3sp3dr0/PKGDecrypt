//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKSetupDeferredInstallOperation_h
#define PKSetupDeferredInstallOperation_h

#include "PKInstallOperation.h"

@interface PKSetupDeferredInstallOperation : PKInstallOperation

/* instance methods */
- (int)installState;
- (void)main;
- (signed char)_arrangeForDeferredInstallReturningError:(id *)_forDeferredInstallReturningError;

@end

#endif /* PKSetupDeferredInstallOperation_h */
