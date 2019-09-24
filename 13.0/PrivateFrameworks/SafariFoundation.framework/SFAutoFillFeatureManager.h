//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariFoundation/MCProfileConnectionObserver-Protocol.h>

@class NSString;

@interface SFAutoFillFeatureManager : NSObject <MCProfileConnectionObserver>
{
    int _cachedAutoFillRestrictionValue;
    int _cachedPasswordAutoFillEffectiveValue;
}

+ (const struct __CFString *)autoFillPreferencesDomain;
+ (_Bool)defaultValueForPasswordAndCreditCardAutoFill;
+ (void)autoFillPreferencesDidChange;
+ (id)_syncManager;
+ (id)sharedFeatureManager;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_refreshCachedAutoFillRestrictionValues;
- (_Bool)shouldAutoFillPasswords;
@property(nonatomic) _Bool shouldAutoFillPasswordsFromKeychain;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *preferredCredentialProviderForSaving; // @dynamic preferredCredentialProviderForSaving;
@property(readonly) Class superclass;

@end
