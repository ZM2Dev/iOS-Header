//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol OS_xpc_object;

@interface PLCloudChangeHubClient : NSObject
{
    unsigned char _nodeUUID[16];
    NSObject<OS_xpc_object> *_hubConnection;
    NSUUID *_uuid;
}

@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)unsuccesfulResultWithWithType:(long long)arg1;
- (id)successfulResultWithEvents:(id)arg1 changeHubEventIndex:(unsigned long long)arg2;
- (id)resultsFromReply:(id)arg1 sinceIndex:(unsigned long long)arg2;
- (id)fetchResultsSinceIndex:(unsigned long long)arg1;
- (id)fetchPendingEventsSinceIndex:(unsigned long long)arg1;
- (unsigned long long)fetchLastEventIndex;
@property(readonly, getter=isConnected) _Bool connected;
- (void)disconnect;
- (_Bool)connect;
- (id)initWithUUID:(id)arg1;
- (id)init;

@end
