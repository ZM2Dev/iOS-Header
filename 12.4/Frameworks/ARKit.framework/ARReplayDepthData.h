//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSSecureCoding-Protocol.h>

@interface ARReplayDepthData : NSObject <NSSecureCoding>
{
    CDStruct_8e0628e6 _cameraIntrinsics;
    CDStruct_14d5dc5e _cameraExtrinsics;
    double _timestamp;
    struct __CVBuffer *_depthMap;
    struct CGSize _resolution;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) struct CGSize resolution; // @synthesize resolution=_resolution;
@property(readonly, nonatomic) struct __CVBuffer *depthMap; // @synthesize depthMap=_depthMap;
- (void)setDepthMap:(struct __CVBuffer *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) CDStruct_14d5dc5e cameraExtrinsics;
@property(readonly, nonatomic) CDStruct_8e0628e6 cameraIntrinsics;
@property(readonly, nonatomic) double timestamp;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDepthDataMap:(struct __CVBuffer *)arg1 cameraIntrinsics:(CDStruct_8e0628e6)arg2 cameraExtrinsics:(CDStruct_14d5dc5e)arg3 timestamp:(double)arg4;
- (id)initWithAVDepthData:(id)arg1 withTimestamp:(double)arg2;

@end
