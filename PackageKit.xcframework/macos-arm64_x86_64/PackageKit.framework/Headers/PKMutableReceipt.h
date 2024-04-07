//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKMutableReceipt_h
#define PKMutableReceipt_h

@import Foundation;

#include "PKReceipt.h"

@interface PKMutableReceipt : PKReceipt {
    /* instance variables */
    NSData *_bomData;
}

/* instance methods */
- (void)dealloc;
- (id)_BOM;
- (signed char)_writeToDirectory:(id)_toDirectory forSystemContent:(signed char)_systemContent error:(id *)_error;
- (id)initWithPackageIdentifier:(id)_packageIdentifier packageVersion:(id)_version BOMData:(id)_bomdata;
- (id)initWithPackageIdentifier:(id)_packageIdentifier packageVersion:(id)_version BOMData:(id)_bomdata additionalInfo:(id)_info;
- (signed char)writeToDestination:(id)_toDestination forSystemContent:(signed char)_systemContent error:(id *)_error;
- (signed char)writeToDestination:(id)_toDestination forSystemContent:(signed char)_systemContent systemVolumeInstall:(signed char)_volumeInstall error:(id *)_error;
- (signed char)writeToDirectory:(id)_toDirectory error:(id *)_error;
- (signed char)writeToSandboxRoot:(id)_toSandboxRoot destination:(id)_destination forSystemContent:(signed char)_systemContent error:(id *)_error;
- (signed char)writeToSandboxRoot:(id)_toSandboxRoot destination:(id)_destination forSystemContent:(signed char)_systemContent systemVolumeInstall:(signed char)_volumeInstall error:(id *)_error;

@end

#endif /* PKMutableReceipt_h */
