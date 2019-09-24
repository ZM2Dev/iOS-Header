//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScreenEdgePanGestureRecognizer.h>

@protocol SBSystemGestureRecognizerDelegate;

@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer
{
    double _grabberActiveZoneWidth;
}

@property(nonatomic) double grabberActiveZoneWidth; // @synthesize grabberActiveZoneWidth=_grabberActiveZoneWidth;
- (_Bool)isLocationWithinGrabberActiveZone;
- (long long)_touchInterfaceOrientation;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)sb_commonInitScreenEdgePanGestureRecognizer;

// Remaining properties
@property(nonatomic) __weak id <SBSystemGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end
