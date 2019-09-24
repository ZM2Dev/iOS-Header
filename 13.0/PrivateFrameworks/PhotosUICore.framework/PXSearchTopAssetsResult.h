//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PHPhotoLibraryChangeObserver-Protocol.h>
#import <PhotosUICore/PXSearchResultItem-Protocol.h>

@class NSArray, NSDictionary, NSString, PHFetchResult;
@protocol PXSearchTopAssetsResultChangeDelegate;

@interface PXSearchTopAssetsResult : NSObject <PHPhotoLibraryChangeObserver, PXSearchResultItem>
{
    NSArray *_assetUUIDs;
    PHFetchResult *_topAssetsFetchResult;
    id <PXSearchTopAssetsResultChangeDelegate> _delegate;
    CDUnknownBlockType _topAssetFilter;
    NSString *_priorityAssetUUID;
    NSArray *_removedObjects;
    NSArray *_hiddenObjects;
}

+ (id)sampledAssetUUIDsFrom:(id)arg1 numberOfTopAssets:(long long)arg2 maxNumberToSample:(long long)arg3 rangeToSample:(long long)arg4;
+ (id)sortedPreviewAssetsFrom:(id)arg1 priorityAssetUUID:(id)arg2 numberOfTopAssets:(long long)arg3;
+ (id)_fetchAssetsForAssetUUIDs:(id)arg1;
+ (id)_fetchResultForTopAssets:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *hiddenObjects; // @synthesize hiddenObjects=_hiddenObjects;
@property(readonly, copy, nonatomic) NSArray *removedObjects; // @synthesize removedObjects=_removedObjects;
@property(readonly, copy, nonatomic) NSString *priorityAssetUUID; // @synthesize priorityAssetUUID=_priorityAssetUUID;
@property(copy, nonatomic) CDUnknownBlockType topAssetFilter; // @synthesize topAssetFilter=_topAssetFilter;
@property(nonatomic) __weak id <PXSearchTopAssetsResultChangeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PHFetchResult *topAssetsFetchResult; // @synthesize topAssetsFetchResult=_topAssetsFetchResult;
@property(readonly, nonatomic) NSArray *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
- (void).cxx_destruct;
- (id)init;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSDictionary *debugDictionary;
- (unsigned long long)numberOfTopAssets;
- (void)_curateThumbnailAssets;
@property(readonly, nonatomic) unsigned long long itemType;
- (_Bool)_shouldRecurateForChangeDetails:(id)arg1;
- (void)_notifyDelegateOfAssetChanges:(id)arg1 newCuration:(_Bool)arg2;
- (void)photoLibraryDidChange:(id)arg1;
- (void)_filterTopAssets:(id)arg1;
- (void)dealloc;
- (id)initWithAssetUUIDs:(id)arg1 priorityAssetUUID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
