//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VMUVMRegionRangeInfo : NSObject
{
    unsigned long long address;
    unsigned long long size;
    unsigned long long stackIdentifier;
    unsigned int userTag;
}

@property unsigned int userTag; // @synthesize userTag;
@property unsigned long long stackIdentifier; // @synthesize stackIdentifier;
@property unsigned long long size; // @synthesize size;
@property unsigned long long address; // @synthesize address;
@property(readonly) struct _VMURange range;
- (id)init;

@end
