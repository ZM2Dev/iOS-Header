//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNMapsAppStateMonitorObserver-Protocol.h>
#import <Navigation/MNNavigationSessionObserver-Protocol.h>

@class MNHybridLocationProvider, MNMapsAppStateMonitor, NSString;

__attribute__((visibility("hidden")))
@interface MNTransitLocationCoordinator : NSObject <MNMapsAppStateMonitorObserver, MNNavigationSessionObserver>
{
    MNMapsAppStateMonitor *_appStateMonitor;
    MNHybridLocationProvider *_locationProvider;
}

@property(readonly, nonatomic) MNHybridLocationProvider *locationProvider; // @synthesize locationProvider=_locationProvider;
- (void).cxx_destruct;
- (void)mapsAppStateMonitor:(id)arg1 didChangeToState:(unsigned int)arg2;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationSessionDidStop:(id)arg1;
- (void)navigationSessionDidStart:(id)arg1;
- (void)_invalidateXPCActivities;
- (void)_scheduleXPCActivityAfter:(double)arg1 duration:(double)arg2;
- (void)_stop;
- (void)_start;
- (void)dealloc;
- (id)initWithHybridLocationProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
