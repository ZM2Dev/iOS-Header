//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSError;

@interface PKFieldProperties : NSObject <NSSecureCoding>
{
    _Bool _shouldIgnore;
    _Bool _authenticationRequired;
    unsigned long long _technology;
    long long _terminalType;
    long long _valueAddedServiceMode;
    NSArray *_TCIs;
    NSArray *_merchantIdentifiers;
    NSError *_error;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSArray *merchantIdentifiers; // @synthesize merchantIdentifiers=_merchantIdentifiers;
@property(copy, nonatomic) NSArray *TCIs; // @synthesize TCIs=_TCIs;
@property(nonatomic) _Bool authenticationRequired; // @synthesize authenticationRequired=_authenticationRequired;
@property(nonatomic) _Bool shouldIgnore; // @synthesize shouldIgnore=_shouldIgnore;
@property(readonly, nonatomic) long long valueAddedServiceMode; // @synthesize valueAddedServiceMode=_valueAddedServiceMode;
@property(readonly, nonatomic) long long terminalType; // @synthesize terminalType=_terminalType;
@property(readonly, nonatomic) unsigned long long technology; // @synthesize technology=_technology;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithTechnology:(unsigned long long)arg1 terminalType:(long long)arg2 valueAddedServiceMode:(long long)arg3;

@end
