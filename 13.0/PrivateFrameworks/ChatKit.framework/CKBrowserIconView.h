//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, UIImage;

__attribute__((visibility("hidden")))
@interface CKBrowserIconView : UIView
{
    double _percentComplete;
    UIImage *_iconImage;
    _Bool _animating;
    double _animationStartTime;
    double _animationStartPercentComplete;
    double _animationEndPercentComplete;
    CADisplayLink *_displayLink;
}

+ (id)_pieImageForPercentComplete:(double)arg1 size:(struct CGSize)arg2 center:(struct CGPoint)arg3 radius:(double)arg4;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double animationEndPercentComplete; // @synthesize animationEndPercentComplete=_animationEndPercentComplete;
@property(nonatomic) double animationStartPercentComplete; // @synthesize animationStartPercentComplete=_animationStartPercentComplete;
@property(nonatomic) double animationStartTime; // @synthesize animationStartTime=_animationStartTime;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (void).cxx_destruct;
- (void)_onDisplayLink:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setPercentComplete:(double)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
