//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, Protocol;
@protocol OS_dispatch_queue;

@interface GEOObserverHashTable : NSObject
{
    Protocol *_protocol;
    NSHashTable *_observers;
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) _Bool hasObservers;
- (id)initWithProtocol:(id)arg1 queue:(id)arg2;
- (id)init;

@end
