//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@interface _MPSparseArrayNode : NSObject <NSSecureCoding>
{
    unsigned long long _relativeOffset;
    id _object;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) unsigned long long relativeOffset; // @synthesize relativeOffset=_relativeOffset;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelativeOffset:(unsigned long long)arg1 object:(id)arg2;

@end
