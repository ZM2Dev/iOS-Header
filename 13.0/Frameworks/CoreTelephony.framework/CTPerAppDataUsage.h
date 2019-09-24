//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CTPerAppDataUsage : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_displayName;
    NSArray *_used;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *used; // @synthesize used=_used;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init:(id)arg1 withPeriods:(unsigned long long)arg2;

@end
