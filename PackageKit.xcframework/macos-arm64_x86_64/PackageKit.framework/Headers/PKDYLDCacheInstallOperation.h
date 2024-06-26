//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKDYLDCacheInstallOperation_h
#define PKDYLDCacheInstallOperation_h

#include "PKInstallOperation.h"
#include "PKInstallTask.h"

@interface PKDYLDCacheInstallOperation : PKInstallOperation {
    /* instance variables */
    PKInstallTask *_currentTask;
    signed char _inSandbox;
}

/* instance methods */
- (id)description;
- (int)installState;
- (void)cancel;
- (void)main;
- (id)_pathForTool:(id)_forTool;
- (signed char)_shouldUpdateDYLDSharedCache;
- (signed char)_updateDYLDSharedCacheInSandboxReturningError:(id *)_dyldsharedCacheInSandboxReturningError;

@end

#endif /* PKDYLDCacheInstallOperation_h */
