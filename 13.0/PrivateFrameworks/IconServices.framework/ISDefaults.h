//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface ISDefaults : NSObject
{
    struct os_unfair_lock_s _lock;
    NSNumber *__usePerstentCache;
}

+ (id)sharedInstance;
@property(readonly) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain) NSNumber *_usePerstentCache; // @synthesize _usePerstentCache=__usePerstentCache;
- (void).cxx_destruct;
@property(readonly) _Bool usePerstentCache; // @dynamic usePerstentCache;

@end
