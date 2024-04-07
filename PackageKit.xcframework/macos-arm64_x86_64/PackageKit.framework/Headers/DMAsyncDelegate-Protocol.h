//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef DMAsyncDelegate_Protocol_h
#define DMAsyncDelegate_Protocol_h

@protocol DMAsyncDelegate

@required

/* required instance methods */
- (void)dmAsyncFinishedForDisk:(struct __DADisk *)_asyncFinishedForDisk mainError:(int)_error detailError:(int)_error dictionary:(id)_dictionary;
- (void)dmAsyncMessageForDisk:(struct __DADisk *)_asyncMessageForDisk string:(id)_string dictionary:(id)_dictionary;
- (void)dmAsyncProgressForDisk:(struct __DADisk *)_asyncProgressForDisk barberPole:(signed char)_pole percent:(float)_percent;
- (void)dmAsyncStartedForDisk:(struct __DADisk *)_asyncStartedForDisk;

@optional

/* optional instance methods */
- (void)dmInterruptibilityChanged:(signed char)_interruptibilityChanged;

@end

#endif /* DMAsyncDelegate_Protocol_h */
