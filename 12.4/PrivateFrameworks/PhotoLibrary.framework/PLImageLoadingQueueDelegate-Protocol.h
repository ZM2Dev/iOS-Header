//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class PLCachedImage, PLImageLoadingQueue, PLImageSource, PLManagedAsset;

@protocol PLImageLoadingQueueDelegate <NSObject>
- (void)imageLoadingQueue:(PLImageLoadingQueue *)arg1 didLoadImage:(PLCachedImage *)arg2 forAsset:(PLManagedAsset *)arg3 fromSource:(PLImageSource *)arg4;
@end

