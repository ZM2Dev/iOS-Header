//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGTextureProvider.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSObject, PXGAssetImageCache, PXGThumbnailRequestQueue, PXMediaProvider;
@protocol OS_dispatch_queue, PXGDisplayAssetPixelBufferSourcesProvider;

@interface PXGDisplayAssetTextureProvider : PXGTextureProvider
{
    NSObject<OS_dispatch_queue> *_videoSessionsRequestQueue;
    NSMapTable *_requestQueue_videoSessionsByAsset;
    NSMutableIndexSet *_requestQueue_textureRequestIDsWithDeliveredVideoFrames;
    PXGThumbnailRequestQueue *_requestQueue_thumbnailRequestQueue;
    NSMutableArray *_requestQueue_imageRequestQueue;
    NSMutableDictionary *_requestQueue_deferredImageRequestBlocksByTextureID;
    NSObject<OS_dispatch_queue> *_cancelationQueue;
    NSMutableDictionary *_cancelationQueue_mediaRequestIDByTextureID;
    NSMutableDictionary *_cancelationQueue_deferredMediaRequestIDByTextureID;
    PXGAssetImageCache *_imageCache;
    _Bool _isLowSpec;
    NSArray *_requestOptions;
    struct CGImage *_lightPlaceholderImage;
    struct CGImage *_darkPlaceholderImage;
    struct CGSize _largestImageDataSpecSize;
    double _masterThumbnailShortSide;
    double _deferMediumRequestShortSideLimit;
    _Bool _videoRequestsAllowed;
    PXMediaProvider *_mediaProvider;
    id <PXGDisplayAssetPixelBufferSourcesProvider> _pixelBufferSourcesProvider;
    double _displayLinkLastTargetTimestamp;
}

+ (CDUnknownBlockType)defaultMediaVersionHandlerWithDataSourceBeforeChanges:(id)arg1 dataSourceAfterChanges:(id)arg2;
@property(nonatomic) _Bool videoRequestsAllowed; // @synthesize videoRequestsAllowed=_videoRequestsAllowed;
@property double displayLinkLastTargetTimestamp; // @synthesize displayLinkLastTargetTimestamp=_displayLinkLastTargetTimestamp;
@property(retain, nonatomic) id <PXGDisplayAssetPixelBufferSourcesProvider> pixelBufferSourcesProvider; // @synthesize pixelBufferSourcesProvider=_pixelBufferSourcesProvider;
@property(readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
- (void).cxx_destruct;
- (void)_cancelationQueue_cancelImageRequests:(id)arg1;
- (void)cancelTextureRequests:(id)arg1;
- (void)_provideVideoFrameForVideoSession:(id)arg1;
- (void)_handlePixelBufferChangedForVideoSession:(id)arg1;
- (void)_startRequestingVideoTexturesForDisplayAsset:(id)arg1 pixelBufferSource:(id)arg2 textureRequestID:(int)arg3;
- (void)_requestVideoTexturesForSpriteAtIndex:(unsigned int)arg1 spriteReference:(id)arg2 displayAsset:(id)arg3 textureRequestID:(int)arg4;
- (void)_handleCGImageResult:(struct CGImage *)arg1 orientation:(unsigned int)arg2 info:(id)arg3 shouldCache:(_Bool)arg4 textureRequestID:(int)arg5;
- (void)_handleResult:(struct CGImage *)arg1 orientation:(long long)arg2 info:(id)arg3 targetSize:(struct CGSize)arg4 screenScale:(double)arg5 mediaRequest:(id)arg6 textureRequestID:(int)arg7;
- (void)_performDeferredImageRequest:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5 textureRequestID:(int)arg6;
- (void)_requestImageTexturesForSpriteIndex:(unsigned int)arg1 fetchResult:(id)arg2 observer:(id)arg3 presentationStyles:(unsigned long long)arg4 targetSize:(struct CGSize)arg5 screenScale:(double)arg6 textureRequestID:(int)arg7;
- (void)_processDeferredImageRequests;
- (void)_processImageRequests;
- (void)_processThumbnailRequests;
- (struct CGImage *)_placeholderImage;
- (void)didFinishRequestingTextures;
- (void)_requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 observer:(id)arg2 textureRequestIDs:(struct _NSRange)arg3 displayAssetFetchResult:(id)arg4 presentationStyles:(unsigned long long)arg5 targetSize:(struct CGSize)arg6 screenScale:(double)arg7;
- (_Bool)_imageSizeSatisfiedByThumbnail:(struct CGSize)arg1;
- (struct _NSRange)requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 geometries:(CDStruct_3ab912e1 *)arg2 styles:(CDStruct_506f5052 *)arg3 infos:(CDStruct_9d1ebe49 *)arg4 inLayout:(id)arg5;
- (void)interactionStateDidChange:(CDStruct_04522d6a)arg1;
- (void)registerImageDataSpecs:(id)arg1;
- (id)_requestOptionsForUseCase:(unsigned long long)arg1 forDrawing:(_Bool)arg2;
- (void)_setupRequestOptions;
- (void)dealloc;
- (id)initWithMediaProvider:(id)arg1;
- (id)init;

@end
