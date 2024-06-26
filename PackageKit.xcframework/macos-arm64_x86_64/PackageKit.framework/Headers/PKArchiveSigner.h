//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKArchiveSigner_h
#define PKArchiveSigner_h

@import Foundation;

@interface PKArchiveSigner : NSObject {
    /* instance variables */
    NSString *_algorithmType;
    struct __SecKey * _privateKeyRef;
    struct _CMSEncoder * _encoder;
    struct __CFDictionary * _tsaContext;
    int _signatureSize;
}

/* instance methods */
- (void)dealloc;
- (id)initWithSigningIdentity:(struct __SecIdentity *)_signingIdentity algorithm:(id)_algorithm usingTSAIfSupported:(signed char)_tsaifSupported;
- (void)setSignatureSize:(int)_signatureSize;
- (id)signatureDataBySigningData:(id)_dataBySigningData;
- (int)signatureSize;

@end

#endif /* PKArchiveSigner_h */
