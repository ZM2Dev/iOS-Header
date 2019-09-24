//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MapsUITableViewDiffableDataSourceCellProviding-Protocol.h"

@class NSArray, NSDate, NSString;
@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface TransitScheduleStopsTableViewDataSource : NSObject <MapsUITableViewDiffableDataSourceCellProviding>
{
    _Bool _hasAlightStop;
    NSDate *_referenceDate;
    unsigned long long _alightStopMuid;
    unsigned long long _alightHallMuid;
    unsigned long long _alightStationMuid;
    unsigned long long _boardingStopMuid;
    unsigned long long _alightStopItemIndex;
    unsigned long long _boardingStopItemIndex;
    unsigned long long _mostRecentPastDepartureStopItemIndex;
    unsigned long long _vehicleStopItemIndex;
    unsigned long long _remoteNetworkState;
    id <GEOTransitLine> _transitLine;
    NSArray *_transitTripStopItems;
}

@property(readonly, copy, nonatomic) NSArray *transitTripStopItems; // @synthesize transitTripStopItems=_transitTripStopItems;
@property(retain, nonatomic) id <GEOTransitLine> transitLine; // @synthesize transitLine=_transitLine;
@property(nonatomic) unsigned long long remoteNetworkState; // @synthesize remoteNetworkState=_remoteNetworkState;
- (void).cxx_destruct;
- (unsigned long long)_linkColorTypeForStopAtIndex:(unsigned long long)arg1;
- (_Bool)_hasVehicleDepartedStation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;
- (void)dataSource:(id)arg1 expandTransitTripStopItemsForStopItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_updatePastDepartureAndVehicleIndexes;
- (_Bool)_isPastDeparture:(id)arg1;
- (void)setReferenceDate:(id)arg1 dataSource:(id)arg2;
@property(readonly, nonatomic) NSArray *stopIdentifiers;
- (_Bool)hasStops;
- (id)stopItemAtIndex:(unsigned long long)arg1;
- (void)buildTransitTripStopItemsWithTransitStops:(id)arg1 boardingStopDepartureDate:(id)arg2 maintainingCollapsedState:(_Bool)arg3;
- (void)removeAllStops;
- (void)registerCellsForTableView:(id)arg1;
- (id)initWithBoardingStopMuid:(unsigned long long)arg1 transitLine:(id)arg2 referenceDate:(id)arg3;
- (id)initWithBoardingStopMuid:(unsigned long long)arg1 alightStopMuid:(unsigned long long)arg2 alightHallMuid:(unsigned long long)arg3 alightStationMuid:(unsigned long long)arg4 transitLine:(id)arg5 referenceDate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
