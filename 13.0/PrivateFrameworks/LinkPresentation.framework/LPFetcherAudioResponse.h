//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPFetcherResponse.h>

@class LPAudio;

__attribute__((visibility("hidden")))
@interface LPFetcherAudioResponse : LPFetcherResponse
{
    LPAudio *_audio;
}

+ (id)audioPropertiesForFetcher:(id)arg1;
@property(readonly, retain, nonatomic) LPAudio *audio; // @synthesize audio=_audio;
- (void).cxx_destruct;
- (id)initWithAudio:(id)arg1 fetcher:(id)arg2;

@end
