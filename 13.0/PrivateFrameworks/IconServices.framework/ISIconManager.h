//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol ISIconCache, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ISIconManager : NSObject
{
    struct os_unfair_lock_s _observerLock;
    id _iconCache;
    id _iconRegistry;
    id _observers;
    id _internalQueue;
}

+ (id)sharedInstance;
@property(retain) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSHashTable *iconRegistry; // @synthesize iconRegistry=_iconRegistry;
@property(readonly) id <ISIconCache> iconCache; // @synthesize iconCache=_iconCache;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)findOrRegisterIcon:(id)arg1;
- (void)dealloc;
- (id)_init;

@end
