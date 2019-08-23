//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "XBSnapshotDataProvider-Protocol.h"

@class FBSceneSnapshot, NSString, SBSnapshotDataProviderContext, UIImage, XBSnapshotDataProviderContext;

@interface SBFallbackSnapshotDataProvider : NSObject <XBSnapshotDataProvider>
{
    FBSceneSnapshot *_snapshot;
    SBSnapshotDataProviderContext *_context;
    double _scaleFactor;
    UIImage *_cachedImage;
    void *_processedSurface;
}

@property(readonly, retain, nonatomic) XBSnapshotDataProviderContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_invalidateSnapshotData;
- (id)fetchImage;
- (void *)IOSurface;
- (void)dealloc;
- (id)initWithSceneSnapshot:(id)arg1 scaleFactor:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
