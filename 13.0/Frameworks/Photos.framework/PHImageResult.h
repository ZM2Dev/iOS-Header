//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHCompositeMediaResult.h>

@class NSNumber;

@interface PHImageResult : PHCompositeMediaResult
{
    struct CGImage *_imageRef;
    NSNumber *_exifOrientation;
}

@property(copy, nonatomic) NSNumber *exifOrientation; // @synthesize exifOrientation=_exifOrientation;
- (void).cxx_destruct;
- (long long)uiOrientation;
- (id)imageUTI;
- (void)setImageUTI:(id)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (struct CGImage *)imageRef;
- (void)setImageRef:(struct CGImage *)arg1;
- (_Bool)containsValidData;
- (void)dealloc;

@end
