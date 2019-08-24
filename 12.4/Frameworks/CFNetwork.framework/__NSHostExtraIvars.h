//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSHostExtraIvars : NSObject
{
    NSString *thingToResolve;
    int resolveType;
    NSObject<OS_dispatch_queue> *resolveQueue;
    NSObject<OS_dispatch_queue> *cacheAccessQueue;
    NSObject<OS_dispatch_queue> *callbackQueue;
    _Bool startedResolving;
}

@property _Bool startedResolving; // @synthesize startedResolving;
@property(retain, nonatomic) NSString *thingToResolve; // @synthesize thingToResolve;
@property(nonatomic) int resolveType; // @synthesize resolveType;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *cacheAccessQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *resolveQueue;
- (void)dealloc;
- (void)finalize;
- (void)cleanup;
- (id)init;

@end
