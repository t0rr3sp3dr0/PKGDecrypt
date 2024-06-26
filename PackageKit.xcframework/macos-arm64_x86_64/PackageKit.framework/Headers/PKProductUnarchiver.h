//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKProductUnarchiver_h
#define PKProductUnarchiver_h

@import Foundation;

#include "PKArchive.h"

@interface PKProductUnarchiver : NSObject {
    /* instance variables */
    PKArchive *_productArchive;
}

@property signed char useIndexBom;
@property signed char preserveExtAttrsAndACLs;

/* instance methods */
- (void)dealloc;
- (signed char)_unarchiveCPIOToPath:(id)_cpiotoPath error:(id *)_error;
- (signed char)_unarchiveNonCPIOToPath:(id)_nonCPIOToPath error:(id *)_error;
- (id)initWithProductURL:(id)_productURL;
- (signed char)unarchiveToPath:(id)_toPath error:(id *)_error;

@end

#endif /* PKProductUnarchiver_h */
