//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/RCAudioSessionRoutingMPAVRoutingControllerDelegate-Protocol.h>

@class AVAudioSessionPortDescription, MPAVRoute, NSArray, NSString, RCAudioSessionRoutingMPAVRoutingController;

@interface RCAudioSessionRoutingController : NSObject <RCAudioSessionRoutingMPAVRoutingControllerDelegate>
{
    _Bool _useVoiceMemoSettings;
    _Bool _enableProximityMonitorIfAppropriateForOutputRoute;
    _Bool _enableProximityMonitorIfAppropriateForInputRoute;
    _Bool _shouldInitializeRouteUsingUserDefaults;
    _Bool _canReportStateUsingCachedPickedOutputRoute;
    _Bool _hasYetToPickARouteAndHeadphonesArePresent;
    struct __CFArray *_weakSessionRoutingAssertions;
    RCAudioSessionRoutingMPAVRoutingController *_mpRoutingController;
    MPAVRoute *_cachedPickedOutputRoute;
    NSArray *_cachedPickableOutputRoutes;
    AVAudioSessionPortDescription *_cachedPickedInputRoutePortDescription;
}

+ (id)sharedRouteController;
@property(readonly, nonatomic) AVAudioSessionPortDescription *cachedPickedInputRoutePortDescription; // @synthesize cachedPickedInputRoutePortDescription=_cachedPickedInputRoutePortDescription;
@property(readonly, nonatomic) NSArray *cachedPickableOutputRoutes; // @synthesize cachedPickableOutputRoutes=_cachedPickableOutputRoutes;
@property(readonly, nonatomic) MPAVRoute *cachedPickedOutputRoute; // @synthesize cachedPickedOutputRoute=_cachedPickedOutputRoute;
@property(readonly, nonatomic) _Bool hasYetToPickARouteAndHeadphonesArePresent; // @synthesize hasYetToPickARouteAndHeadphonesArePresent=_hasYetToPickARouteAndHeadphonesArePresent;
@property(readonly, nonatomic) _Bool canReportStateUsingCachedPickedOutputRoute; // @synthesize canReportStateUsingCachedPickedOutputRoute=_canReportStateUsingCachedPickedOutputRoute;
@property(readonly, nonatomic) _Bool shouldInitializeRouteUsingUserDefaults; // @synthesize shouldInitializeRouteUsingUserDefaults=_shouldInitializeRouteUsingUserDefaults;
@property(readonly, nonatomic) RCAudioSessionRoutingMPAVRoutingController *mpRoutingController; // @synthesize mpRoutingController=_mpRoutingController;
@property(readonly, nonatomic) struct __CFArray *weakSessionRoutingAssertions; // @synthesize weakSessionRoutingAssertions=_weakSessionRoutingAssertions;
@property(nonatomic) _Bool enableProximityMonitorIfAppropriateForInputRoute; // @synthesize enableProximityMonitorIfAppropriateForInputRoute=_enableProximityMonitorIfAppropriateForInputRoute;
@property(nonatomic) _Bool enableProximityMonitorIfAppropriateForOutputRoute; // @synthesize enableProximityMonitorIfAppropriateForOutputRoute=_enableProximityMonitorIfAppropriateForOutputRoute;
@property(nonatomic) _Bool useVoiceMemoSettings; // @synthesize useVoiceMemoSettings=_useVoiceMemoSettings;
- (void).cxx_destruct;
- (void)_setShouldRouteToSpeakerUserDefaultValue:(_Bool)arg1;
- (_Bool)_routeDefaultBoolForKey:(id)arg1 nonVoiceMemoAppValue:(_Bool)arg2;
- (unsigned long long)_availableRoutesMask;
- (unsigned long long)_RCAudioRouteMaskForRoutes:(id)arg1;
- (_Bool)_wirelessRouteIsPickedOrPreferred;
- (_Bool)_speakerIsUserDefaultRoute;
- (_Bool)_speakerRouteIsPickedOrPreferred;
- (void)_updateProximitySetting;
- (void)_updateSpeakerRouteDefault;
- (void)_setWeakSessionRoutingAssertions:(struct __CFArray *)arg1;
- (id)_activeAudioSessionRoutingAssertion;
- (_Bool)_isRoutingToAirPlayDestination;
- (id)_activeAudioRouteUsageStatisticName;
- (void)_updateRoutingControllerAvailableRoutes;
- (void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)routingController:(id)arg1 didChangeAirPlayMirrorDestinationToActive:(_Bool)arg2;
- (void)routingController:(id)arg1 willChangeCategoryActiveStateToActive:(_Bool)arg2;
- (void)disableDetailedDiscoveryMode;
- (void)enableDetailedDiscoveryMode;
@property(readonly, nonatomic) _Bool isRoutingToPhoneCall;
- (void)fetchActiveInputRouteWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *activeInputRouteName;
@property(readonly, nonatomic) NSString *selectedRouteName;
@property(readonly, nonatomic) long long selectedRouteType;
@property(readonly, nonatomic) unsigned long long availableRoutesMask;
- (void)showAvailableRoutesInWindow:(id)arg1;
- (void)removeRouteAssertion:(id)arg1;
- (void)addRouteAssertion:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
