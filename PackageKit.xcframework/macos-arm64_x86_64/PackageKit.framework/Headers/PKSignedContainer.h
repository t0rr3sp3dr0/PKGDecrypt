//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKSignedContainer_h
#define PKSignedContainer_h

@import Foundation;

#include "PKArchive.h"

@interface PKSignedContainer : NSObject {
    /* instance variables */
    PKArchive *_archive;
    NSDictionary *_metadata;
    signed char _performsAssessment;
}

@property signed char performsAssessmentIfNeeded;
@property signed char userConsentedOperation;
@property unsigned long long options;
@property (readonly) unsigned long long fileSystemCompressionFormat;

/* instance methods */
- (void)dealloc;
- (void)cancelOperation:(id)_operation;
- (id)_archive;
- (signed char)_assessURL:(id)_url withQuarantineFlags:(unsigned int)_quarantineFlags;
- (signed char)_assessContainerReturningShouldFlagContents:(char *)_containerReturningShouldFlagContents;
- (id)_initCommon;
- (signed char)_setAssessment:(signed char)_assessment ofItemAtPath:(id)_itemAtPath;
- (void)_startUnarchivingAtPath:(id)_unarchivingAtPath cancelHandler:(id)_handler notifyOnQueue:(id)_onQueue progress:(id /* block */)_progress finish:(id /* block */)_finish;
- (id)initForReadingFromContainerAtURL:(id)_containerAtURL error:(id *)_error;
- (id)startUnarchivingAtPath:(id)_unarchivingAtPath notifyOnQueue:(id)_onQueue progress:(id /* block */)_progress finish:(id /* block */)_finish;

@end

#endif /* PKSignedContainer_h */
