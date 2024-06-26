//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKInstallAnalyzer_h
#define PKInstallAnalyzer_h

@import Foundation;

#include "PKInstallRequest.h"

@interface PKInstallAnalyzer : NSObject {
    /* instance variables */
    PKInstallRequest *_installRequest;
    NSMutableDictionary *_maskPathsByPackageSpecifier;
    NSMutableDictionary *_skipComponentsByPackageSpecifier;
    NSMutableSet *_obsoletedFiles;
    NSMutableSet *_potentiallyObsoleteDirectories;
    NSMutableSet *_atomicallyObsoleteBundles;
    NSMutableSet *_truncateBeforeObsoletingFiles;
    NSMutableArray *_deferredInstallPaths;
    NSMutableArray *_registrationPaths;
    NSMutableArray *_contentCachingPaths;
    NSMutableArray *_pathsToCambriaTranslate;
    long long _kextPathCount;
    long long _systemLibraryCount;
    long long _prebootFilesCount;
    long long _xpcCachePathCount;
    NSDictionary *_bundlePathToComponentMap;
    NSMutableDictionary *_bundleIdentToXATTRMap;
    NSMutableDictionary *_defaultPathByBundleIdentifier;
    NSMutableDictionary *_actualPathByBundleIdentifier;
    NSMutableDictionary *_versionByBundleIdentifier;
    NSMutableDictionary *_downgradePathByBundleIdentifier;
    NSMutableArray *_topBundleIdentifiers;
    NSMutableArray *_actualFileInstallPaths;
}

/* instance methods */
- (void)dealloc;

@end

#endif /* PKInstallAnalyzer_h */
