//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EKEventDetailGroup : NSObject
{
    long long _tag;
    NSArray *_items;
    NSString *_headerTitle;
}

@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (void)updateCellLayoutsForRowCountIfNeededUsingWidth:(double)arg1;
- (id)description;
- (_Bool)hasSubitemForIndexPathRow:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2;
- (id)itemAtIndex:(unsigned long long)arg1 subitemIndex:(unsigned long long *)arg2;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfRows;
- (id)initWithTag:(long long)arg1 headerTitle:(id)arg2;

@end
