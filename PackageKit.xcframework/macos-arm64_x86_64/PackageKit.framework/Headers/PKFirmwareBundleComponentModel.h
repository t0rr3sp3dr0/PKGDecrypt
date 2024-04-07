//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKFirmwareBundleComponentModel_h
#define PKFirmwareBundleComponentModel_h

@import Foundation;

@interface PKFirmwareBundleComponentModel : NSObject

@property (retain) NSString *modelID;
@property unsigned int boardID;
@property unsigned int chipID;

/* class methods */
+ (id)modelWithBoardID:(unsigned int)_withBoardID chipID:(unsigned int)_id;

/* instance methods */
- (void)dealloc;

@end

#endif /* PKFirmwareBundleComponentModel_h */
