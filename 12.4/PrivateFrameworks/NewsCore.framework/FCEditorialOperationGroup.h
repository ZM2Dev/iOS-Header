//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;
@protocol FCSectionProviding;

@interface FCEditorialOperationGroup : NSObject
{
    id <FCSectionProviding> _section;
    NSArray *_headlines;
    NSDate *_publishDate;
}

@property(retain, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(retain, nonatomic) NSArray *headlines; // @synthesize headlines=_headlines;
@property(retain, nonatomic) id <FCSectionProviding> section; // @synthesize section=_section;
- (void).cxx_destruct;

@end
