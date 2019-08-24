//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSIndexPath.h>

@interface NSIndexPath (PhotosUICore)
+ (id)px_indexPathForItem:(long long)arg1 inSection:(long long)arg2 withKind:(long long)arg3;
+ (id)px_indexPathForItem:(long long)arg1 inSection:(long long)arg2;
+ (id)px_indexPathsForItems:(id)arg1 inSection:(long long)arg2;
- (id)px_indexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)px_indexPathAfterInsertingItemAtIndexPath:(id)arg1;
- (id)px_alteredIndexPathAfterMovingItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)px_alteredIndexPathAfterDeletingItemsAtIndexPaths:(id)arg1;
- (id)px_alteredIndexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)px_alteredIndexPathAfterInsertingItemsAtIndexPaths:(id)arg1;
- (id)px_alteredIndexPathAfterInsertingItemAtIndexPath:(id)arg1;
- (id)px_indexPathByChangingIndexAtPosition:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) long long px_kind;
@property(readonly, nonatomic) long long px_section;
@property(readonly, nonatomic) long long px_item;
@end
