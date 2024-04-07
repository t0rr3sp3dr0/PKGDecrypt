//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKInstallableObject_h
#define PKInstallableObject_h

@import Foundation;

#include "PKArchive.h"
#include "PKPackage.h"
#include "PKProduct.h"

@interface PKInstallableObject : NSObject {
    /* instance variables */
    NSURL *_url;
    PKArchive *_archive;
    NSArray *_cachedCertificates;
    PKProduct *_product;
    PKPackage *_package;
    NSArray *_cachedReferences;
    NSArray *_cachedBomDatas;
}

@property (readonly) NSURL *URL;
@property (readonly) signed char isSigned;
@property (readonly) NSArray *certificates;
@property (readonly) NSArray *referencedObjects;
@property (readonly) NSArray *bomsAsData;

/* instance methods */
- (void)dealloc;
- (id)description;
- (id)initWithURL:(id)_url;
- (id)_packageURLsUnderChoice:(id)_urlsUnderChoice internal:(signed char)_internal;

@end

#endif /* PKInstallableObject_h */