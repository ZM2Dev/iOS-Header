//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DMXPCConnection;

@interface DMMigrationPluginWrapperConnection : NSObject
{
    DMXPCConnection *_connection;
}

+ (id)connection;
- (void).cxx_destruct;
- (void)handleMessage:(id)arg1;
- (void)runPluginAtPath:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (int)pid;
- (void)invalidate;
- (void)resume;
- (id)init;

@end

