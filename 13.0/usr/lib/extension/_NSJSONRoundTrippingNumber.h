//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _NSJSONRoundTrippingNumber : NSObject <NSSecureCoding>
{
    NSNumber *_number;
    NSString *_representation;
}

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (_Bool)isSubclassOfClass:(Class)arg1;
+ (_Bool)supportsSecureCoding;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)isNSNumber__;
- (_Bool)isKindOfClass:(Class)arg1;
- (Class)superclass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_allowsDirectEncoding;
- (unsigned long long)hash;
- (_Bool)isEqualToNumber:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)stringValue;
- (void)dealloc;
- (id)initWithNumber:(id)arg1 representation:(id)arg2;

@end
