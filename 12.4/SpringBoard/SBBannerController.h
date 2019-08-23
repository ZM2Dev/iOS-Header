//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBAlertObserver-Protocol.h"
#import "SBAssistantObserver-Protocol.h"
#import "SBBannerContainerViewControllerDelegate-Protocol.h"
#import "SBBulletinBusyClient-Protocol.h"
#import "SBBulletinWindowClient-Protocol.h"
#import "SBUIBannerTargetImplementation-Protocol.h"

@class NSHashTable, NSMapTable, NSMutableArray, NSString, SBAlert, SBBannerContainerViewController;

@interface SBBannerController : NSObject <SBUIBannerTargetImplementation, SBAssistantObserver, SBAlertObserver, SBBannerContainerViewControllerDelegate, SBBulletinWindowClient, SBBulletinBusyClient>
{
    NSHashTable *_sources;
    NSMutableArray *_pendingBannerContextsNeedingRepop;
    SBAlert *_topAlert;
    SBBannerContainerViewController *_bannerViewController;
    _Bool _soundIsPlaying;
    _Bool _dismissalOverdue;
    _Bool _replaceDelayIsActive;
    _Bool _showingStickyDurationBanner;
    _Bool _suppressingBanners;
    _Bool _enableDelayActive;
    _Bool _assistantIsFullyVisible;
    _Bool _locked;
    unsigned long long _transitionCount;
    long long _overdueDismissReason;
    CDUnknownBlockType _overdueCompletionBlock;
    _Bool _dismissingBannerForAssistantReveal;
    _Bool _dismissingBannerForAssistantDismiss;
    CDUnknownBlockType _assistantRevealCompletionBlock;
    CDUnknownBlockType _assistantDismissCompletionBlock;
    NSMapTable *_bannerContextToViewControllerCache;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
@property(retain, nonatomic) SBAlert *topAlert; // @synthesize topAlert=_topAlert;
- (void).cxx_destruct;
- (void)bannerViewControllerDidDismissAction:(id)arg1;
- (void)bannerViewControllerDidSelectAction:(id)arg1;
- (void)_setBannerSticky:(_Bool)arg1;
- (void)_cancelBannerDismissTimers;
- (void)_setupBannerDismissTimers;
- (id)_bannerItem;
- (id)_bannerContext;
- (id)_bannerContainerView;
- (void)_performReplaceTransitionWithContext:(id)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performHideTransitionWithContext:(id)arg1 animated:(_Bool)arg2 reason:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setBannerViewControllerForContext:(id)arg1;
- (void)_performRevealTransitionWithContext:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performTransition:(long long)arg1 withAnimation:(_Bool)arg2 context:(id)arg3 reason:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_viewControllerForPresentation;
- (id)_newBannerContentViewController;
- (void)_fireCompletionBlockForBannerAnimationForAssistantDismissIfNecessary;
- (void)_fireCompletionBlockForBannerAnimationForAssistantRevealIfNecessary;
- (void)_setOverdueCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_soundDidFinishPlayingForBannerContext:(id)arg1;
- (void)_dismissOverdueOrDequeueIfPossible;
- (void)_stopCurrentSound;
- (void)_replaceIntervalElapsed;
- (void)_dismissIntervalElapsed;
- (void)_tryToDismissWithAnimation:(_Bool)arg1 reason:(long long)arg2 forceEvenIfBusy:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_presentBannerForContext:(id)arg1 reason:(long long)arg2;
- (_Bool)_shouldPendStickyBannerContext:(id)arg1 withReason:(long long)arg2;
- (_Bool)_dequeueBannerIfPossibleIgnoringStickyBanner:(_Bool)arg1 existingDismissReason:(long long)arg2;
- (_Bool)_dequeueBannerIfPossible;
- (_Bool)_canDequeueIgnoringStickyBanner:(_Bool)arg1;
- (id)_dequeueNextBannerContext;
- (_Bool)_isItemShowable:(id)arg1 fromSource:(id)arg2;
- (void)_dequeueAfterDelayIfPossible;
- (void)_updateBannerSuppressionStateAndDequeueIfPossible:(_Bool)arg1 withDelay:(_Bool)arg2;
- (void)_updateBannerSuppressionState;
- (void)_removePendingContextsForSourceNeedingRepop:(id)arg1;
- (id)_pendingBannerContextForSourceNeedingRepop:(id)arg1;
- (void)_lockStateChanged:(id)arg1;
- (void)assistant:(id)arg1 viewDidDisappear:(long long)arg2;
- (void)assistant:(id)arg1 viewWillDisappear:(long long)arg2;
- (void)assistant:(id)arg1 viewDidAppear:(long long)arg2;
- (void)assistant:(id)arg1 viewWillAppear:(long long)arg2;
- (void)alertBannerSuppressionChanged:(id)arg1;
- (void)bulletinWindowStoppedBeingBusy;
- (void)removeCachedBannerForContext:(id)arg1;
- (void)cacheBannerForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dismissCurrentBannerContextForSource:(id)arg1;
- (id)currentBannerContextForSource:(id)arg1;
- (void)signalSource:(id)arg1;
- (void)modallyPresentBannerWithContext:(id)arg1;
- (void)unregisterSource:(id)arg1;
- (void)registerSource:(id)arg1;
@property(readonly, nonatomic) long long bannerTargetIdiom;
@property(readonly, nonatomic) void *bannerTargetIdentifier;
- (void)dismissBannerWithAnimation:(_Bool)arg1 reason:(long long)arg2 forceEvenIfBusy:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissBannerWithAnimation:(_Bool)arg1 reason:(long long)arg2 forceEvenIfBusy:(_Bool)arg3;
- (void)dismissBannerWithAnimation:(_Bool)arg1 reason:(long long)arg2;
- (_Bool)isTransitioningBanner;
- (_Bool)isShowingModalBannerWithKeyboard;
- (_Bool)isShowingModalBanner;
- (_Bool)isShowingBanner;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
