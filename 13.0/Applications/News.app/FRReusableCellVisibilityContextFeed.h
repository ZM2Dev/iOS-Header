//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FRReusableCellVisibilityContext.h"

@class FCFeedDescriptor;

@interface FRReusableCellVisibilityContextFeed : FRReusableCellVisibilityContext
{
    FCFeedDescriptor *_feed;
    struct CGRect _viewFrameInScreen;
}

@property(readonly, nonatomic) struct CGRect viewFrameInScreen; // @synthesize viewFrameInScreen=_viewFrameInScreen;
@property(readonly, copy, nonatomic) FCFeedDescriptor *feed; // @synthesize feed=_feed;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFeed:(id)arg1 viewFrameInScreen:(struct CGRect)arg2;

@end
