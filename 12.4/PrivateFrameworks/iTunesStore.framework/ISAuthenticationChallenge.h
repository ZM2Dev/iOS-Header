//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLAuthenticationChallenge;
@protocol NSURLAuthenticationChallengeSender;

@interface ISAuthenticationChallenge : NSObject
{
    NSURLAuthenticationChallenge *_challenge;
    NSString *_localizedMessage;
    NSString *_localizedTitle;
}

@property(retain) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property(readonly) _Bool userNameIsEmail;
@property(readonly) _Bool userNameIsEditable;
- (void)useCredential:(id)arg1;
@property(readonly, retain) NSString *user;
@property(readonly) id <NSURLAuthenticationChallengeSender> sender;
@property(readonly, retain) NSString *password;
@property(readonly) _Bool hasPassword;
@property(readonly) long long failureCount;
- (void)cancelAuthentication;
- (void)dealloc;
- (id)initWithAuthenticationChallenge:(id)arg1;

@end
