//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BookmarkDAVMoveIDUpdater : NSObject
{
    void *_database;
}

+ (void)rewriteOrderedPayloadsFromProvider:(CDUnknownBlockType)arg1;
- (void)_recursivelyRewriteServerIDsInMutableMap:(id)arg1 sortingHint:(id)arg2;
- (void)_recursivelyRewriteServerIDsForItemWithServerID:(id)arg1 newParentID:(id)arg2 mutableMap:(id)arg3;
- (void)recursivelyRewriteServerIDsInMap:(id)arg1;
- (void)recursivelyRewriteServerIDsForItemWithServerID:(id)arg1 newParentID:(id)arg2;
- (void)dealloc;
- (id)initWithDatabase:(void *)arg1;
- (id)init;

@end

