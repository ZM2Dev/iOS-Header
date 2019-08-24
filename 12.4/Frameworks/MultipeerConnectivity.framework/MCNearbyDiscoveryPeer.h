//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCNearbyDiscoveryPeerConnection, MCPeerID, NSMutableArray, NSNetService;

@interface MCNearbyDiscoveryPeer : NSObject
{
    MCPeerID *_peerID;
    NSNetService *_netService;
    int _state;
    MCNearbyDiscoveryPeerConnection *_connection;
    MCNearbyDiscoveryPeerConnection *_trialConnection;
    NSMutableArray *_sendDataBuffer;
}

@property(retain, nonatomic) NSMutableArray *sendDataBuffer; // @synthesize sendDataBuffer=_sendDataBuffer;
@property(retain, nonatomic) MCNearbyDiscoveryPeerConnection *trialConnection; // @synthesize trialConnection=_trialConnection;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) MCNearbyDiscoveryPeerConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) MCPeerID *peerID; // @synthesize peerID=_peerID;
@property(retain, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
- (void)flushDataBuffer;
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)stringForState:(int)arg1;
- (void)invalidate;
- (void)closeConnection;
- (void)attachConnection:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithPeerID:(id)arg1;
- (id)init;

@end
