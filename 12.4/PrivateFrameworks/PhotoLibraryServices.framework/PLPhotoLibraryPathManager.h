//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLPhotoLibraryPathManager : NSObject
{
    struct os_unfair_lock_s _folderCreationLock;
    _Bool _temporaryOutboundSharingDirectoryExists;
    _Bool _photoDataMISCDirectoryExists;
    _Bool _photoDataCPLDirectoryExists;
    _Bool _photoDataCPLDerivativeDirectoryExists;
    _Bool _persistedAlbumDataDirectoryExists;
    _Bool _persistedFaceDataDirectoryExists;
    _Bool _photoCloudSharingCacheDataDirectoryExists;
    NSString *_baseDirectory;
    NSString *_photoDataDirectory;
    NSString *_photoDataCachesDirectory;
    NSString *_dcimDirectory;
    NSString *_cplAssetsDirectory;
    NSString *_cmmAssetsDirectory;
    NSString *_iTunesPhotosDirectory;
    NSString *_changeStoreDatabasePath;
    NSString *_assetUUIDRecoveryMappingPath;
    NSString *_legacyModelInterestDatabasePath;
    NSString *_legacyMemoriesRelatedSnapshotDirectory;
}

+ (id)systemLibraryManager;
@property(readonly, nonatomic) NSString *legacyMemoriesRelatedSnapshotDirectory; // @synthesize legacyMemoriesRelatedSnapshotDirectory=_legacyMemoriesRelatedSnapshotDirectory;
@property(readonly, nonatomic) NSString *legacyModelInterestDatabasePath; // @synthesize legacyModelInterestDatabasePath=_legacyModelInterestDatabasePath;
@property(readonly, nonatomic) NSString *assetUUIDRecoveryMappingPath; // @synthesize assetUUIDRecoveryMappingPath=_assetUUIDRecoveryMappingPath;
@property(readonly, nonatomic) NSString *changeStoreDatabasePath; // @synthesize changeStoreDatabasePath=_changeStoreDatabasePath;
@property(readonly, nonatomic) NSString *iTunesPhotosDirectory; // @synthesize iTunesPhotosDirectory=_iTunesPhotosDirectory;
@property(readonly, nonatomic) NSString *cmmAssetsDirectory; // @synthesize cmmAssetsDirectory=_cmmAssetsDirectory;
@property(readonly, nonatomic) NSString *cplAssetsDirectory; // @synthesize cplAssetsDirectory=_cplAssetsDirectory;
@property(readonly, nonatomic) NSString *dcimDirectory; // @synthesize dcimDirectory=_dcimDirectory;
@property(readonly, nonatomic) NSString *photoDataCachesDirectory; // @synthesize photoDataCachesDirectory=_photoDataCachesDirectory;
@property(readonly, nonatomic) NSString *photoDataDirectory; // @synthesize photoDataDirectory=_photoDataDirectory;
@property(readonly, nonatomic) NSString *baseDirectory; // @synthesize baseDirectory=_baseDirectory;
- (void).cxx_destruct;
- (id)assetsDataDirectory;
- (id)lightweightReimportPhotoCloudSharingDataDirectory;
- (id)photoCloudSharingCacheDataDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)photoCloudSharingMetadataDirectory;
- (id)photoCloudSharingDataDirectory;
- (id)photoStreamsDataDirectory;
- (id)knownDBPaths;
- (id)syncInfoPath;
- (id)streamsLibraryUpdatingExpiredIndicatorFilePath;
- (id)libraryAvailableIndicatorFilePath;
- (id)sqliteErrorIndicatorFilePath;
- (id)imageWriterIndicatorFilePath;
- (id)pathToAssetsToAlbumsMapping;
- (id)persistedFaceDataDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)persistedAlbumDataDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)photoDataCPLDerivativeDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)photoDataCPLDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)photoDataMiscDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)temporaryDragAndDropDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)temporaryFileBackedDebugDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)temporaryOutboundSharingDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)photoMutationsDirectory;
- (id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg1;
- (id)photoMetadataDirectory;
- (id)iTunesSyncedFaceDataDirectory;
- (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
- (id)iTunesSyncedAssetSmallThumbnailsDirectory;
- (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
- (id)iTunesSyncedAssetsDirectory;
- (id)iTunesPhotosSyncCurrentLibraryUUIDPath;
- (id)iTunesPhotosLastSyncMetadataFilePath;
- (id)iTunesPhotosSyncMetadataFilePath;
- (id)iTunesPhotosSyncDirectory;
@property(readonly, nonatomic) NSString *thumbnailsV2Directory;
@property(readonly, nonatomic) NSString *thumbnailsDirectory;
- (id)variationCacheDirectory;
- (id)miroCacheDirectory;
- (id)visionServiceCacheDirectory;
- (id)graphServiceCacheDirectory;
- (id)photosCPLDatabasePath;
- (id)photosAsideDatabasePath;
- (id)photosDatabasePath;
- (id)initWithBaseDirectory:(id)arg1;

@end
