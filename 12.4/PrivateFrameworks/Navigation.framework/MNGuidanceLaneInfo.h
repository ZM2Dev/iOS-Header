//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSUUID;

@interface MNGuidanceLaneInfo : NSObject <NSSecureCoding>
{
    _Bool _isForManeuver;
    NSUUID *_uniqueID;
    NSArray *_lanes;
    NSDictionary *_variableOverrides;
    long long _distanceDetailLevel;
    NSArray *_titles;
    NSArray *_instructions;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *instructions; // @synthesize instructions=_instructions;
@property(readonly, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(readonly, nonatomic) long long distanceDetailLevel; // @synthesize distanceDetailLevel=_distanceDetailLevel;
@property(readonly, nonatomic) NSDictionary *variableOverrides; // @synthesize variableOverrides=_variableOverrides;
@property(readonly, nonatomic) NSArray *lanes; // @synthesize lanes=_lanes;
@property(readonly, nonatomic) _Bool isForManeuver; // @synthesize isForManeuver=_isForManeuver;
@property(readonly, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithID:(id)arg1 isForManeuver:(_Bool)arg2 lanes:(id)arg3 titles:(id)arg4 instructions:(id)arg5 variableOverrides:(id)arg6 distanceDetailLevel:(long long)arg7;

@end
