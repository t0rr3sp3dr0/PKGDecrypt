//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKAddExtendedAttributesInstallOperation_h
#define PKAddExtendedAttributesInstallOperation_h

#include "PKInstallOperation.h"

@interface PKAddExtendedAttributesInstallOperation : PKInstallOperation

/* instance methods */
- (int)installState;
- (void)main;
- (void)_applyAttributesForSepcifier:(id)_attributesForSepcifier;

@end

#endif /* PKAddExtendedAttributesInstallOperation_h */
