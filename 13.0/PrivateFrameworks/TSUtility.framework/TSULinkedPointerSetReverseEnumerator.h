//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class TSULinkedPointerSetEntry;

@interface TSULinkedPointerSetReverseEnumerator : NSEnumerator
{
    TSULinkedPointerSetEntry *mTail;
    TSULinkedPointerSetEntry *mLastUsed;
}

- (id)nextObject;
- (id)initWithLastEntry:(id)arg1;

@end
