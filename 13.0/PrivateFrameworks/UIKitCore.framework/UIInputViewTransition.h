//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIInputViewSet;

__attribute__((visibility("hidden")))
@interface UIInputViewTransition : NSObject
{
    UIInputViewSet *oldSet;
    UIInputViewSet *newSet;
}

- (void)postNotificationsForTransitionEnd;
- (void)postNotificationsForTransitionStart;
- (id)newSet;
@property(readonly, nonatomic) UIInputViewSet *oldSet;

@end
