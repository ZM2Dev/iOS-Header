//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SBSwitcherModifierQuerySnapshot;

@interface SBSwitcherModifierStackSnapshot : NSObject
{
    NSString *_modifierName;
    SBSwitcherModifierQuerySnapshot *_querySnapshot;
    NSArray *_childSnapshots;
}

@property(retain, nonatomic) NSArray *childSnapshots; // @synthesize childSnapshots=_childSnapshots;
@property(retain, nonatomic) SBSwitcherModifierQuerySnapshot *querySnapshot; // @synthesize querySnapshot=_querySnapshot;
@property(retain, nonatomic) NSString *modifierName; // @synthesize modifierName=_modifierName;
- (void).cxx_destruct;
- (void)_enumerateModifierSnapshots:(CDUnknownBlockType)arg1 stop:(_Bool *)arg2;
- (void)enumerateModifierSnapshots:(CDUnknownBlockType)arg1;

@end
