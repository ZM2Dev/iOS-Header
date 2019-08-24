//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNManagedProfileConnection-Protocol.h>

@class MCProfileConnection, NSString;

@interface CNManagedProfileConnection : NSObject <CNManagedProfileConnection>
{
    MCProfileConnection *_profileConnection;
}

+ (id)sharedConnection;
@property(retain, nonatomic) MCProfileConnection *profileConnection; // @synthesize profileConnection=_profileConnection;
- (void).cxx_destruct;
- (id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(long long)arg3;
- (id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(long long)arg3;
- (_Bool)mayShowLocalContactsAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(long long)arg2;
- (_Bool)mayShowLocalContactsAccountsForBundleID:(id)arg1 sourceAccountManagement:(long long)arg2;
- (_Bool)isOpenInRestrictionInEffect;
- (id)initWithProfileConnection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
