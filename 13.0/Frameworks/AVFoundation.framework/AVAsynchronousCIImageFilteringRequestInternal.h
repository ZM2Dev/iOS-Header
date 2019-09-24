//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsynchronousVideoCompositionRequest, CIImage;

__attribute__((visibility("hidden")))
@interface AVAsynchronousCIImageFilteringRequestInternal : NSObject
{
    AVAsynchronousVideoCompositionRequest *_compositingRequest;
    CDUnknownBlockType _cancellationTest;
    CDUnknownBlockType _defaultCIContextProvider;
    CDUnknownBlockType _completionHandler;
    CIImage *_sourceCIImage;
    struct __CVBuffer *_sourcePBuf;
}

@property(retain, nonatomic) struct __CVBuffer *sourcePBuf; // @synthesize sourcePBuf=_sourcePBuf;
@property(retain, nonatomic) CIImage *sourceCIImage; // @synthesize sourceCIImage=_sourceCIImage;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType defaultCIContextProvider; // @synthesize defaultCIContextProvider=_defaultCIContextProvider;
@property(copy, nonatomic) CDUnknownBlockType cancellationTest; // @synthesize cancellationTest=_cancellationTest;
@property(retain, nonatomic) AVAsynchronousVideoCompositionRequest *compositingRequest; // @synthesize compositingRequest=_compositingRequest;
- (void)dealloc;
- (void)_willDeallocOrFinalize;

@end
