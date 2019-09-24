//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <NeutrinoCore/NUImageRenderResult-Protocol.h>

@class NSString, NUImageGeometry, NURegion;
@protocol NURenderStatistics;

@interface _NUImageRenderResult : _NURenderResult <NUImageRenderResult>
{
    NURegion *_region;
    NUImageGeometry *_geometry;
}

@property(retain) NUImageGeometry *geometry; // @synthesize geometry=_geometry;
@property(retain) NURegion *region; // @synthesize region=_region;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end
