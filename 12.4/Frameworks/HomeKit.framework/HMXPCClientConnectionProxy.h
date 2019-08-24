//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKit/HMXPCMessageTransport-Protocol.h>

@class NSString;

@interface HMXPCClientConnectionProxy : HMFMessageTransport <HMXPCMessageTransport>
{
    CDUnknownBlockType _refreshHandler;
}

+ (id)messageWithName:(id)arg1 identifier:(id)arg2 target:(id)arg3 payload:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) CDUnknownBlockType refreshHandler; // @synthesize refreshHandler=_refreshHandler;
- (void).cxx_destruct;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithRefreshHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
