//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/DNDSAssertionSyncManagerDataSource-Protocol.h>

@class DNDModeAssertion, NSDateInterval;
@protocol DNDSAssertionSyncManager;

@protocol DNDSLegacyAssertionSyncManagerDataSource <DNDSAssertionSyncManagerDataSource>
- (NSDateInterval *)legacyAssertionSyncManager:(id <DNDSAssertionSyncManager>)arg1 activeDateIntervalForModeAssertion:(DNDModeAssertion *)arg2;
@end
