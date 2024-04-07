//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef _PKCheckErrorRecoveryAttempter_h
#define _PKCheckErrorRecoveryAttempter_h

@import Foundation;

@interface _PKCheckErrorRecoveryAttempter : NSObject {
    /* instance variables */
    id /* block */ _action;
}

/* instance methods */
- (void)dealloc;
- (signed char)attemptRecoveryFromError:(id)_recoveryFromError optionIndex:(unsigned long long)_index;
- (void)attemptRecoveryFromError:(id)_recoveryFromError optionIndex:(unsigned long long)_index delegate:(id)_delegate didRecoverSelector:(SEL)_recoverSelector contextInfo:(void *)_info;
- (id)initWithAction:(id /* block */)_action;

@end

#endif /* _PKCheckErrorRecoveryAttempter_h */
