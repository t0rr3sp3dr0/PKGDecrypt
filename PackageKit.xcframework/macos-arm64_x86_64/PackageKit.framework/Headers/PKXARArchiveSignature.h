//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKXARArchiveSignature_h
#define PKXARArchiveSignature_h

#include "PKArchiveSignature.h"

@interface PKXARArchiveSignature : PKArchiveSignature {
    /* instance variables */
    struct __xar_signature_t * _sig;
}

/* instance methods */
- (id)certificateRefs;
- (signed char)_hasSigningCertificate:(struct __SecCertificate *)_signingCertificate;
- (id)algorithmType;
- (id)initWithXARSignature:(struct __xar_signature_t *)_xarsignature;
- (id)signatureDataReturningAlgorithm:(id *)_dataReturningAlgorithm;
- (id)signedDataReturningAlgorithm:(id *)_dataReturningAlgorithm;

@end

#endif /* PKXARArchiveSignature_h */
