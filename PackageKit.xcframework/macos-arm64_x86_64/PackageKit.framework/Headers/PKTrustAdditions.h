//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKTrustAdditions_h
#define PKTrustAdditions_h

@import Foundation;

@interface PKTrustAdditions : NSObject

/* class methods */
+ (signed char)evaluateDeveloperIDTrust:(struct __SecTrust *)_developerIDTrust settingResult:(unsigned int *)_result;
+ (signed char)evaluateFirenzeTrust:(struct __SecTrust *)_firenzeTrust settingResult:(unsigned int *)_result forDeveloper:(signed char)_developer isDevelopmentSigned:(char *)_developmentSigned;
+ (signed char)evaluateShotoTrust:(struct __SecTrust *)_shotoTrust settingResult:(unsigned int *)_result isDevelopmentSigned:(char *)_developmentSigned;

@end

#endif /* PKTrustAdditions_h */