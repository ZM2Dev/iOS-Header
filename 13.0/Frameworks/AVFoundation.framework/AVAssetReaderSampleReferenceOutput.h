//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderSampleReferenceOutputInternal, AVAssetTrack;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput
{
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;
}

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)arg1;
- (_Bool)_enableTrackExtractionReturningError:(id *)arg1;
- (_Bool)_trimsSampleDurations;
- (id)_asset;
- (id)mediaType;
@property(readonly, nonatomic) AVAssetTrack *track;
- (id)description;
- (void)dealloc;
- (id)initWithTrack:(id)arg1;
- (id)init;

@end
