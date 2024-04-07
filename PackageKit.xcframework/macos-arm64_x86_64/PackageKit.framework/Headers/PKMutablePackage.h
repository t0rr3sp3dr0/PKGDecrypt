//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKMutablePackage_h
#define PKMutablePackage_h

@import Foundation;

#include "PKPackage.h"

@interface PKMutablePackage : PKPackage {
    /* instance variables */
    NSArray *_onDiskComponents;
    NSString *_payloadRoot;
    NSString *_baselinePayloadRoot;
    NSString *_scriptRoot;
    NSArray *_maskExpressions;
    id /* block */ _ownershipModifier;
    id /* block */ _modeModifier;
    id /* block */ _baselineNameMapper;
}

/* instance methods */
- (void)dealloc;
- (void)setComponents:(id)_components;
- (void)setPayloadRoot:(id)_payloadRoot;
- (id)_componentMap;
- (void)_setStaticObsoleteDirectories:(id)_staticObsoleteDirectories;
- (void)_setStaticObsoleteFiles:(id)_staticObsoleteFiles;
- (void)_staticObsoleteFilesOrRecursiveDirectories:(id)_obsoleteFilesOrRecursiveDirectories;
- (signed char)_writeToArchive:(id)_toArchive atPath:(id)_path options:(id)_options error:(id *)_error;
- (id)initWithPackageInfo:(id)_packageInfo;
- (id)initWithPackageInfo:(id)_packageInfo ofType:(id)_type;
- (void)setBaselinePayloadRoot:(id)_baselinePayloadRoot;
- (void)setMapBaselineNamesUsingBlock:(id /* block */)_mapBaselineNamesUsingBlock;
- (void)setMaskExpressions:(id)_maskExpressions;
- (void)setModifyModeUsingBlock:(id /* block */)_modifyModeUsingBlock;
- (void)setModifyOwnershipUsingBlock:(id /* block */)_modifyOwnershipUsingBlock;
- (void)setScriptRoot:(id)_scriptRoot;
- (signed char)writeToArchive:(id)_toArchive error:(id *)_error;
- (signed char)writeToArchive:(id)_toArchive options:(id)_options error:(id *)_error;

@end

#endif /* PKMutablePackage_h */
