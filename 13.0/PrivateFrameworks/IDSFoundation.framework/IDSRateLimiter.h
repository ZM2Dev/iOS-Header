//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMultiReadUniWriteLock, NSMutableDictionary;

@interface IDSRateLimiter : NSObject
{
    NSMutableDictionary *_cacheMap;
    NSMultiReadUniWriteLock *_readWriteLock;
    double _timeLimit;
    long long _limit;
}

@property(retain, nonatomic) NSMultiReadUniWriteLock *readWriteLock; // @synthesize readWriteLock=_readWriteLock;
@property(retain, nonatomic) NSMutableDictionary *cacheMap; // @synthesize cacheMap=_cacheMap;
@property(nonatomic) double timeLimit; // @synthesize timeLimit=_timeLimit;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (id)_unlockedDescription;
- (id)description;
- (void)cleanupExpiredItems;
- (double)timeToUnderLimit:(id)arg1;
- (void)clearItem:(id)arg1;
- (void)noteItem:(id)arg1;
- (_Bool)underLimitForItem:(id)arg1;
- (id)initWithLimit:(long long)arg1 timeLimit:(double)arg2;

@end
