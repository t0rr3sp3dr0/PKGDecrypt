//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKInstallSandbox_h
#define PKInstallSandbox_h

@import Foundation;

#include "PKInstallRequest.h"

@interface PKInstallSandbox : NSObject <NSSecureCoding> {
    /* instance variables */
    NSString *_sandboxPath;
    PKInstallRequest *_installRequest;
    NSString *_scriptsPath;
    NSString *_temporaryPath;
    NSNumber *_stagedSize;
    NSDate *_stageDate;
    NSMutableDictionary *_scriptDirsByPackageSpecifier;
    NSMutableDictionary *_bomPathsByPackageSpecifier;
    NSMutableArray *_cleanupPaths;
    NSDictionary *_scriptsAttributes;
    NSDictionary *_temporaryAttributes;
    NSSet *_previousPackageIdentifiersSharingGroupsWithSandbox;
    long long _relevance;
    signed char _safeToReset;
    signed char _trustedSystemSandbox;
}

/* class methods */
+ (signed char)supportsSecureCoding;

/* instance methods */
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;

@end

#endif /* PKInstallSandbox_h */