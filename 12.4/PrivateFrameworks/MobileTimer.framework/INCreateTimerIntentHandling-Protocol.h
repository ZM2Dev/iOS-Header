//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class INCreateTimerIntent;

@protocol INCreateTimerIntentHandling <NSObject>
- (void)handleCreateTimer:(INCreateTimerIntent *)arg1 completion:(void (^)(INCreateTimerIntentResponse *))arg2;

@optional
- (void)resolveDurationForCreateTimer:(INCreateTimerIntent *)arg1 withCompletion:(void (^)(INTimeIntervalResolutionResult *))arg2;
- (void)resolveLabelForCreateTimer:(INCreateTimerIntent *)arg1 withCompletion:(void (^)(INCreateTimerLabelResolutionResult *))arg2;
- (void)confirmCreateTimer:(INCreateTimerIntent *)arg1 completion:(void (^)(INCreateTimerIntentResponse *))arg2;
@end
