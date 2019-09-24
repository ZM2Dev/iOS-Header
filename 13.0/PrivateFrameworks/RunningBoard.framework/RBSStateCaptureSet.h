//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface RBSStateCaptureSet : NSObject
{
    id <BSInvalidatable> _invalidatable;
    NSMutableSet *_stateCaptureSegments;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *itemsCopy;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)init;

@end
