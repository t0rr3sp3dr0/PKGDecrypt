//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CKAsn1ReceiptToken_h
#define CKAsn1ReceiptToken_h

@import Foundation;

#include "CKAsn1Token.h"

@interface CKAsn1ReceiptToken : NSObject {
    /* instance variables */
    unsigned long long mType;
    unsigned long long mTypeVersion;
    CKAsn1Token *mContentToken;
}

@property (readonly) CKAsn1Token *contentToken;
@property (readonly) unsigned long long integerValue;
@property (readonly) NSString *stringValue;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long typeVersion;

/* class methods */
+ (id)readFromBuffer:(id)_buffer;

/* instance methods */
- (id)description;
- (id)_initWithType:(unsigned long long)_withType typeVersion:(unsigned long long)_version contentToken:(id)_token;
- (signed char)contentIsAnInteger;

@end

#endif /* CKAsn1ReceiptToken_h */
