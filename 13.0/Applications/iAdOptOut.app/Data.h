//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface Data : NSObject
{
    unsigned short _val;
    unsigned short _position;
    int _index;
    NSString *_string;
}

@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) unsigned short position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) unsigned short val; // @synthesize val=_val;
- (void)dealloc;

@end
