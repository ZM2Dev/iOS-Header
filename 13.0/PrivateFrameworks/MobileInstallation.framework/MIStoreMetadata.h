//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileInstallation/NSCopying-Protocol.h>
#import <MobileInstallation/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface MIStoreMetadata : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _hasMessagesExtension;
    _Bool _purchasedRedownload;
    _Bool _launchProhibited;
    _Bool _gameCenterEnabled;
    _Bool _gameCenterEverEnabled;
    _Bool _isAutoDownload;
    _Bool _sideLoadedDeviceBasedVPP;
    _Bool _deviceBasedVPP;
    NSString *_iAdAttribution;
    NSString *_iAdConversionDate;
    NSString *_iAdImpressionDate;
    NSString *_artistName;
    NSNumber *_betaExternalVersionIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleShortVersionString;
    NSString *_purchaseDate;
    NSString *_appleID;
    NSNumber *_DSPersonID;
    NSNumber *_downloaderID;
    NSNumber *_familyID;
    NSNumber *_purchaserID;
    NSString *_altDSID;
    NSNumber *_initialODRSize;
    NSNumber *_itemID;
    NSString *_itemName;
    NSString *_kind;
    NSString *_label;
    NSString *_ratingLabel;
    NSNumber *_ratingRank;
    NSString *_releaseDate;
    NSString *_softwareVersionBundleID;
    NSNumber *_softwareVersionExternalIdentifier;
    NSString *_sourceApp;
    NSString *_storeCohort;
    NSNumber *_storefront;
    NSString *_variantID;
    NSString *_genre;
    NSNumber *_genreID;
    NSArray *_subGenres;
    NSString *_referrerURL;
    NSString *_referrerApp;
    NSString *_enterpriseInstallURL;
    NSString *_redownloadParams;
    NSDictionary *_nameTranscriptions;
}

+ (id)metadataFromDictionary:(id)arg1;
+ (id)metadataFromPlistAtURL:(id)arg1 error:(id *)arg2;
+ (id)metadataFromPlistData:(id)arg1 error:(id *)arg2;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *nameTranscriptions; // @synthesize nameTranscriptions=_nameTranscriptions;
@property(copy, nonatomic) NSString *redownloadParams; // @synthesize redownloadParams=_redownloadParams;
@property(copy, nonatomic) NSString *enterpriseInstallURL; // @synthesize enterpriseInstallURL=_enterpriseInstallURL;
@property(nonatomic) _Bool deviceBasedVPP; // @synthesize deviceBasedVPP=_deviceBasedVPP;
@property(nonatomic) _Bool sideLoadedDeviceBasedVPP; // @synthesize sideLoadedDeviceBasedVPP=_sideLoadedDeviceBasedVPP;
@property(copy, nonatomic) NSString *referrerApp; // @synthesize referrerApp=_referrerApp;
@property(copy, nonatomic) NSString *referrerURL; // @synthesize referrerURL=_referrerURL;
@property(nonatomic) _Bool isAutoDownload; // @synthesize isAutoDownload=_isAutoDownload;
@property(nonatomic) _Bool gameCenterEverEnabled; // @synthesize gameCenterEverEnabled=_gameCenterEverEnabled;
@property(nonatomic, getter=isGameCenterEnabled) _Bool gameCenterEnabled; // @synthesize gameCenterEnabled=_gameCenterEnabled;
@property(copy, nonatomic) NSArray *subGenres; // @synthesize subGenres=_subGenres;
@property(retain, nonatomic) NSNumber *genreID; // @synthesize genreID=_genreID;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *variantID; // @synthesize variantID=_variantID;
@property(retain, nonatomic) NSNumber *storefront; // @synthesize storefront=_storefront;
@property(copy, nonatomic) NSString *storeCohort; // @synthesize storeCohort=_storeCohort;
@property(copy, nonatomic) NSString *sourceApp; // @synthesize sourceApp=_sourceApp;
@property(retain, nonatomic) NSNumber *softwareVersionExternalIdentifier; // @synthesize softwareVersionExternalIdentifier=_softwareVersionExternalIdentifier;
@property(copy, nonatomic) NSString *softwareVersionBundleID; // @synthesize softwareVersionBundleID=_softwareVersionBundleID;
@property(copy, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(retain, nonatomic) NSNumber *ratingRank; // @synthesize ratingRank=_ratingRank;
@property(copy, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(nonatomic, getter=isLaunchProhibited) _Bool launchProhibited; // @synthesize launchProhibited=_launchProhibited;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(retain, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(nonatomic, getter=isPurchasedRedownload) _Bool purchasedRedownload; // @synthesize purchasedRedownload=_purchasedRedownload;
@property(retain, nonatomic) NSNumber *initialODRSize; // @synthesize initialODRSize=_initialODRSize;
@property(nonatomic) _Bool hasMessagesExtension; // @synthesize hasMessagesExtension=_hasMessagesExtension;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSNumber *purchaserID; // @synthesize purchaserID=_purchaserID;
@property(retain, nonatomic) NSNumber *familyID; // @synthesize familyID=_familyID;
@property(retain, nonatomic) NSNumber *downloaderID; // @synthesize downloaderID=_downloaderID;
@property(retain, nonatomic) NSNumber *DSPersonID; // @synthesize DSPersonID=_DSPersonID;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy, nonatomic) NSString *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(copy, nonatomic) NSString *bundleShortVersionString; // @synthesize bundleShortVersionString=_bundleShortVersionString;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSNumber *betaExternalVersionIdentifier; // @synthesize betaExternalVersionIdentifier=_betaExternalVersionIdentifier;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy, nonatomic) NSString *iAdImpressionDate; // @synthesize iAdImpressionDate=_iAdImpressionDate;
@property(copy, nonatomic) NSString *iAdConversionDate; // @synthesize iAdConversionDate=_iAdConversionDate;
@property(copy, nonatomic) NSString *iAdAttribution; // @synthesize iAdAttribution=_iAdAttribution;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end
