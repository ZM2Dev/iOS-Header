//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface HDDiagnosticManager : NSObject
{
    NSHashTable *_objects;
    struct os_unfair_lock_s _lock;
}

+ (id)sharedDiagnosticManager;
- (void).cxx_destruct;
- (id)_diagnosticsOverview;
- (id)_diagnosticsForKeys:(id)arg1 shouldLog:(_Bool)arg2;
- (id)diagnosticsForKeys:(id)arg1;
- (void)logAllDiagnostics;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)init;

@end
