//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MRCompanionLinkClientEvent : NSObject
{
    NSString *_eventID;
    NSDictionary *_userInfo;
    NSString *_destination;
    NSString *_uid;
}

@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;

@end
