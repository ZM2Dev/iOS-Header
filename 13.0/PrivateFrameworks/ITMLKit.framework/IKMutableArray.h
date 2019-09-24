//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKArray.h>

@interface IKMutableArray : IKArray
{
    long long _expectedCapacity;
}

@property(readonly, nonatomic) long long expectedCapacity; // @synthesize expectedCapacity=_expectedCapacity;
- (void)_convertToArrayStore;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)removeObjectAtIndex:(long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(long long)arg2;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;
- (id)initWithCapacity:(long long)arg1;

@end
