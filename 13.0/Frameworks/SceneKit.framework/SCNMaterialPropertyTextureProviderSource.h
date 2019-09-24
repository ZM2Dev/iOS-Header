//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNTextureSource.h>

#import <SceneKit/SCNMaterialPropertyTextureProviderHelper-Protocol.h>

@class NSString;
@protocol MTLTexture, SCNMaterialPropertyTextureProvider;

__attribute__((visibility("hidden")))
@interface SCNMaterialPropertyTextureProviderSource : SCNTextureSource <SCNMaterialPropertyTextureProviderHelper>
{
    id <MTLTexture> _texture;
    struct __C3DEngineContext *_engineContext;
    id <SCNMaterialPropertyTextureProvider> _textureProvider;
}

- (id)cachedTextureWithURL:(id)arg1 token:(id *)arg2;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (void)connectToProxy:(struct __C3DImageProxy *)arg1;
@property(retain, nonatomic) id <SCNMaterialPropertyTextureProvider> textureProvider;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
