//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedDataReset/NSSecureCoding-Protocol.h>

@interface DDRResetOptions : NSObject <NSSecureCoding>
{
    _Bool _hideProgress;
    _Bool _eraseDataPlan;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool eraseDataPlan; // @synthesize eraseDataPlan=_eraseDataPlan;
@property(nonatomic) _Bool hideProgress; // @synthesize hideProgress=_hideProgress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
