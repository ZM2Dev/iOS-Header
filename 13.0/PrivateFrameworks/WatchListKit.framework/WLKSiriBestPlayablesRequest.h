//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKRequest.h>

@class NSArray;

@interface WLKSiriBestPlayablesRequest : WLKRequest
{
    NSArray *_statsIDs;
}

@property(readonly, copy, nonatomic) NSArray *statsIDs; // @synthesize statsIDs=_statsIDs;
- (void).cxx_destruct;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStatsIDs:(id)arg1;
- (id)init;

@end
