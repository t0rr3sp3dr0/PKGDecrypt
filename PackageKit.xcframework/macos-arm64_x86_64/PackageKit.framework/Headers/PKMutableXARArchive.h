//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKMutableXARArchive_h
#define PKMutableXARArchive_h

@import Foundation;

#include "PKXARArchive.h"

@interface PKMutableXARArchive : PKXARArchive {
    /* instance variables */
    NSMutableArray *_signers;
    signed char _mutable;
}

/* instance methods */
- (void)dealloc;
- (signed char)closeArchive;
- (struct __xar_file_t *)_fileStructForParentOfSubpath:(id)_structForParentOfSubpath error:(id *)_error;
- (signed char)addIntermediateCertificate:(struct __SecCertificate *)_intermediateCertificate;
- (signed char)addSignatureBySigningWithIdentity:(struct __SecIdentity *)_signatureBySigningWithIdentity algorithm:(id)_algorithm usingTSAIfSupported:(signed char)_tsaifSupported;
- (id)initForWritingToPath:(id)_forWritingToPath error:(id *)_error;
- (signed char)setContentsOfArchive:(id)_contentsOfArchive forPath:(id)_path;
- (signed char)setData:(id)_data forPath:(id)_path compressed:(signed char)_compressed;
- (signed char)setFile:(id)_file forPath:(id)_path compressed:(signed char)_compressed;
- (void)setSignatureSize:(int)_signatureSize;

@end

#endif /* PKMutableXARArchive_h */
