//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MCAPNInfo : NSObject
{
    NSString *_apnName;
    NSString *_username;
    NSString *_password;
    NSString *_proxy;
    NSNumber *_proxyPort;
}

@property(retain, nonatomic) NSNumber *proxyPort; // @synthesize proxyPort=_proxyPort;
@property(retain, nonatomic) NSString *proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *apnName; // @synthesize apnName=_apnName;
- (void).cxx_destruct;
- (id)installationWarnings;
- (id)defaultsRepresentation;
- (id)strippedDefaultsRepresentation;
- (id)description;

@end

