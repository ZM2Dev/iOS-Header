//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class ACAccount, ACAccountStore;
@protocol FAFamilySetupPageDelegate;

@protocol FAFamilySetupPage <NSObject>
@property(nonatomic) __weak id <FAFamilySetupPageDelegate> delegate;
- (id)initWithAccount:(ACAccount *)arg1 store:(ACAccountStore *)arg2;
@end
