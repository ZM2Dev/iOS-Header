//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPinchGestureRecognizer.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface UIKeyboardFloatingPinchGestureRecognizer : UIPinchGestureRecognizer
{
    NSMutableSet *_activeTouches;
}

- (void).cxx_destruct;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
