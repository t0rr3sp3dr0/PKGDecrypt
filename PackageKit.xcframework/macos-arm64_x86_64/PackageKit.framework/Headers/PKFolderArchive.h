//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKFolderArchive_h
#define PKFolderArchive_h

@import Foundation;

#include "PKMutableArchive.h"

@interface PKFolderArchive : PKMutableArchive {
    /* instance variables */
    NSString *_archivePath;
}

/* instance methods */
- (void)dealloc;
- (id)enumeratorAtPath:(id)_atPath;
- (signed char)fileExistsAtPath:(id)_existsAtPath;
- (signed char)closeArchive;
- (id)dataForPath:(id)_forPath;
- (id)initForReadingFromPath:(id)_path options:(id)_options;
- (signed char)extractItemAtPath:(id)_itemAtPath toPath:(id)_path error:(id *)_error;
- (id)archivePath;
- (id)archiveSignatures;
- (id)fileAttributesAtPath:(id)_attributesAtPath;
- (id)initForReadingFromPath:(id)_path;
- (id)initForWritingToPath:(id)_forWritingToPath error:(id *)_error;
- (signed char)setContentsOfArchive:(id)_contentsOfArchive forPath:(id)_path;
- (signed char)setData:(id)_data forPath:(id)_path compressed:(signed char)_compressed;
- (signed char)setFile:(id)_file forPath:(id)_path compressed:(signed char)_compressed;
- (signed char)verifyReturningError:(id *)_returningError;

@end

#endif /* PKFolderArchive_h */
