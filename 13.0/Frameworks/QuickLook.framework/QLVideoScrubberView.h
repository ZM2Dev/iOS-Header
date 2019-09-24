//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QuickLook/PHVideoScrubberViewInteractionDelegate-Protocol.h>

@class NSString, PHVideoScrubberView, UIScrollView;

__attribute__((visibility("hidden")))
@interface QLVideoScrubberView : UIView <PHVideoScrubberViewInteractionDelegate>
{
    _Bool _userInteractingWithScrubber;
    _Bool _touchGestureIsActive;
    PHVideoScrubberView *_photosScrubber;
}

@property(nonatomic) _Bool touchGestureIsActive; // @synthesize touchGestureIsActive=_touchGestureIsActive;
@property(getter=isUserInteractingWithScrubber) _Bool userInteractingWithScrubber; // @synthesize userInteractingWithScrubber=_userInteractingWithScrubber;
- (void).cxx_destruct;
- (void)_updateUserInteractingWithScrubberIfNeeded;
- (void)didBeginTouchingVideoScrubberView:(id)arg1;
- (void)didEndTouchingVideoScrubberView:(id)arg1;
- (void)videoScrubberView:(id)arg1 didEndDeceleratingInScrollView:(id)arg2;
- (void)videoScrubberView:(id)arg1 didEndDraggingInScrollView:(id)arg2;
- (void)videoScrubberView:(id)arg1 willBeginDeceleratingInScrollView:(id)arg2;
- (void)videoScrubberView:(id)arg1 willBeginDraggingInScrollView:(id)arg2;
@property(readonly) UIScrollView *scrollView;
@property(readonly) PHVideoScrubberView *photosScrubber; // @synthesize photosScrubber=_photosScrubber;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
