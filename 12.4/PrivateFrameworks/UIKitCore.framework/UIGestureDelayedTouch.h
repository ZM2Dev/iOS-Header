//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIEvent, UITouch;

__attribute__((visibility("hidden")))
@interface UIGestureDelayedTouch : NSObject <NSCopying>
{
    UITouch *_touch;
    UITouch *_stateWhenDelayed;
    UITouch *_stateWhenDelivered;
    UIEvent *_event;
    long long _delayCount;
    _Bool _cloneForSecondDelivery;
}

@property _Bool cloneForSecondDelivery; // @synthesize cloneForSecondDelivery=_cloneForSecondDelivery;
@property(retain, nonatomic) UIEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) UITouch *stateWhenDelivered; // @synthesize stateWhenDelivered=_stateWhenDelivered;
@property(retain, nonatomic) UITouch *stateWhenDelayed; // @synthesize stateWhenDelayed=_stateWhenDelayed;
@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;
- (void).cxx_destruct;
- (id)description;
- (double)timestampForDelivery;
- (long long)phaseForDelivery;
- (void)saveCurrentTouchState;
- (long long)delayCount;
- (void)incrementDelayCount;
- (long long)decrementDelayCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
