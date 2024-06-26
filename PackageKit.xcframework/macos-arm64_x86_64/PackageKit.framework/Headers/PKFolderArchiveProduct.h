//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKFolderArchiveProduct_h
#define PKFolderArchiveProduct_h

#include "PKArchive.h"
#include "PKDistribution.h"
#include "PKProduct.h"

@interface PKFolderArchiveProduct : PKProduct {
    /* instance variables */
    PKArchive *_archive;
    PKDistribution *_distribution;
}

/* class methods */
+ (signed char)canInitWithURL:(id)_initWithURL;

/* instance methods */
- (void)dealloc;
- (id)URL;
- (id)distribution;
- (id)productType;
- (id)allPackageReferences;
- (signed char)evaluateTrustReturningError:(id *)_trustReturningError;
- (id)localizedStringForKey:(id)_stringForKey value:(id)_value;
- (id)_archiveForTrustEvaluation;
- (id)_distributionDataFromArchive:(id)_dataFromArchive returningDistributionURL:(id *)_distributionURL error:(id *)_error;
- (id)_initWithPath:(id)_withPath error:(id *)_error;
- (id)_synthesizedDistributionFromMetaPackageInArchive:(id)_distributionFromMetaPackageInArchive;
- (id)distributionContainer;
- (id)initByLoadingProductAtURL:(id)_byLoadingProductAtURL error:(id *)_error;
- (id)stringsDictionary;

@end

#endif /* PKFolderArchiveProduct_h */
