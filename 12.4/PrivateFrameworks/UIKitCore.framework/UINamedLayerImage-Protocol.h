//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, UIImage;

@protocol UINamedLayerImage <NSObject>
@property(readonly, nonatomic) int blendMode;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSString *name;

@optional
@property(nonatomic) _Bool fixedFrame;
- (UIImage *)imageObj;
@end
