//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol EFScheduler;

@interface EFSchedulerTrampoline : NSObject
{
    id <EFScheduler> _scheduler;
    id _object;
}

+ (id)trampolineWithScheduler:(id)arg1 object:(id)arg2;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)_initWithScheduler:(id)arg1 object:(id)arg2;

@end
