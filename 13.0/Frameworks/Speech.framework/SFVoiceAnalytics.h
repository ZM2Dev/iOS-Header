//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Speech/NSCopying-Protocol.h>
#import <Speech/NSSecureCoding-Protocol.h>

@class SFAcousticFeature;

@interface SFVoiceAnalytics : NSObject <NSCopying, NSSecureCoding>
{
    SFAcousticFeature *_jitter;
    SFAcousticFeature *_shimmer;
    SFAcousticFeature *_pitch;
    SFAcousticFeature *_voicing;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) SFAcousticFeature *voicing; // @synthesize voicing=_voicing;
@property(readonly, copy, nonatomic) SFAcousticFeature *pitch; // @synthesize pitch=_pitch;
@property(readonly, copy, nonatomic) SFAcousticFeature *shimmer; // @synthesize shimmer=_shimmer;
@property(readonly, copy, nonatomic) SFAcousticFeature *jitter; // @synthesize jitter=_jitter;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithJitter:(id)arg1 shimmer:(id)arg2 pitch:(id)arg3 voicing:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

