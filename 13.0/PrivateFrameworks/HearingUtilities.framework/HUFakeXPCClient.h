//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HearingCore/HCXPCClient.h>

@interface HUFakeXPCClient : HCXPCClient
{
    CDUnknownBlockType _updateBlock;
}

- (void).cxx_destruct;
- (_Bool)sendMessage:(id)arg1 withError:(id *)arg2;
- (void)registerMessageBlock:(CDUnknownBlockType)arg1;
- (_Bool)wantsUpdatesForIdentifier:(unsigned long long)arg1;

@end
