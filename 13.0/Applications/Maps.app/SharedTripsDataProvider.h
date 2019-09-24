//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DataProviding-Protocol.h"
#import "MSPSharedTripServiceReceivingObserver-Protocol.h"

@class GEOObserverHashTable, NSArray, NSString, SharedTripSummary;

__attribute__((visibility("hidden")))
@interface SharedTripsDataProvider : NSObject <MSPSharedTripServiceReceivingObserver, DataProviding>
{
    GEOObserverHashTable *_observers;
    NSArray *_sharedTrips;
    _Bool _active;
    SharedTripSummary *_sharedTripSummary;
}

@property(readonly, nonatomic) SharedTripSummary *sharedTripSummary; // @synthesize sharedTripSummary=_sharedTripSummary;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)sharedTripService:(id)arg1 didUpdateRouteForSharedTrip:(id)arg2;
- (void)sharedTripService:(id)arg1 didUpdateReachedDestinationForSharedTrip:(id)arg2;
- (void)sharedTripService:(id)arg1 didUpdateETAForSharedTrip:(id)arg2;
- (void)sharedTripService:(id)arg1 didUpdateDestinationForSharedTrip:(id)arg2;
- (void)sharedTripService:(id)arg1 didUpdateClosedTrip:(id)arg2;
- (void)sharedTripService:(id)arg1 didRemoveSharedTrip:(id)arg2;
- (void)sharedTripService:(id)arg1 didReceiveSharedTrip:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (void)_updateAndNotifyObservers:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
