//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDConceptIndexManager;

@protocol HDConceptIndexManagerObserver <NSObject>
- (void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1;
- (void)conceptIndexManagerDidBecomeQuiescent:(HDConceptIndexManager *)arg1 samplesProcessedCount:(long long)arg2;
@end
