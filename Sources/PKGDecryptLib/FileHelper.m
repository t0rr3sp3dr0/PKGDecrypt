//
//  FileHelper.m
//  
//
//  Created by Pedro Tôrres on 2024-08-02.
//

#import "FileHelper.h"

@implementation FileHelper

+ (BOOL)iterateFileAtPath:(NSString *)path withChunksOfLength:(NSUInteger)length error:(NSError **)error handler:(BOOL(^)(NSString *path, NSError **error))handler {
    NSFileHandle *readingFileHandle = [NSFileHandle fileHandleForReadingAtPath:path];
    if (!readingFileHandle) {
        if (error) {
            *error = [NSError errorWithDomain:NSPOSIXErrorDomain code:-1 userInfo:@{
                NSLocalizedDescriptionKey: @"+[NSFileHandle fileHandleForReadingAtPath:] returned nil",
            }];
        }

        return NO;
    }

    NSFileHandle *writingFileHandle = [NSFileHandle fileHandleForWritingAtPath:path];
    if (!writingFileHandle) {
        if (error) {
            *error = [NSError errorWithDomain:NSPOSIXErrorDomain code:-1 userInfo:@{
                NSLocalizedDescriptionKey: @"+[NSFileHandle fileHandleForWritingAtPath:] returned nil",
            }];
        }

        return NO;
    }

    NSFileManager *fileManager = [NSFileManager defaultManager];
    if (!fileManager) {
        if (error) {
            *error = [NSError errorWithDomain:NSPOSIXErrorDomain code:-1 userInfo:@{
                NSLocalizedDescriptionKey: @"+[NSFileManager defaultManager] returned nil",
            }];
        }

        return NO;
    }

    BOOL ok = YES;
    NSString *auxPath = [NSString stringWithFormat:@"%@:aux", path];

    if (!(ok = [fileManager createFileAtPath:auxPath contents:nil attributes:nil])) {
        if (error) {
            *error = [NSError errorWithDomain:NSPOSIXErrorDomain code:-1 userInfo:@{
                NSLocalizedDescriptionKey: @"-[NSFileManager createFileAtPath:contents:attributes:] returned NO",
            }];
        }

        return NO;
    }

    while (YES) {
        NSData *readingData = [readingFileHandle readDataOfLength:length];
        if (!readingData) {
            if (error) {
                *error = [NSError errorWithDomain:NSPOSIXErrorDomain code:-1 userInfo:@{
                    NSLocalizedDescriptionKey: @"-[NSFileHandle readDataOfLength:] returned NO",
                }];
            }

            return NO;
        }

        if ([readingData length] == 0) {
            break;
        }

        if (!(ok = [readingData writeToFile:auxPath atomically:NO])) {
            if (error) {
                *error = [NSError errorWithDomain:NSPOSIXErrorDomain code:-1 userInfo:@{
                    NSLocalizedDescriptionKey: @"-[NSData writeToFile:atomically:] returned NO",
                }];
            }

            return NO;
        }

        if (!(ok = handler(auxPath, error))) {
            return NO;
        }

        NSData *writingData = [NSData dataWithContentsOfFile:auxPath];
        if (!writingData) {
            if (error) {
                *error = [NSError errorWithDomain:NSPOSIXErrorDomain code:-1 userInfo:@{
                    NSLocalizedDescriptionKey: @"+[NSData dataWithContentsOfFile:] returned NO",
                }];
            }

            return NO;
        }

        [writingFileHandle writeData:writingData];
    }

    if (!(ok = [fileManager removeItemAtPath:auxPath error:error])) {
        return NO;
    }

    [writingFileHandle closeFile];
    [readingFileHandle closeFile];

    return YES;
}

@end
