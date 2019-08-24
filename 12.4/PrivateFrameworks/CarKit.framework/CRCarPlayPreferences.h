//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarKit/MCProfileConnectionObserver-Protocol.h>

@class NSString;
@protocol CRCarPlayPreferencesDelegate;

@interface CRCarPlayPreferences : NSObject <MCProfileConnectionObserver>
{
    _Bool _cachedCarPlayAllowed;
    id <CRCarPlayPreferencesDelegate> _preferencesDelegate;
}

@property(nonatomic) _Bool cachedCarPlayAllowed; // @synthesize cachedCarPlayAllowed=_cachedCarPlayAllowed;
@property(nonatomic) __weak id <CRCarPlayPreferencesDelegate> preferencesDelegate; // @synthesize preferencesDelegate=_preferencesDelegate;
- (void).cxx_destruct;
- (_Bool)isWirelessCarPlayEnabled;
- (_Bool)isCarPlayAllowed;
- (_Bool)_isCarPlayAllowed;
- (void)handleAssistantPreferencesChanged:(id)arg1;
- (void)handleAssistantLanguageChanged:(id)arg1;
- (_Bool)isCarPlayCapable;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_updateCarPlayAllowed;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
