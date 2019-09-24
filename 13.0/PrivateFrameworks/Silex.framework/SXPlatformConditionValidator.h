//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXConditionValidating-Protocol.h>

@class NSString;

@interface SXPlatformConditionValidator : NSObject <SXConditionValidating>
{
    NSString *_platform;
}

@property(readonly, copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (_Bool)validateCondition:(id)arg1 context:(id)arg2;
- (id)initWithPlatform:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
