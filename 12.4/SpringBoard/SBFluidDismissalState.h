//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBUIPluginFluidDismissalState-Protocol.h"

@class NSString;

@interface SBFluidDismissalState : NSObject <SBUIPluginFluidDismissalState>
{
    double backgroundWeighting;
    double contentWeighting;
    struct CGRect contentRect;
}

+ (id)stateWithBackgroundWeighting:(double)arg1 contentWeighting:(double)arg2 contentRect:(struct CGRect)arg3;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect;
@property(nonatomic) double contentWeighting; // @synthesize contentWeighting;
@property(nonatomic) double backgroundWeighting; // @synthesize backgroundWeighting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

