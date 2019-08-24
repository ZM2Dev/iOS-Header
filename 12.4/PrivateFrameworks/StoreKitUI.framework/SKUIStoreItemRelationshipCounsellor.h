//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface SKUIStoreItemRelationshipCounsellor : NSObject
{
    NSMutableDictionary *_relationshipsDictionary;
    NSRecursiveLock *_lock;
}

@property(readonly, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *relationshipsDictionary; // @synthesize relationshipsDictionary=_relationshipsDictionary;
- (void).cxx_destruct;
- (void)removeAllRelationshipsForItem:(id)arg1;
- (void)addChildren:(id)arg1 forParent:(id)arg2;
- (void)setChildren:(id)arg1 forParent:(id)arg2;
- (id)familyForItem:(id)arg1;
- (id)siblingItemsForItem:(id)arg1;
- (id)parentItemForItem:(id)arg1;
- (id)childItemsForItem:(id)arg1;
- (_Bool)itemHasChildren:(id)arg1;
- (_Bool)itemHasParent:(id)arg1;
- (id)init;

@end
