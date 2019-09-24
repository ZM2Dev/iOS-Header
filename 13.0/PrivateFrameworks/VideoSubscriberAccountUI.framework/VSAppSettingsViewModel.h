//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class LSApplicationWorkspace, NSString, NSURL, UIImage, VSAppDescription, VSOptional, VSPrivacyFacade, VSRestrictionsCenter;

@interface VSAppSettingsViewModel : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    int _registrationToken;
    NSString *_adamID;
    NSString *_bundleID;
    UIImage *_icon;
    NSString *_displayName;
    NSString *_storeName;
    long long _installState;
    long long _privacyState;
    VSPrivacyFacade *_privacyFacade;
    LSApplicationWorkspace *_workspace;
    VSRestrictionsCenter *_restrictionsCenter;
    struct __CFBundle *_bundle;
    VSAppDescription *_appDescription;
    NSString *_buyParams;
    VSOptional *_voucher;
}

+ (id)keyPathsForValuesAffectingAccessGranted;
@property(retain, nonatomic) VSOptional *voucher; // @synthesize voucher=_voucher;
@property(copy, nonatomic) NSString *buyParams; // @synthesize buyParams=_buyParams;
@property(retain, nonatomic) VSAppDescription *appDescription; // @synthesize appDescription=_appDescription;
@property(nonatomic) struct __CFBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) VSRestrictionsCenter *restrictionsCenter; // @synthesize restrictionsCenter=_restrictionsCenter;
@property(nonatomic) int registrationToken; // @synthesize registrationToken=_registrationToken;
@property(retain, nonatomic) LSApplicationWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain, nonatomic) VSPrivacyFacade *privacyFacade; // @synthesize privacyFacade=_privacyFacade;
@property(nonatomic) long long privacyState; // @synthesize privacyState=_privacyState;
@property(nonatomic) long long installState; // @synthesize installState=_installState;
@property(readonly, copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy, nonatomic) NSString *adamID; // @synthesize adamID=_adamID;
- (void).cxx_destruct;
- (id)appIconURLForSize:(struct CGSize)arg1;
- (id)appAdamIDs;
- (id)appBundleIDs;
- (id)name;
@property(readonly, copy) NSString *description;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)_denyPrivacyAccess;
- (void)_grantPrivacyAccess;
@property(nonatomic, getter=isAccessGranted) _Bool accessGranted;
@property(readonly, nonatomic) _Bool canChangePrivacyAccess;
- (void)launchApp;
- (void)installApp;
- (void)revokeVoucher;
@property(readonly, nonatomic) _Bool canRevokeVoucher;
@property(readonly, copy, nonatomic) NSString *launchAppTitle;
@property(readonly, copy, nonatomic) NSString *unavailableTitle;
@property(readonly, copy, nonatomic) NSString *installationTitle;
- (id)iconURLForSize:(struct CGSize)arg1;
@property(readonly, copy, nonatomic) NSURL *appStoreURL;
- (void)_updatePrivacyState;
- (id)initWithAppDescription:(id)arg1 privacyVoucher:(id)arg2 restrictionsCenter:(id)arg3 privacyFacade:(id)arg4;
- (id)initWithBundle:(struct __CFBundle *)arg1 restrictionsCenter:(id)arg2 privacyFacade:(id)arg3;
- (id)initWithBundle:(struct __CFBundle *)arg1 restrictionsCenter:(id)arg2 privacyFacade:(id)arg3 adamID:(id)arg4;
- (id)init;
- (void)dealloc;
- (id)initWithApplicationWorkspace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
