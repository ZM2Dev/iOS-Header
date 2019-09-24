//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriActivation/BBObserverDelegate-Protocol.h>

@class BBObserver, NSMutableDictionary, NSString, SASBulletinCache;
@protocol SASBulletinManagerDelegate;

@interface SASBulletinManager : NSObject <BBObserverDelegate>
{
    BBObserver *_observer;
    SASBulletinCache *_bulletinCache;
    NSMutableDictionary *_bulletinsOnLockScreen;
    id <SASBulletinManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <SASBulletinManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
- (void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)modifyBulletinCompletionWithBulletin:(id)arg1;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2;
- (void)addBulletinCompletionWithBulletin:(id)arg1 forFeed:(unsigned long long)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)markBulletinWithIdentifier:(id)arg1 asRead:(_Bool)arg2;
- (id)bulletinForIdentifier:(id)arg1;
- (id)bulletinsOnLockScreen;
- (id)allBulletins;
- (id)_displayNameForBulletin:(id)arg1;
- (void)_bulletinsDidChange;
- (void)dealloc;
- (void)_setupObserver;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
