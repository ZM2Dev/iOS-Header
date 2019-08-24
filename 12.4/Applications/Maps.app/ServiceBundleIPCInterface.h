//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPDistributedMessagingCenter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ServiceBundleIPCInterface : NSObject
{
    CPDistributedMessagingCenter *_messagingCenter;
    NSObject<OS_dispatch_queue> *_messagingQueue;
}

+ (id)sharedInterface;
- (void).cxx_destruct;
- (void)mapsDidUpdateLockScreenState:(id)arg1;
- (void)mapsDidUpdateGuidanceState:(id)arg1;
- (id)init;

@end
