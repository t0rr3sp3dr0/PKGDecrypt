//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKBundleComponentVersion_h
#define PKBundleComponentVersion_h

@import Foundation;

@interface PKBundleComponentVersion : NSObject {
    /* instance variables */
    NSString *_origShortVersionString;
    NSString *_origBundleVersion;
    signed char _isOnDisk;
}

@property (readonly) NSDictionary *attributeDictionary;
@property (readonly) NSString *shortVersionString;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSString *sourceVersion;
@property (readonly) NSString *buildVersion;
@property (readonly) NSString *combinedVersionString;

/* class methods */
+ (id)bundleComponentVersionWithOnDiskCFBundle:(struct __CFBundle *)_componentVersionWithOnDiskCFBundle;
+ (id)_combinedVersionAndInfoDictionaryForBundle:(id)_versionAndInfoDictionaryForBundle;
+ (id)_combinedVersionAndInfoDictionaryForCFBundle:(struct __CFBundle *)_versionAndInfoDictionaryForCFBundle;
+ (id)_orderedVersionKeys;
+ (id)_properlyOrderedVersionKeys;
+ (id)_standardizedTupleVersionString:(id)_tupleVersionString;
+ (id)bundleComponentVersionWithOnDiskBundle:(id)_componentVersionWithOnDiskBundle;
+ (id)bundleComponentVersionWithPackageAttributes:(id)_componentVersionWithPackageAttributes;

/* instance methods */
- (void)dealloc;
- (id)description;
- (long long)compare:(id)_compare;
- (id)initWithShortVersionString:(id)_shortVersionString bundleVersion:(id)_version sourceVersion:(id)_version buildVersion:(id)_version forOnDiskComponent:(signed char)_onDiskComponent;
- (signed char)_isOnDiskComponent;
- (long long)compare:(id)_compare withProperVersionOrdering:(signed char)_properVersionOrdering;
- (id)initWithAttributes:(id)_attributes forOnDiskComponent:(signed char)_onDiskComponent;
- (long long)properCompare:(id)_compare;

@end

#endif /* PKBundleComponentVersion_h */
