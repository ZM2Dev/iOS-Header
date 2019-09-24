//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCControllerButtonInput.h>

@class GCControllerAxisInput;

@interface _GCControllerAxisButtonInput : GCControllerButtonInput
{
    _Bool _positive;
    GCControllerAxisInput *_axis;
}

@property(readonly, nonatomic, getter=isPositive) _Bool positive; // @synthesize positive=_positive;
@property(nonatomic) __weak GCControllerAxisInput *axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (float)value;
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;
- (_Bool)_setValue:(float)arg1;
- (_Bool)_setValueFromAxisButton:(float)arg1 queue:(id)arg2;
- (_Bool)_setValueFromAxisButton:(float)arg1;
- (_Bool)isAnalog;
- (id)description;
- (id)collection;
- (id)initWithAxis:(id)arg1 positive:(_Bool)arg2;

@end
