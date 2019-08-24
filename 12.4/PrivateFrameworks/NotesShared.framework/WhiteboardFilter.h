//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface WhiteboardFilter : CIFilter
{
    CIImage *_inputImage;
    NSNumber *_stride;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *stride; // @synthesize stride=_stride;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;
- (id)whiteboardFilterKernel;

@end
