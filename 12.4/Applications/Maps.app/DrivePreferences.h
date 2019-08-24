//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DrivePreferences : NSObject
{
    _Bool _avoidTolls;
    _Bool _avoidHighways;
}

+ (id)userDefaultDrivePreferences;
@property(readonly, nonatomic) _Bool avoidHighways; // @synthesize avoidHighways=_avoidHighways;
@property(readonly, nonatomic) _Bool avoidTolls; // @synthesize avoidTolls=_avoidTolls;
- (_Bool)isEqualToDrivePreferences:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAvoidTolls:(_Bool)arg1 avoidHighways:(_Bool)arg2;

@end
