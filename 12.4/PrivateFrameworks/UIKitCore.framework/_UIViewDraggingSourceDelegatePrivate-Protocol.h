//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIViewDraggingSourceDelegate-Protocol.h>

@class NSArray, UIView;

@protocol _UIViewDraggingSourceDelegatePrivate <_UIViewDraggingSourceDelegate>

@optional
- (long long)_view:(UIView *)arg1 dataOwnerOfDragSourceWithIndex:(unsigned long long)arg2;
- (NSArray *)_requiredContextIDsForDragSessionInView:(UIView *)arg1;
- (_Bool)_shouldPerformHitTestingForDragSessionInView:(UIView *)arg1;
@end

