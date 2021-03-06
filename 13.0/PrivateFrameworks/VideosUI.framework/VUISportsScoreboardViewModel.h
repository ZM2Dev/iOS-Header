//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUISportsScoreboardViewModel : NSObject
{
    _Bool _showScoreboard;
    NSString *_canonicalId;
    NSDictionary *_leagueContext;
    NSArray *_scores;
}

@property(readonly, nonatomic) _Bool showScoreboard; // @synthesize showScoreboard=_showScoreboard;
@property(readonly, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(readonly, nonatomic) NSDictionary *leagueContext; // @synthesize leagueContext=_leagueContext;
@property(readonly, nonatomic) NSString *canonicalId; // @synthesize canonicalId=_canonicalId;
- (void).cxx_destruct;
- (id)jsContextDictionary;
- (id)initWithDictionary:(id)arg1;

@end

