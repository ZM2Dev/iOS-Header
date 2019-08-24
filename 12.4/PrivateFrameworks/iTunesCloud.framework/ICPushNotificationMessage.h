//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface ICPushNotificationMessage : NSObject
{
    NSDictionary *_userInfo;
    NSNumber *_accountDSID;
    long long _actionType;
    NSDictionary *_apsPayload;
}

@property(readonly, copy, nonatomic) NSDictionary *apsPayload; // @synthesize apsPayload=_apsPayload;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(readonly, copy, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)initWithMessageUserInfo:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *sagaUpdatedSubscribedPlaylistIDs;
@property(readonly, nonatomic) long long sagaServerRevision;
@property(readonly, copy, nonatomic) NSArray *jaliscoChangedMediaTypes;
@property(readonly, nonatomic) long long jaliscoServerRevision;
@property(readonly, nonatomic) long long moduleIdentifier;
@property(readonly, copy, nonatomic) NSString *clientIdentifier;

@end
