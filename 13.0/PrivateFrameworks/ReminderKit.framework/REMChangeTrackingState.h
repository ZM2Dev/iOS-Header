//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSDate, REMChangeToken;

@interface REMChangeTrackingState : NSObject <NSCopying, NSSecureCoding>
{
    REMChangeToken *_lastConsumedChangeToken;
    NSDate *_lastConsumedDate;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *lastConsumedDate; // @synthesize lastConsumedDate=_lastConsumedDate;
@property(retain, nonatomic) REMChangeToken *lastConsumedChangeToken; // @synthesize lastConsumedChangeToken=_lastConsumedChangeToken;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end
