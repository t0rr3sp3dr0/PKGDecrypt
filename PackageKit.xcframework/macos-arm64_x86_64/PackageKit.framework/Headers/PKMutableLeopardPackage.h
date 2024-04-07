//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKMutableLeopardPackage_h
#define PKMutableLeopardPackage_h

#include "PKMutablePackage.h"

@interface PKMutableLeopardPackage : PKMutablePackage

/* class methods */
+ (id)_bundleAttributeDictionaryForComponent:(id)_attributeDictionaryForComponent;
+ (id)_intendedPayloadEncodingForMinimumOSVersion:(id)_payloadEncodingForMinimumOSVersion;
+ (id)_intendedPayloadEncodingForPackageInfo:(id)_payloadEncodingForPackageInfo;

/* instance methods */
- (void)setComponents:(id)_components;
- (void)_setComponents:(id)_components;
- (void)_setScriptRoot:(id)_scriptRoot;
- (void)_setMapBaselineNamesUsingBlock:(id /* block */)_mapBaselineNamesUsingBlock;
- (void)setPayloadRoot:(id)_payloadRoot;
- (void)_adjustModeOnPath:(id)_modeOnPath inBom:(id)_bom usingBlock:(id /* block */)_block;
- (void)_adjustOwnershipOnPath:(id)_ownershipOnPath inBom:(id)_bom usingBlock:(id /* block */)_block;
- (signed char)_createUpdatePayloadAtPath:(id)_updatePayloadAtPath fromBaseline:(id)_baseline toNew:(id)_new currentPrefix:(id)_prefix currentComponent:(id)_component componentMap:(id)_map tempDir:(id)_dir totalPayloadSize:(unsigned long long *)_payloadSize didCreate:(char *)_create error:(id *)_error;
- (id)_effectivePayloadRoot;
- (id)_generateBomPathToRealPathDictionaryWithDestinationPath:(id)_bomPathToRealPathDictionaryWithDestinationPath;
- (void)_setBaselinePayloadRoot:(id)_baselinePayloadRoot;
- (void)_setMaskExpressions:(id)_maskExpressions;
- (void)_setModifyModeUsingBlock:(id /* block */)_modifyModeUsingBlock;
- (void)_setModifyOwnershipUsingBlock:(id /* block */)_modifyOwnershipUsingBlock;
- (void)_setPayloadRoot:(id)_payloadRoot;
- (void)_setStaticObsoleteDirectories:(id)_staticObsoleteDirectories;
- (void)_setStaticObsoleteFiles:(id)_staticObsoleteFiles;
- (void)_staticObsoleteFilesOrRecursiveDirectories:(id)_obsoleteFilesOrRecursiveDirectories;
- (void)_updatePackageInfoWithComponents;
- (signed char)_writeBomToFile:(id)_bomToFile error:(id *)_error modifyOwnershipUsingBlock:(id /* block */)_ownershipUsingBlock modifyModeUsingBlock:(id /* block */)_modeUsingBlock;
- (signed char)_writePayloadToFile:(id)_payloadToFile usingBom:(id)_bom tempDir:(id)_dir options:(id)_options error:(id *)_error;
- (signed char)_writeRoot:(id)_root toCompressedCPIO:(id)_compressedCPIO usingBom:(id)_bom largeAndSegmented:(signed char)_andSegmented options:(id)_options error:(id *)_error;
- (signed char)_writeScriptsToFile:(id)_scriptsToFile error:(id *)_error;
- (signed char)_writeToArchive:(id)_toArchive atPath:(id)_path options:(id)_options error:(id *)_error;
- (void)setBaselinePayloadRoot:(id)_baselinePayloadRoot;
- (void)setMapBaselineNamesUsingBlock:(id /* block */)_mapBaselineNamesUsingBlock;
- (void)setMaskExpressions:(id)_maskExpressions;
- (void)setModifyModeUsingBlock:(id /* block */)_modifyModeUsingBlock;
- (void)setModifyOwnershipUsingBlock:(id /* block */)_modifyOwnershipUsingBlock;
- (void)setScriptRoot:(id)_scriptRoot;

@end

#endif /* PKMutableLeopardPackage_h */