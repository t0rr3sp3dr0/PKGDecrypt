//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (951.9)]
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef FairPlayHelper_h
#define FairPlayHelper_h

@import Foundation;

@interface FairPlayHelper : NSObject {
    /* instance variables */
    struct FairPlayHWInfo_ { unsigned int IDLength; unsigned char ID[20]; } _hwInfo;
}

@property (readonly) unsigned int globalContext;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)_validateFairPlayPath;
- (id)init;
- (signed char)needDiversityForDSID:(id)_diversityForDSID;
- (signed char)deleteAccountWithDSID:(id)_accountWithDSID;

@end

#endif /* FairPlayHelper_h */