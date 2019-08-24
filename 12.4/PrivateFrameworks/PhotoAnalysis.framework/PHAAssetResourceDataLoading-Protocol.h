//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSArray, PHAAssetResourceDataLoadingOptions, PHAssetResource;

@protocol PHAAssetResourceDataLoading <NSObject>
- (void)cancelAllDownloads;
- (void)requestDataForAssetResource:(PHAssetResource *)arg1 options:(PHAAssetResourceDataLoadingOptions *)arg2 completion:(void (^)(NSURL *, NSData *, NSError *))arg3;
- (PHAssetResource *)assetResourceFromAcceptableAssetResources:(NSArray *)arg1 options:(PHAAssetResourceDataLoadingOptions *)arg2;
@end
