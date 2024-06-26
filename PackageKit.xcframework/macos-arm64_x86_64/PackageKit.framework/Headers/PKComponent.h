//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKComponent_h
#define PKComponent_h

@import Foundation;

#include "PKPackage.h"

@interface PKComponent : NSObject {
    /* instance variables */
    NSMutableDictionary *_binarySubpaths;
    NSMutableDictionary *_scriptsDictionary;
    NSMutableDictionary *_pathToPatchInfoDictionary;
    NSMutableDictionary *_pathToRequiredFilesDictionary;
    NSMutableArray *_deferredInstallPaths;
    NSMutableSet *_doNotObsoletePaths;
    NSMutableSet *_doNotObsoletePrefixes;
}

@property (retain) NSString *identifier;
@property (retain) NSString *version;
@property (retain) NSString *prefixPath;
@property signed char relocatable;
@property signed char versionChecked;
@property signed char strictIdentifier;
@property (retain) NSArray *subpaths;
@property PKPackage *package;
@property (retain) NSString *destinationPath;

/* class methods */
+ (signed char)isInstallablePath:(id)_installablePath;
+ (signed char)_bundleAtPath:(id)_atPath matchesVersion:(id)_version;
+ (signed char)_componentPath:(id)_path matchesDestination:(id)_destination;
+ (id)_findComponentViaLaunchServicesWithIdentifier:(id)_componentViaLaunchServicesWithIdentifier version:(id)_version destination:(id)_destination;
+ (id)_findComponentsViaSpotlightWithIdentifier:(id)_componentsViaSpotlightWithIdentifier version:(id)_version destination:(id)_destination;
+ (id)findComponentsWithIdentifier:(id)_identifier destination:(id)_destination;
+ (id)findComponentsWithIdentifier:(id)_identifier version:(id)_version destination:(id)_destination;

/* instance methods */
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (signed char)isEqual:(id)_equal;
- (long long)compare:(id)_compare;
- (id)initWithIdentifier:(id)_identifier version:(id)_version;
- (long long)versionCompare:(id)_compare;
- (id)_deferredInstallPaths;
- (id)_doNotObsoletePaths;
- (id)_doNotObsoletePrefixes;
- (id)_pathToPatchInfoDictionary;
- (id)_pathToRequiredFilesDictionary;
- (id)_scriptsDictionary;
- (id)binarySubpathsForArch:(int)_subpathsForArch forSubArch:(int)_subArch;
- (id)componentKey;
- (id)scriptForType:(id)_forType;
- (void)setBinarySubpaths:(id)_binarySubpaths forArch:(int)_arch forSubArch:(int)_subArch;
- (void)setScript:(id)_script forType:(id)_type;

@end

#endif /* PKComponent_h */
