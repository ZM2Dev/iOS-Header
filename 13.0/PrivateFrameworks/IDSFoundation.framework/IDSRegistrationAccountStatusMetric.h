//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTAWDMetric-Protocol.h>
#import <IDSFoundation/CUTRTCMetric-Protocol.h>

@class NSDictionary, NSString, PBCodable;
@protocol NSCopying;

@interface IDSRegistrationAccountStatusMetric : NSObject <CUTRTCMetric, CUTAWDMetric>
{
    _Bool _doesExist;
    _Bool _isEnabled;
    _Bool _isUserDisabled;
    _Bool _doesMatchiCloudAccount;
    _Bool _isiCloudSignedIn;
    _Bool _isiTunesSignedIn;
    _Bool _hasEverRegistered;
    _Bool _areAllAliasesSelected;
    _Bool _areAllSelectedAliasesRegistered;
    _Bool _isProdEnvironment;
    int _accountType;
    int _registrationErrorReason;
    int _accountRegistrationStatus;
    NSString *_serviceIdentifier;
    long long _registrationError;
    long long _registrationStatus;
    long long _lastRegistrationFailureError;
    double _timeIntervalSinceLastRegistrationFailure;
    double _timeIntervalSinceLastRegistrationSuccess;
    long long _accountSecurityLevel;
    long long _numberOfSelected;
    long long _numberOfVetted;
    long long _numberOfUnselectReasonUnknown;
    long long _numberOfUnselectReasonAlertDenial;
    long long _numberOfUnselectReasonClientCall;
    long long _numberOfUnselectReasonBadAlias;
    long long _numberOfUnselectReasonUpdateInfo;
}

@property(readonly, nonatomic) long long numberOfUnselectReasonUpdateInfo; // @synthesize numberOfUnselectReasonUpdateInfo=_numberOfUnselectReasonUpdateInfo;
@property(readonly, nonatomic) long long numberOfUnselectReasonBadAlias; // @synthesize numberOfUnselectReasonBadAlias=_numberOfUnselectReasonBadAlias;
@property(readonly, nonatomic) long long numberOfUnselectReasonClientCall; // @synthesize numberOfUnselectReasonClientCall=_numberOfUnselectReasonClientCall;
@property(readonly, nonatomic) long long numberOfUnselectReasonAlertDenial; // @synthesize numberOfUnselectReasonAlertDenial=_numberOfUnselectReasonAlertDenial;
@property(readonly, nonatomic) long long numberOfUnselectReasonUnknown; // @synthesize numberOfUnselectReasonUnknown=_numberOfUnselectReasonUnknown;
@property(readonly, nonatomic) long long numberOfVetted; // @synthesize numberOfVetted=_numberOfVetted;
@property(readonly, nonatomic) long long numberOfSelected; // @synthesize numberOfSelected=_numberOfSelected;
@property(readonly, nonatomic) _Bool isProdEnvironment; // @synthesize isProdEnvironment=_isProdEnvironment;
@property(readonly, nonatomic) _Bool areAllSelectedAliasesRegistered; // @synthesize areAllSelectedAliasesRegistered=_areAllSelectedAliasesRegistered;
@property(readonly, nonatomic) _Bool areAllAliasesSelected; // @synthesize areAllAliasesSelected=_areAllAliasesSelected;
@property(readonly, nonatomic) long long accountSecurityLevel; // @synthesize accountSecurityLevel=_accountSecurityLevel;
@property(readonly, nonatomic) double timeIntervalSinceLastRegistrationSuccess; // @synthesize timeIntervalSinceLastRegistrationSuccess=_timeIntervalSinceLastRegistrationSuccess;
@property(readonly, nonatomic) double timeIntervalSinceLastRegistrationFailure; // @synthesize timeIntervalSinceLastRegistrationFailure=_timeIntervalSinceLastRegistrationFailure;
@property(readonly, nonatomic) _Bool hasEverRegistered; // @synthesize hasEverRegistered=_hasEverRegistered;
@property(readonly, nonatomic) long long lastRegistrationFailureError; // @synthesize lastRegistrationFailureError=_lastRegistrationFailureError;
@property(readonly, nonatomic) int accountRegistrationStatus; // @synthesize accountRegistrationStatus=_accountRegistrationStatus;
@property(readonly, nonatomic) long long registrationStatus; // @synthesize registrationStatus=_registrationStatus;
@property(readonly, nonatomic) int registrationErrorReason; // @synthesize registrationErrorReason=_registrationErrorReason;
@property(readonly, nonatomic) long long registrationError; // @synthesize registrationError=_registrationError;
@property(readonly, nonatomic) _Bool isiTunesSignedIn; // @synthesize isiTunesSignedIn=_isiTunesSignedIn;
@property(readonly, nonatomic) _Bool isiCloudSignedIn; // @synthesize isiCloudSignedIn=_isiCloudSignedIn;
@property(readonly, nonatomic) _Bool doesMatchiCloudAccount; // @synthesize doesMatchiCloudAccount=_doesMatchiCloudAccount;
@property(readonly, nonatomic) _Bool isUserDisabled; // @synthesize isUserDisabled=_isUserDisabled;
@property(readonly, nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(readonly, nonatomic) _Bool doesExist; // @synthesize doesExist=_doesExist;
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(readonly, nonatomic) int accountType; // @synthesize accountType=_accountType;
- (void).cxx_destruct;
@property(readonly) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly, nonatomic) unsigned short rtcType;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (id)initWithAccountType:(int)arg1 serviceIdentifier:(id)arg2 doesExist:(_Bool)arg3 isEnabled:(_Bool)arg4 isUserDisabled:(_Bool)arg5 isiCloudSignedIn:(_Bool)arg6 doesMatchiCloudAccount:(_Bool)arg7 isiTunesSignedIn:(_Bool)arg8 registrationError:(long long)arg9 registrationErrorReason:(int)arg10 registrationStatus:(long long)arg11 accountRegistrationStatus:(int)arg12 hasEverRegistered:(_Bool)arg13 lastRegistrationFailureError:(long long)arg14 timeIntervalSinceLastRegistrationFailure:(double)arg15 timeIntervalSinceLastRegistrationSuccess:(double)arg16 accountSecurityLevel:(long long)arg17 areAllAliasesSelected:(_Bool)arg18 areAllSelectedAliasesRegistered:(_Bool)arg19 numberOfSelected:(long long)arg20 numberOfVetted:(long long)arg21 numberOfUnselectReasonUnknown:(long long)arg22 numberOfUnselectReasonAlertDenial:(long long)arg23 numberOfUnselectReasonClientCall:(long long)arg24 numberOfUnselectReasonBadAlias:(long long)arg25 numberOfUnselectReasonUpdateInfo:(long long)arg26 isProdEnvironment:(_Bool)arg27;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
