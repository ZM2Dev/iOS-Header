//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKAllRouteETAsManagerDelegate-Protocol.h"
#import "RoutePlanningDataObservation-Protocol.h"

@class MKAllRouteETAsManager, NSMutableDictionary, NSString, PersonalizedItemManager;
@protocol MapItemSource, RoutePlanningDataCoordination, RoutePlanningETAReceiver;

__attribute__((visibility("hidden")))
@interface RoutePlanningETAProvider : NSObject <RoutePlanningDataObservation, MKAllRouteETAsManagerDelegate>
{
    id <RoutePlanningETAReceiver> _receiver;
    PersonalizedItemManager *_personalizedItemManager;
    id <RoutePlanningDataCoordination> _dataCoordinator;
    MKAllRouteETAsManager *_allRouteETAsManager;
    id <MapItemSource> _originMapItemSource;
    id <MapItemSource> _destinationMapItemSource;
    NSMutableDictionary *_etas;
}

@property(retain, nonatomic) NSMutableDictionary *etas; // @synthesize etas=_etas;
@property(retain, nonatomic) id <MapItemSource> destinationMapItemSource; // @synthesize destinationMapItemSource=_destinationMapItemSource;
@property(retain, nonatomic) id <MapItemSource> originMapItemSource; // @synthesize originMapItemSource=_originMapItemSource;
@property(retain, nonatomic) MKAllRouteETAsManager *allRouteETAsManager; // @synthesize allRouteETAsManager=_allRouteETAsManager;
@property(readonly, nonatomic) __weak id <RoutePlanningDataCoordination> dataCoordinator; // @synthesize dataCoordinator=_dataCoordinator;
@property(nonatomic) __weak PersonalizedItemManager *personalizedItemManager; // @synthesize personalizedItemManager=_personalizedItemManager;
@property(nonatomic) __weak id <RoutePlanningETAReceiver> receiver; // @synthesize receiver=_receiver;
- (void).cxx_destruct;
- (id)_allTransportTypes;
- (void)_invalidateETAForTransportType:(long long)arg1;
- (void)_invalidateAllETAs;
- (void)_updateTransportType:(long long)arg1 withETA:(id)arg2;
- (id)_mapItemSourceForRoutePlanningWaypointRequest:(id)arg1;
- (void)_updateETAIfPossible;
- (void)_updateOriginMapItemSource:(id)arg1 destinationMapItemSource:(id)arg2;
- (void)_invalidateDestinationMapItemSource;
- (void)_invalidateOriginMapItemSource;
- (void)allRouteETAsManager:(id)arg1 didFailETAForDirectionsType:(unsigned long long)arg2 withError:(id)arg3;
- (void)allRouteETAsManager:(id)arg1 didUpdateETA:(id)arg2;
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateTransitOptions:(id)arg2;
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateDrivePreferences:(id)arg2;
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateRouteCollection:(id)arg2;
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateOriginWaypointRequest:(id)arg2 destinationWaypointRequest:(id)arg3;
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateResolvedWaypointSet:(id)arg2;
@property(readonly, nonatomic) long long observedRoutePlanningData;
- (id)initWithDataCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
