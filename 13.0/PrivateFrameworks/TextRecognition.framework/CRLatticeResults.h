//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface CRLatticeResults : NSObject
{
    NSMutableArray *_mutableResults;
}

@property(retain, nonatomic) NSMutableArray *mutableResults; // @synthesize mutableResults=_mutableResults;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *results;
- (void)addResult:(id)arg1;
- (id)init;

@end
