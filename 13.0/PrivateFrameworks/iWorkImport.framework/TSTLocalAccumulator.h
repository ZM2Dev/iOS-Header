//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSTLocalAccumulator : NSObject
{
    struct TSUCellCoord _idOfFirstOccurence;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) struct TSUCellCoord idOfFirstOccurence; // @synthesize idOfFirstOccurence=_idOfFirstOccurence;
- (id)description;

@end
