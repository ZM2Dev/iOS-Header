//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@interface RTMotionActivityManagerNotificationMotionSettledStateChange : RTNotification
{
    unsigned long long _settledState;
}

@property(readonly, nonatomic) unsigned long long settledState; // @synthesize settledState=_settledState;
- (id)description;
- (id)initWithSettledState:(unsigned long long)arg1;
- (id)init;

@end

