//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSUUID;

@interface _DKSyncPeer : NSObject
{
    _Bool _me;
    NSString *_sourceDeviceID;
    NSString *_idsDeviceIdentifier;
    NSString *_zoneName;
    NSDate *_lastSeenDate;
    NSString *_name;
    NSString *_model;
    NSUUID *_uuid;
}

@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool me; // @synthesize me=_me;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSDate *lastSeenDate; // @synthesize lastSeenDate=_lastSeenDate;
@property(copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(copy, nonatomic) NSString *idsDeviceIdentifier; // @synthesize idsDeviceIdentifier=_idsDeviceIdentifier;
@property(copy, nonatomic) NSString *sourceDeviceID; // @synthesize sourceDeviceID=_sourceDeviceID;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSUUID *sourceDeviceUUID;
- (id)initWithIDSDeviceIdentifier:(id)arg1 zoneName:(id)arg2;
- (id)initWithZoneName:(id)arg1;
- (id)initWithIDSDeviceIdentifier:(id)arg1;
- (id)init;

@end

