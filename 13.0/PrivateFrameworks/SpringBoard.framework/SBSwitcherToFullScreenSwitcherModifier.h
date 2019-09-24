//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBSwitcherToFullScreenSwitcherModifier : SBTransitionSwitcherModifier
{
    _Bool _wantsMinificationFilter;
    SBAppLayout *_fullScreenAppLayout;
    SBSwitcherModifier *_multitaskingModifier;
    long long _direction;
}

@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) SBSwitcherModifier *multitaskingModifier; // @synthesize multitaskingModifier=_multitaskingModifier;
@property(readonly, nonatomic) SBAppLayout *fullScreenAppLayout; // @synthesize fullScreenAppLayout=_fullScreenAppLayout;
- (void).cxx_destruct;
- (id)appLayoutToScrollToDuringTransition;
- (_Bool)isEffectivelyFullScreen;
- (_Bool)wantsMinificationFilter;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)transitionWillBegin;
- (id)handleMainTransitionEvent:(id)arg1;
- (_Bool)asynchronouslyRendersUntilDelay:(inout double *)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 multitaskingModifier:(id)arg4;

@end
