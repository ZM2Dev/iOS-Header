//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface CKAccountOverrideInfo : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isUnitTestingAccount;
    _Bool _accountWantsPushRegistration;
    _Bool _accountWantsFlowControl;
    NSString *_accountID;
    NSDictionary *_accountPropertyOverrides;
    NSDictionary *_overridesByDataclass;
    NSString *_email;
    NSString *_password;
    NSString *_secondEmail;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool accountWantsFlowControl; // @synthesize accountWantsFlowControl=_accountWantsFlowControl;
@property(nonatomic) _Bool accountWantsPushRegistration; // @synthesize accountWantsPushRegistration=_accountWantsPushRegistration;
@property(nonatomic) _Bool isUnitTestingAccount; // @synthesize isUnitTestingAccount=_isUnitTestingAccount;
@property(copy, nonatomic) NSString *secondEmail; // @synthesize secondEmail=_secondEmail;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSDictionary *overridesByDataclass; // @synthesize overridesByDataclass=_overridesByDataclass;
@property(copy, nonatomic) NSDictionary *accountPropertyOverrides; // @synthesize accountPropertyOverrides=_accountPropertyOverrides;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initAnonymousAccount;
- (id)initWithEmail:(id)arg1 password:(id)arg2;
- (id)initWithAccountID:(id)arg1;

@end
