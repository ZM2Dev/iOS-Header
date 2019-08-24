//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, AMSMetricsEvent, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AMSFollowUpItem : NSObject
{
    ACAccount *_account;
    NSString *_identifier;
    NSMutableDictionary *_userInfo;
    _Bool _shouldPostNotification;
    NSArray *_actions;
    long long _displayStyle;
    NSString *_informativeText;
    AMSMetricsEvent *_metricsEvent;
    NSString *_title;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_metricsQueue;
}

+ (id)componentsFromBackingIdentifier:(id)arg1;
+ (id)backingIdentifierForIdentifier:(id)arg1 account:(id)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool shouldPostNotification; // @synthesize shouldPostNotification=_shouldPostNotification;
@property(retain, nonatomic) AMSMetricsEvent *metricsEvent; // @synthesize metricsEvent=_metricsEvent;
@property(retain, nonatomic) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property(nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (_Bool)shouldOverwriteItem:(id)arg1;
- (id)postMetricsWithBagContract:(id)arg1;
- (id)generateItem;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long priority;
@property(retain, nonatomic) NSString *logKey;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *groupIdentifier;
@property(readonly, nonatomic) NSString *backingIdentifier;
@property(readonly, nonatomic) _Bool active;
- (id)initWithFollowUpItem:(id)arg1;
- (id)initWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3;

@end
