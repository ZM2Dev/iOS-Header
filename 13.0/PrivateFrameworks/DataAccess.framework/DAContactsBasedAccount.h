//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataAccess/DAContactsAccount-Protocol.h>

@class CNAccount, NSString;

@interface DAContactsBasedAccount : NSObject <DAContactsAccount>
{
    _Bool _markedForDeletion;
    CNAccount *_account;
}

@property(nonatomic) _Bool markedForDeletion; // @synthesize markedForDeletion=_markedForDeletion;
@property(readonly, nonatomic) CNAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)markForDeletion;
- (void)updateSaveRequest:(id)arg1;
- (_Bool)isAccount;
- (_Bool)isContainer;
- (_Bool)isGroup;
- (_Bool)isContact;
- (id)externalIdentifier;
- (id)identifier;
- (int)legacyIdentifier;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

