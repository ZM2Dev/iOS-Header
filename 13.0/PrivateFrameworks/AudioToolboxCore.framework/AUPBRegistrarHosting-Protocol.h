//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSXPCListenerEndpoint;

@protocol AUPBRegistrarHosting
- (void)registerAsEndpointListenerWithReply:(void (^)(NSError *))arg1;
- (void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 withReply:(void (^)(NSError *))arg2;
@end
