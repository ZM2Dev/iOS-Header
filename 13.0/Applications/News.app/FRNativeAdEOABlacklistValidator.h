//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRValidatorRuleProviding-Protocol.h"

@class NSString;
@protocol FCHeadlineProviding;

@interface FRNativeAdEOABlacklistValidator : NSObject <FRValidatorRuleProviding>
{
    id <FCHeadlineProviding> _headline;
}

+ (id)validatorWithHeadline:(id)arg1;
@property(retain, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
- (void).cxx_destruct;
- (id)relatedObjectGeneratedDuringTestingOfObject:(id)arg1;
- (_Bool)supportsValidationOfObjectClass:(Class)arg1;
- (void)testObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
