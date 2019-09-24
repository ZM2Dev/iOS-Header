//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRTransaction, NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol MRTransactionDelegate <NSObject>

@optional
- (unsigned long long)transactionRequestingMemorySize:(MRTransaction *)arg1;
- (void)transactionDidEnd:(MRTransaction *)arg1 bytesRemaining:(unsigned long long)arg2;
- (void)transaction:(MRTransaction *)arg1 didReceivePackets:(NSArray *)arg2 receivedSize:(unsigned long long)arg3 requestedSize:(unsigned long long)arg4 queue:(NSObject<OS_dispatch_queue> *)arg5 completion:(void (^)(void))arg6;
@end
