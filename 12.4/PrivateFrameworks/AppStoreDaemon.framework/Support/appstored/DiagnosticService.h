//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDDiagnosticServiceProtocol-Protocol.h"

@interface DiagnosticService : NSObject <ASDDiagnosticServiceProtocol>
{
}

+ (id)defaultService;
- (void)sendCommandWithReplyHandler:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)pingWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)activeClientsWithReplyHandler:(CDUnknownBlockType)arg1;

@end
