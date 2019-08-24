//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBokehBlur : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputRingAmount;
    NSNumber *inputRingSize;
    NSNumber *inputSoftness;
    NSMutableArray *_recipe;
}

+ (id)customAttributes;
- (id)outputImage;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)dealloc;

@end
