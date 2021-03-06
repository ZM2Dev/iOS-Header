//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlaybackRequestEnvironment.h>

@class MPCPlaybackDelegationProperties, MPCPrivateListeningStateSource, NSString;

@interface MPCMutablePlaybackRequestEnvironment : MPCPlaybackRequestEnvironment
{
}

@property(copy, nonatomic) NSString *requestingBundleVersion; // @dynamic requestingBundleVersion;
@property(copy, nonatomic) NSString *requestingBundleIdentifier; // @dynamic requestingBundleIdentifier;
@property(copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource; // @dynamic privateListeningStateSource;
@property(copy, nonatomic) MPCPlaybackDelegationProperties *delegationProperties; // @dynamic delegationProperties;
@property(copy, nonatomic) NSString *clientVersion; // @dynamic clientVersion;
@property(copy, nonatomic) NSString *clientIdentifier; // @dynamic clientIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

