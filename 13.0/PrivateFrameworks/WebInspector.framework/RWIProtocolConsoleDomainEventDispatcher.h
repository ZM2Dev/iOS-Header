//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RWIProtocolConsoleDomainEventDispatcher : NSObject
{
    struct AugmentableInspectorController *_controller;
}

- (void)heapSnapshotWithTimestamp:(double)arg1 snapshotData:(id)arg2 title:(id *)arg3;
- (void)messagesCleared;
- (void)messageRepeatCountUpdatedWithCount:(int)arg1;
- (void)messageAddedWithMessage:(id)arg1;
- (id)initWithController:(struct AugmentableInspectorController *)arg1;

@end
