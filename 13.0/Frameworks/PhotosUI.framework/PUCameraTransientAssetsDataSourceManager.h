//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSourceManager.h>

#import <PhotosUI/PUTransientDataSourceChangeObserver-Protocol.h>

@class NSString;
@protocol PUDisplayAssetCollection, PUTransientDataSource;

@interface PUCameraTransientAssetsDataSourceManager : PUAssetsDataSourceManager <PUTransientDataSourceChangeObserver>
{
    id <PUTransientDataSource> __transientDataSource;
    id <PUDisplayAssetCollection> __containingAssetCollection;
}

@property(readonly, nonatomic) id <PUDisplayAssetCollection> _containingAssetCollection; // @synthesize _containingAssetCollection=__containingAssetCollection;
@property(readonly, nonatomic) id <PUTransientDataSource> _transientDataSource; // @synthesize _transientDataSource=__transientDataSource;
- (void).cxx_destruct;
- (void)transientDataSourceDidChange:(id)arg1;
- (void)_updateWithTransientDataSource:(id)arg1;
- (id)initWithTransientDataSource:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
