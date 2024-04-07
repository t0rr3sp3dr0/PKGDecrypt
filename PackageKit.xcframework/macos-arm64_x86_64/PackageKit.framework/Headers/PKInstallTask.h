//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKInstallTask_h
#define PKInstallTask_h

@import Foundation;

@interface PKInstallTask : NSObject {
    /* instance variables */
    NSTask *_task;
    NSString *_logPrefix;
    NSFileHandle *_outputReadHandle;
    NSString *_partialLine;
    signed char _logTaskOutput;
    NSLock *_logLock;
}

@property signed char logOnlyStandardError;

/* class methods */
+ (id)taskWithLaunchPath:(id)_launchPath arguments:(id)_arguments currentDirectoryPath:(id)_directoryPath logWithPrefix:(id)_withPrefix qualityOfService:(unsigned int)_ofService;
+ (id)taskWithLaunchPath:(id)_launchPath arguments:(id)_arguments currentDirectoryPath:(id)_directoryPath logWithPrefix:(id)_withPrefix qualityOfService:(unsigned int)_ofService environmentDictionary:(id)_dictionary withCambriaTranslation:(long long)_cambriaTranslation;

/* instance methods */
- (void)dealloc;
- (int)run;
- (id)task;
- (id)initWithTask:(id)_task logWithPrefix:(id)_withPrefix;

@end

#endif /* PKInstallTask_h */
