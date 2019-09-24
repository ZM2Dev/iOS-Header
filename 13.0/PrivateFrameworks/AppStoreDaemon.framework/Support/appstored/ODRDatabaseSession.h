//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SQLiteDatabaseSession-Protocol.h"

@class NSString, SQLiteConnection;

@interface ODRDatabaseSession : NSObject <SQLiteDatabaseSession>
{
    SQLiteConnection *_connection;
}

@property(readonly, nonatomic) SQLiteConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)_tagsWithPredicate:(id)arg1;
- (id)_downloadsWithPredicate:(id)arg1;
- (id)_assetPacksWithPredicate:(id)arg1 orderingProperties:(id)arg2;
- (id)_assetPacksWithPredicate:(id)arg1;
- (id)_assetPacksForBundleID:(id)arg1 withPurgeability:(_Bool)arg2 lastUsedMoreThan:(id)arg3;
- (id)_assetPacksForBundleID:(id)arg1 onlyOnDevice:(_Bool)arg2;
- (id)_assetDownloadsWithPredicate:(id)arg1;
- (id)workForBundleID:(id)arg1;
- (_Bool)validManifestExistsForApplication:(id)arg1 error:(id *)arg2;
- (id)totalSizeOfUnpurgeableAssetPacksForApplication:(id)arg1;
- (id)tagWithName:(id)arg1 andBundleID:(id)arg2;
- (id)tagsForBundleKey:(id)arg1;
- (id)tagsForApplication:(id)arg1;
- (id)purgedAssetPacksWithReason:(long long)arg1 forApplication:(id)arg2;
- (id)purgeableAssetPacks;
- (long long)preflightApplication:(id)arg1;
- (id)nonPurgeableAssetPacks;
- (id)missingPrefetchAssetPacksForApplication:(id)arg1;
- (id)missingInitialAssetPacksForApplication:(id)arg1;
- (id)manifestForAdamID:(id)arg1;
- (id)manifestForApplication:(id)arg1;
- (id)downloadsWithSourceURL:(id)arg1 andDestinationURL:(id)arg2;
- (id)downloadsWithIdentifier:(long long)arg1;
- (id)downloadedAssetPacksForBundleID:(id)arg1;
- (id)assetPacksWithTagNames:(id)arg1 forApplication:(id)arg2;
- (id)assetPacksWithLocalURL:(id)arg1;
- (id)assetPacksWithDownloadRequestUUIDs;
- (id)assetPackWithBundleKey:(id)arg1;
- (id)assetPacksForBundleID:(id)arg1 withPurgeability:(_Bool)arg2 lastUsedMoreThan:(id)arg3;
- (id)assetPacksForApplication:(id)arg1;
- (id)assetDownloadsForCoordinatorID:(id)arg1 ofType:(long long)arg2;
- (id)assetDownloadsForCoordinatorID:(id)arg1;
- (id)assetDownloadWithBundleID:(id)arg1 andBundleKey:(id)arg2;
- (id)assetDownloadsWithBundleID:(id)arg1;
- (_Bool)applicationNeedsRepair:(id)arg1 error:(id *)arg2;
- (id)allWork;
- (id)allDownloads;
- (id)allBundleIDs;
- (id)allAssetDownloads;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
