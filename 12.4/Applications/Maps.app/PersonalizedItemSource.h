//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface PersonalizedItemSource : NSObject
{
    NSHashTable *_observers;
    long long _sourceType;
    long long _sourceSubtype;
}

@property(readonly, nonatomic) long long sourceSubtype; // @synthesize sourceSubtype=_sourceSubtype;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;
- (void)personalizedItemDidChange:(id)arg1;
- (void)_notifyObserversItemsDidChange;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)_observers;
- (id)allItems;
- (id)initWithSourceType:(long long)arg1 sourceSubtype:(long long)arg2;

@end

