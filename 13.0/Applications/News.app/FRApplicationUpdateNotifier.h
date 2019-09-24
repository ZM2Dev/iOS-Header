//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCAppActivityObserving-Protocol.h"

@class FRVersionHelpers, NSDate, NSString, UIViewController;

@interface FRApplicationUpdateNotifier : NSObject <FCAppActivityObserving>
{
    _Bool _isPresentingAlert;
    UIViewController *_viewController;
    NSDate *_nextAlertPresentationDate;
    long long _alertPresentationCount;
    FRVersionHelpers *_versionHelpers;
}

@property(retain, nonatomic) FRVersionHelpers *versionHelpers; // @synthesize versionHelpers=_versionHelpers;
@property(nonatomic) _Bool isPresentingAlert; // @synthesize isPresentingAlert=_isPresentingAlert;
@property(nonatomic) long long alertPresentationCount; // @synthesize alertPresentationCount=_alertPresentationCount;
@property(copy, nonatomic) NSDate *nextAlertPresentationDate; // @synthesize nextAlertPresentationDate=_nextAlertPresentationDate;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (_Bool)shouldPresentLastAlertForCurrentUpdate;
- (_Bool)isAlertPresentationIntervalPassed;
- (void)launchSettings;
- (void)updateAlertDidDismiss:(_Bool)arg1;
- (void)showAppUpdateAlert;
- (_Bool)shouldShowUpdateAlert;
- (void)persistStates;
- (void)restoreStates;
- (id)persistableProperties;
- (void)setup;
- (id)initWithVersionHelpers:(id)arg1 appActivityMonitor:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
