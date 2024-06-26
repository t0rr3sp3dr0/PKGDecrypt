//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef PKReceipt_h
#define PKReceipt_h

@import Foundation;

@interface PKReceipt : NSObject {
    /* instance variables */
    NSMutableDictionary *_receiptDictionary;
    NSString *_bomPath;
    void * _cachedBOM;
    NSString *_bundlePath;
    signed char _isSecure;
}

/* class methods */
+ (void)_clearCache;
+ (id)__findBundleReceiptsFromDirectory:(id)_bundleReceiptsFromDirectory;
+ (id)receiptsAtPath:(id)_atPath;
+ (id)__findReceiptsFromBOMsDirectory:(id)_receiptsFromBOMsDirectory;
+ (void)_clearCacheInOtherProcesses;
+ (void)_clearCacheLocally;
+ (void)_clearCacheWithNotification:(id)_cacheWithNotification;
+ (id)_findReceiptsOnVolumeAtPath:(id)_receiptsOnVolumeAtPath;
+ (id)_receiptDictionaryPathFromBOMPath:(id)_dictionaryPathFromBOMPath;
+ (id)_receiptsDirectoryPathForDestination:(id)_directoryPathForDestination;
+ (id)_receiptsDirectoryPathForSandboxRoot:(id)_directoryPathForSandboxRoot destination:(id)_destination;
+ (id)_searchDirectoriesForBOMReceiptsOnDestination:(id)_directoriesForBOMReceiptsOnDestination returningSecureIndexes:(id *)_secureIndexes;
+ (id)_searchDirectoriesForBundleReceiptsOnDestination:(id)_directoriesForBundleReceiptsOnDestination;
+ (id)_sharedReceiptsCache;
+ (id)_sortedReceiptsByPackageVersion:(id)_receiptsByPackageVersion;
+ (id)_systemContentReceiptsDirectoryPathForDestination:(id)_contentReceiptsDirectoryPathForDestination;
+ (id)_systemContentReceiptsDirectoryPathForSandboxRoot:(id)_contentReceiptsDirectoryPathForSandboxRoot destination:(id)_destination;
+ (id)_systemDataContentReceiptsDirectoryPathForDestination:(id)_dataContentReceiptsDirectoryPathForDestination;
+ (id)_systemDataContentReceiptsDirectoryPathForSandboxRoot:(id)_dataContentReceiptsDirectoryPathForSandboxRoot destination:(id)_destination;
+ (id)receiptWithIdentifier:(id)_withIdentifier volume:(id)_volume;
+ (id)receiptWithPackageFileName:(id)_withPackageFileName volume:(id)_volume;
+ (id)receiptsOnVolumeAtPath:(id)_onVolumeAtPath;
+ (id)receiptsOnVolumeAtPath:(id)_onVolumeAtPath matchingPackageIdentifier:(id)_packageIdentifier;

/* instance methods */
- (void)dealloc;
- (id)description;
- (id)init;
- (id)additionalInfo;
- (id)installDate;
- (id)packageVersion;
- (id)packageIdentifier;
- (id)_ACLStringOfItemAtPath:(id)_itemAtPath;
- (id)_SHA1ChecksumDataOfItemAtPath:(id)_itemAtPath;
- (id)_BOM;
- (id)_attributesOfItemAtPath:(id)_ofItemAtPath;
- (id)_directoryEnumerator;
- (void)_freeBOM;
- (signed char)_isSecure;
- (id)_packageName;
- (signed char)_removeReceiptInDirectory:(id)_receiptInDirectory error:(id *)_error;
- (void)_setACLString:(id)_aclstring forItemAtPath:(id)_itemAtPath;
- (void)_setInstallPrefixPath:(id)_installPrefixPath;
- (void)_setInstallProcessName:(id)_installProcessName;
- (void)_setPackageGroups:(id)_packageGroups;
- (void)_setPackageName:(id)_packageName;
- (void)_setSHA1ChecksumData:(id)_sha1ChecksumData forItemAtPath:(id)_itemAtPath;
- (void)_setSecure:(signed char)_secure;
- (signed char)_updateACLsOfItemAtPath:(id)_aclsOfItemAtPath withFile:(id)_file;
- (signed char)_updateSHA1ChecksumOfItemAtPath:(id)_sha1ChecksumOfItemAtPath withFile:(id)_file;
- (id)initWithBOMPath:(id)_bompath;
- (id)initWithBundlePkgPath:(id)_bundlePkgPath;
- (id)installPrefixPath;
- (id)installProcessName;
- (id)packageGroups;
- (id)receiptStoragePaths;

@end

#endif /* PKReceipt_h */
