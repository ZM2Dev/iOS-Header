//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DMMigrationDeferredExitManager : NSObject
{
}

+ (id)_serialQueue;
- (_Bool)_isDeferringExit;
- (void)_exitClean;
- (id)_deferralDuration;
- (void)_resetGlobalState;
- (void)cancelDeferredExitWithConnection:(id)arg1;
- (void)deferExitWithConnection:(id)arg1;
- (void)migrationDidEnd;
- (void)migrationDidStart;

@end

