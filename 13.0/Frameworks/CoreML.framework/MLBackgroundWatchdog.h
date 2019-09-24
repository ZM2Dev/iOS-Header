//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MLBackgroundWatchdog : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)watchdogWithTimeout:(double)arg1 label:(id)arg2 queue:(id)arg3;
+ (id)watchdogWithTimeout:(double)arg1 queue:(id)arg2;
@property(retain) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
