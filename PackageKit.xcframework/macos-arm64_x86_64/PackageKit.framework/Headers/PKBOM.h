//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKBOM_h
#define PKBOM_h

@import Foundation;

@interface PKBOM : NSObject {
    /* instance variables */
    NSData *_bomData;
    struct _BOMBom * _BOMBom;
}

/* class methods */
+ (id)_NSFileTypeFromBOMFSObjType:(int)_nsfileTypeFromBOMFSObjType;
+ (id)_attributesOfBOMFSObject:(struct _BOMFSObject *)_ofBOMFSObject;
+ (signed char)_setAttributes:(id)_attributes ofBOMFSObject:(struct _BOMFSObject *)_bomfsobject;

/* instance methods */
- (void)dealloc;
- (unsigned long long)totalSize;
- (struct _BOMBom *)BOMBom;
- (id)attributesOfItemAtPath:(id)_ofItemAtPath;
- (id)directoryEnumerator;
- (unsigned long long)fileCount;
- (id)initWithBOMData:(id)_bomdata;
- (id)initWithBOMPath:(id)_bompath;
- (id)subpathsOfDirectoryAtPath:(id)_ofDirectoryAtPath;

@end

#endif /* PKBOM_h */