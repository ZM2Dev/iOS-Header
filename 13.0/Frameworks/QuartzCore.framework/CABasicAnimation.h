//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAPropertyAnimation.h>

@interface CABasicAnimation : CAPropertyAnimation
{
}

- (double)_timeFunction:(double)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
@property(retain) id byValue;
@property(retain) id toValue;
@property(retain) id fromValue;
- (void)CA_prepareRenderValue;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
@property double endAngle;
@property double startAngle;
@property _Bool roundsToInteger;

@end

