//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface MXMInstrument : NSObject
{
    NSArray *_instrumentals;
    CDStruct_8ec6d642 *_currentIteration;
    NSObject<OS_dispatch_queue> *_instrumentalsQueue;
}

+ (id)instrumentWithInstrumentals:(id)arg1;
+ (id)activeInstrument;
+ (void)load;
@property(readonly) NSObject<OS_dispatch_queue> *instrumentalsQueue; // @synthesize instrumentalsQueue=_instrumentalsQueue;
@property CDStruct_8ec6d642 *currentIteration; // @synthesize currentIteration=_currentIteration;
@property(readonly, nonatomic) NSArray *instrumentals; // @synthesize instrumentals=_instrumentals;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_validOptionKeys;
- (id)_defaultValueWithOption:(id)arg1;
- (id)_valueWithOption:(id)arg1 userOptions:(id)arg2;
- (id)_makeInstrumentalsForIteration:(id)arg1 shouldCopy:(_Bool)arg2;
- (id)measureAutomatically:(unsigned long long)arg1 options:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)measureAutomatically:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)measureWithOptions:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)measureBlock:(CDUnknownBlockType)arg1;
- (id)stopWithError:(id *)arg1;
- (id)stop;
- (_Bool)startWithError:(id *)arg1;
- (void)start;
- (id)_transitionWithState:(unsigned long long)arg1 iteration:(const CDStruct_8ec6d642 *)arg2 instrumentals:(id)arg3;
- (void)_setupAndRunWithIteration:(CDStruct_8ec6d642 *)arg1 spawnThread:(_Bool)arg2 attrs:(struct _opaque_pthread_attr_t *)arg3 pthread:(struct _opaque_pthread_t **)arg4 returnCode:(unsigned long long *)arg5;
- (void)_prepareIteration:(CDStruct_8ec6d642 *)arg1 options:(id)arg2 instrumentals:(id)arg3 errors:(id)arg4;
- (id)initWithInstrumentals:(id)arg1;
@property _Bool active;

@end
