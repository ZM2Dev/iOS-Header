//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface UNSNotificationSchedule : NSObject
{
    NSDate *_previousTriggerDate;
}

@property(retain, nonatomic) NSDate *previousTriggerDate; // @synthesize previousTriggerDate=_previousTriggerDate;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)_dateFormatter;

@end
