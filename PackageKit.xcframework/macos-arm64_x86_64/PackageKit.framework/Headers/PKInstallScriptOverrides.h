//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKInstallScriptOverrides_h
#define PKInstallScriptOverrides_h

@import Foundation;

@interface PKInstallScriptOverrides : NSObject {
    /* instance variables */
    NSArray *_installScriptActions;
    NSDictionary *_scriptTypeToActionIndexes;
}

/* class methods */
+ (id)_parseAndValidateInstallActionsArray:(id)_andValidateInstallActionsArray scriptTypesToScriptActionIndexes:(id *)_typesToScriptActionIndexes;

/* instance methods */
- (void)dealloc;
- (id)init;

@end

#endif /* PKInstallScriptOverrides_h */
