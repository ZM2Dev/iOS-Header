//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/FBSOrientationObserverClientDelegate-Protocol.h>

@class FBSOrientationObserverClient, NSString;
@protocol OS_dispatch_queue;

@interface FBSOrientationObserver : NSObject <FBSOrientationObserverClientDelegate>
{
    FBSOrientationObserverClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callback_queue;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
- (void)client:(id)arg1 handleOrientationUpdate:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType handler;
- (void)activeInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (long long)activeInterfaceOrientation;
- (void)invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
