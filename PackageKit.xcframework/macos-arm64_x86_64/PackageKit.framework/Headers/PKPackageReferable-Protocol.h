//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKPackageReferable_Protocol_h
#define PKPackageReferable_Protocol_h

@import Foundation;

@protocol PKPackageReferable <NSObject>

@required

@property (readonly) NSString *identifier;
@property (readonly) NSString *version;
@property (readonly) NSURL *URL;

@optional

@property (readonly) unsigned long long fileSize;
@property (readonly) NSString *MD5;
@property (readonly) NSString *fileDigest;
@property (readonly) long long fileDigestType;
@property (readonly) NSDictionary *additionalInfo;
@property (readonly) NSString *digest;

@end

#endif /* PKPackageReferable_Protocol_h */
