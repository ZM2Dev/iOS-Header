//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PSYToolInterface-Protocol.h"

@class NSString;

@interface PSDToolConnection : NSObject <PSYToolInterface>
{
}

- (oneway void)cancelSyncSession;
- (oneway void)clearCurrentResumeContext;
- (oneway void)getOrderedActivityInfosWithCompletion:(CDUnknownBlockType)arg1;
- (id)services;
- (oneway void)startSyncWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
