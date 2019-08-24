//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSMutableArray, UIEvent, UIResponder, UIWindow;

@protocol _UIResponderForwardable <NSObject>
@property(readonly, nonatomic) UIWindow *window;
@property(retain, nonatomic, setter=_setResponder:) UIResponder *_responder;
@property(nonatomic, setter=_setForwardablePhase:) long long _forwardablePhase;
- (NSMutableArray *)_mutableForwardingRecord;
- (void)_abandonForwardingRecord;
- (_Bool)_isAbandoningForwardingRecord;
- (NSArray *)gestureRecognizers;
- (SEL)_responderSelectorForPhase:(long long)arg1;
- (NSArray *)_forwardingRecord;
- (_Bool)_wantsForwardingFromResponder:(UIResponder *)arg1 toNextResponder:(UIResponder *)arg2 withEvent:(UIEvent *)arg3;
@end
