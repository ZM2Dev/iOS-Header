//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSExternalBehaviorProviding-Protocol.h>
#import <SpringBoard/CSExternalEventHandling-Protocol.h>

@class CSCoverSheetViewController, NSString, SBDashBoardSetupViewController, SBSetupManager;

@interface SBDashBoardSetupController : NSObject <CSExternalBehaviorProviding, CSExternalEventHandling>
{
    CSCoverSheetViewController *_coverSheetViewController;
    SBSetupManager *_setupManager;
    SBDashBoardSetupViewController *_setupViewController;
}

- (void).cxx_destruct;
- (void)_clearSetupViewIfNecessaryAnimated:(_Bool)arg1;
- (void)_addOrRemoveSetupViewIfNecessaryAnimated:(_Bool)arg1;
- (void)_configureForCurrentSetupMode;
- (void)_setupModeChanged:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (void)dealloc;
- (id)initWithCoverSheetViewController:(id)arg1 setupManager:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
