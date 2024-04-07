//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISPurchaseReceipt_h
#define ISPurchaseReceipt_h

@import Foundation;

@interface ISPurchaseReceipt : NSObject <NSCoding> {
    /* instance variables */
    NSData *mReceiptData;
    struct _CMSDecoder * mDecoder;
    NSString *mReceiptPath;
    NSString *mBundleID;
    NSString *mBundleVersion;
    NSString *mParentalControls;
    NSString *mDownloadID;
    NSString *mAdamID;
    NSDate *mPurchaseDate;
    NSString *mPurchaseDateString;
    NSString *mOpaqueDSIDString;
    NSString *mHWType;
    NSDate *mReceiptCreationDate;
    NSString *mDeveloperID;
    NSString *mInstallerVersionID;
    NSString *mReceiptType;
    NSNumber *mFRToolVersion;
    NSString *mExpirationDateString;
    NSDate *mExpirationDate;
    NSString *mRenewalDateString;
    NSDate *mRenewalDate;
    NSString *mOraganizationDisplayName;
    NSString *mCancellationReason;
    signed char mHashIsValid;
    signed char _createdFromCoder;
    signed char _verbose;
}

@property (readonly) NSString *receiptType;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSString *parentalControls;
@property (readonly) NSDate *purchaseDate;
@property (readonly) NSString *purchaseDateString;
@property (readonly) NSString *opaqueDSIDString;
@property (readonly) NSString *hwtype;
@property (readonly) NSDate *receiptCreationDate;
@property (readonly) NSString *developerID;
@property (readonly) NSString *downloadID;
@property (readonly) NSString *adamID;
@property (readonly) NSString *installerVersionID;
@property (readonly) NSNumber *frToolVersion;
@property (readonly) NSDate *expirationDate;
@property (readonly) NSDate *renewalDate;
@property (readonly) NSString *organizationDisplayName;
@property (readonly) NSString *cancellationReason;
@property (readonly) signed char isVPPLicensed;
@property (readonly) signed char isRevoked;
@property (readonly) signed char isDSIDless;
@property (readonly) NSData *receiptData;
@property (readonly) NSString *receiptDataString;
@property (readonly) NSString *dsid;
@property (readonly) signed char isProductionReceipt;

/* class methods */
+ (id)receiptFromBundleAtPath:(id)_fromBundleAtPath;
+ (id)_installReceiptWithParameters:(id)_receiptWithParameters;
+ (id)installReceiptData:(id)_receiptData inBundleAtPath:(id)_bundleAtPath;
+ (id)installReceiptString:(id)_receiptString inBundleAtPath:(id)_bundleAtPath;
+ (id)receiptFromBundleAtURL:(id)_fromBundleAtURL;
+ (id)receiptPathForBundleAtPath:(id)_pathForBundleAtPath;
+ (id)receiptWithContentsOfFile:(id)_withContentsOfFile;

/* instance methods */
- (void)dealloc;
- (signed char)isValid;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;
- (id)initWithContentsOfFile:(id)_contentsOfFile;
- (id)_initWithData:(id)_withData;
- (signed char)validateAndCheckGUIDSeparately:(char *)_andCheckGUIDSeparately;
- (struct __CFArray *)_copyCertificatesFromSignedData:(struct SecCmsSignedDataStr *)_certificatesFromSignedData;
- (signed char)_decodeReceiptData:(id)_receiptData toDecodedMessage:(inout struct SecCmsMessageStr * *)_decodedMessage;
- (struct SecCmsSignedDataStr *)_extractSignedDataFromMessage:(struct SecCmsMessageStr *)_signedDataFromMessage;
- (signed char)_parseReceiptFromMessage:(struct SecCmsMessageStr *)_receiptFromMessage;
- (void)_parseTokens:(id)_tokens;
- (signed char)_setPoliciesForTrust:(struct __SecTrust *)_policiesForTrust checkRevocation:(signed char)_revocation;
- (long long)_verifySignatureCheckRevocation:(signed char)_signatureCheckRevocation useCurrentDate:(signed char)_currentDate;
- (long long)_verifySignatureForSignedData:(struct SecCmsSignedDataStr *)_signatureForSignedData onDate:(id)_date checkRevocation:(signed char)_revocation;
- (long long)checkSignature;
- (long long)checkSignatureAgainstCurrentDate;
- (long long)checkSignatureSkipRevocation;
- (signed char)validateAndCheckGUIDSepately:(char *)_andCheckGUIDSepately;

@end

#endif /* ISPurchaseReceipt_h */