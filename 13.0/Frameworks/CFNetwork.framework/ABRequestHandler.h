//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/AuthBrokerQuery-Protocol.h>

@interface ABRequestHandler : NSObject <AuthBrokerQuery>
{
    struct AuthBrokerAuthenticator *authenticator;
}

- (void)fetchProxyCredential:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)init;

@end
