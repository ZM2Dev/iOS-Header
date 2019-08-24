//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_DUIClientSessionCommon-Protocol.h>

@class BKSAnimationFenceHandle, NSArray;

@protocol _DUIClientSessionSource <_DUIClientSessionCommon>
- (oneway void)dataTransferSessionFinished;
- (oneway void)dragFailed;
- (oneway void)dragEndedWithOperation:(unsigned long long)arg1;
- (oneway void)handOffCancelledItems:(NSArray *)arg1 withFence:(BKSAnimationFenceHandle *)arg2;
- (oneway void)checkCanHandOffCancelledItemsWithReply:(void (^)(_Bool))arg1;
@end
