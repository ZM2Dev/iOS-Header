//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFCancelable-Protocol.h>

@class EDMessagePersistence, EDPersistenceHookRegistry, EFQuery, EMObjectID, NSMapTable, NSSet, NSString;
@protocol EMMessageListItemQueryResultsObserver;

@interface EDMessageRepositoryQueryHandler : NSObject <EFCancelable>
{
    struct atomic_flag _didStart;
    struct os_unfair_lock_s _summaryLock;
    NSSet *_mailboxes;
    EFQuery *_query;
    EDMessagePersistence *_messagePersistence;
    EDPersistenceHookRegistry *_hookRegistry;
    id <EMMessageListItemQueryResultsObserver> _resultsObserver;
    EMObjectID *_observationIdentifier;
    long long _dateSortOrder;
    NSMapTable *_summaryLoadersMapTable;
}

@property(readonly, nonatomic) struct os_unfair_lock_s summaryLock; // @synthesize summaryLock=_summaryLock;
@property(retain, nonatomic) NSMapTable *summaryLoadersMapTable; // @synthesize summaryLoadersMapTable=_summaryLoadersMapTable;
@property(readonly, nonatomic) long long dateSortOrder; // @synthesize dateSortOrder=_dateSortOrder;
@property(readonly, nonatomic) EMObjectID *observationIdentifier; // @synthesize observationIdentifier=_observationIdentifier;
@property(readonly, nonatomic) id <EMMessageListItemQueryResultsObserver> resultsObserver; // @synthesize resultsObserver=_resultsObserver;
@property(readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(readonly, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(readonly, copy, nonatomic) EFQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)requestSummaryForMessageObjectID:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *mailboxes; // @synthesize mailboxes=_mailboxes;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 observer:(id)arg4 observationIdentifier:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
