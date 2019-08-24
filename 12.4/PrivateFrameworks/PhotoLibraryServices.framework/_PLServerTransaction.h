//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/_PLClientTransaction.h>

@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _PLServerTransaction : _PLClientTransaction
{
    NSCountedSet *_enqueuedChangeScopes;
    NSObject<OS_dispatch_queue> *_changeScopeQueue;
}

- (void)completeTransactionScope:(id)arg1;
- (void)completeTransaction;
- (void)abortTransaction;
- (id)changeScopes;
- (void)addChangeScopes:(id)arg1;
- (void)_enqueueChangeScopes:(id)arg1;
- (id)generateChangeScopesDescription;
- (_Bool)isClientTransaction;
- (void)popChangeScopesBatch;
- (void)pushChangeScopesBatch;
- (void)dealloc;
- (id)init;

@end
