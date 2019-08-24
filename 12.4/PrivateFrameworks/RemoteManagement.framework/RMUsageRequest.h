//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber;

@interface RMUsageRequest : NSManagedObject
{
}

+ (id)fetchOrCreateUsageRequestForRemoteUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchOrCreateUsageRequestForLocalUserInContext:(id)arg1 error:(id *)arg2;
+ (id)fetchOrCreateUsageRequestForUser:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchOrCreateUsageRequestForUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchRequestForUsageRequestsThatAreForRemoteUsers;
+ (id)fetchRequestForLocalUsageRequests;

// Remaining properties
@property(retain, nonatomic) NSDate *acknowledgedDate; // @dynamic acknowledgedDate;
@property(retain, nonatomic) NSNumber *forUserDSID; // @dynamic forUserDSID;
@property(retain, nonatomic) NSDate *requestedDate; // @dynamic requestedDate;

@end
