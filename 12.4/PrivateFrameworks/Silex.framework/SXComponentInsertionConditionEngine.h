//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInsertionConditionEngine-Protocol.h>

@class NSMutableSet, NSString;

@interface SXComponentInsertionConditionEngine : NSObject <SXComponentInsertionConditionEngine>
{
    NSMutableSet *_conditions;
}

@property(readonly, nonatomic) NSMutableSet *conditions; // @synthesize conditions=_conditions;
- (void).cxx_destruct;
- (void)addCondition:(id)arg1;
- (_Bool)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3;
- (void)insertedComponent:(id)arg1 approximateLocation:(struct CGPoint)arg2;
- (void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
