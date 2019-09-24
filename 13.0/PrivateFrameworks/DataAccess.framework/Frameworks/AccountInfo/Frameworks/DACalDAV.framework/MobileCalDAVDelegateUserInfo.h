//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MobileCalDAVDelegateUserInfo : NSObject
{
    _Bool _allowWrite;
    NSString *_principalPath;
    NSString *_displayName;
    NSString *_uid;
}

+ (id)infoFromCalDAVDetails:(id)arg1 allowWrite:(_Bool)arg2;
@property(nonatomic) _Bool allowWrite; // @synthesize allowWrite=_allowWrite;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *principalPath; // @synthesize principalPath=_principalPath;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPrincipalPath:(id)arg1 displayName:(id)arg2 allowWrite:(_Bool)arg3;

@end
