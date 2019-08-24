//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSSecureCoding-Protocol.h>

@class ARReferenceImageManager, NSString, NSUUID;

@interface ARReferenceImage : NSObject <NSSecureCoding>
{
    NSString *_name;
    double _estimatedQuality;
    ARReferenceImageManager *_referenceImageManager;
    struct __CVBuffer *_pixelBuffer;
    struct __CVBuffer *_alphaMask;
    NSUUID *_identifier;
    struct CGSize _physicalSize;
}

+ (_Bool)supportsSecureCoding;
+ (id)referenceImagesInGroupNamed:(id)arg1 catalogURL:(id)arg2;
+ (id)referenceImagesInGroupNamed:(id)arg1 catalogName:(id)arg2 bundle:(id)arg3;
+ (id)referenceImagesInGroupNamed:(id)arg1 bundle:(id)arg2;
+ (id)referenceImagesInGroupNamed:(id)arg1 catalog:(id)arg2;
+ (id)referenceImageManager;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) struct __CVBuffer *alphaMask; // @synthesize alphaMask=_alphaMask;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(retain) ARReferenceImageManager *referenceImageManager; // @synthesize referenceImageManager=_referenceImageManager;
@property double estimatedQuality; // @synthesize estimatedQuality=_estimatedQuality;
@property(readonly, nonatomic) struct CGSize physicalSize; // @synthesize physicalSize=_physicalSize;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)estimateQualityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGSize imageSize;
- (id)description;
- (void)dealloc;
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3 alphaInfo:(unsigned int *)arg4 addPadding:(_Bool)arg5;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3 addPadding:(_Bool)arg4;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3 addPadding:(_Bool)arg4;

@end
