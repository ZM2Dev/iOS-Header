//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNAction.h>

__attribute__((visibility("hidden")))
@interface SCNActionPlaySound : SCNAction
{
    struct SCNCPlaySound *_mycaction;
}

+ (id)playAudioSource:(id)arg1 waitForCompletion:(_Bool)arg2;
+ (_Bool)supportsSecureCoding;
- (id)parameters;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setupDuration;
- (id)init;

@end
