//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSDictionary, NSString, SYDAccount;

@interface SYDCredentials : NSObject
{
    NSString *_user;
    NSString *_userName;
    NSDictionary *_accountProperties;
    NSString *_authToken;
    ACAccount *_account;
    SYDAccount *_sydAccount;
}

@property(readonly, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(readonly, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, nonatomic) NSString *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (_Bool)renewCredentials;
- (id)publicURLForConfigurationWithService:(id)arg1;
@property(readonly, nonatomic) NSString *apsEnvironment;
- (id)initWithAccount:(id)arg1 sydAccount:(id)arg2;

@end
