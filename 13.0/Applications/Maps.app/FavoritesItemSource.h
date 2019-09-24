//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PersonalizedItemSource.h"

@class MSPQuery, NSArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FavoritesItemSource : PersonalizedItemSource
{
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSObject<OS_dispatch_queue> *_lockQueue;
    MSPQuery *_cachedFavorites;
    NSArray *_allItems;
}

- (void).cxx_destruct;
- (void)_reloadFavorites;
- (id)allItems;
- (void)userDefaultsDidChange:(id)arg1;
- (id)init;

@end
