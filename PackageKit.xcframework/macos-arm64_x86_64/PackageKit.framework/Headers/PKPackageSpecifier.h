//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKPackageSpecifier_h
#define PKPackageSpecifier_h

@import Foundation;

#include "PKPackage.h"
#include "PKPackageReferable-Protocol.h"
#include "PKPackageRequirements.h"

@interface PKPackageSpecifier : NSObject <NSSecureCoding, NSCopying> {
    /* instance variables */
    NSMutableDictionary *_userPathByComponentIdent;
    NSDictionary *_resolvedPathByComponentIdent;
    NSDictionary *_installPathByComponentIdent;
    NSData *_validatedDigest;
    NSString *_packageUniqueHash;
    PKPackageRequirements *_requirements;
    NSString *_destinationPath;
}

@property (copy) NSString *externalRootPath;
@property (retain) id <PKPackageReferable> packageReference;
@property (retain) NSString *prefixPath;
@property (copy) NSNumber *authLevel;
@property long long options;
@property (copy) NSString *displayName;
@property (copy) NSString *displayVersion;
@property (copy) NSNumber *installEnvironment;
@property (readonly) PKPackage *package;

/* class methods */
+ (signed char)supportsSecureCoding;
+ (id)_adjustedSubpath:(id)_subpath forPackageComponent:(id)_packageComponent relocatedToPath:(id)_toPath;

/* instance methods */
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)_zone;
- (id)description;
- (unsigned long long)hash;
- (signed char)isEqual:(id)_equal;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;
- (id)_requirements;
- (id)_dictionaryRepresentation;
- (id)_initWithDictionaryRepresentation:(id)_withDictionaryRepresentation;
- (id)initWithPackage:(id)_package;
- (id)userPathForComponentIdentifier:(id)_pathForComponentIdentifier;
- (id)__adjustedInstallPathForComponent:(id)_installPathForComponent provisionalPath:(id)_path destination:(id)_destination;
- (id)__checkForApplicationConflictForComponent:(id)_forApplicationConflictForComponent provisionalPath:(id)_path destination:(id)_destination;
- (id)__uniquePathForBundle:(id)_pathForBundle;
- (id)_actualInstallPathForBundleComponent:(id)_installPathForBundleComponent;
- (id)_adjustedSubpath:(id)_subpath forPackageComponent:(id)_packageComponent previous:(signed char)_previous;
- (signed char)_bundleHasOriginalName:(id)_hasOriginalName;
- (id)_defaultInstallPathForBundleComponent:(id)_installPathForBundleComponent;
- (id)_onDiskComponentForDestination:(id)_destination packageComponent:(id)_component search:(signed char)_search;
- (id)_packageUniqueHash;
- (id)_previousInstallPathForBundleComponent:(id)_installPathForBundleComponent;
- (signed char)_refersToSamePackage:(id)_toSamePackage;
- (void)_resolveInstallPathsForDestination:(id)_installPathsForDestination replacingPriorResults:(signed char)_priorResults;
- (id)_resolvedPrefixPathForPackage;
- (id)_resolvedPrefixPathForPackageComponent:(id)_prefixPathForPackageComponent;
- (id)initWithPackageReference:(id)_packageReference;
- (void)setUserPath:(id)_userPath forComponentIdentifier:(id)_componentIdentifier;

@end

#endif /* PKPackageSpecifier_h */
