//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UITextTiledLayerMaskedRect : NSObject
{
    double _alpha;
    struct CGRect _boundingRect;
}

+ (id)rect:(struct CGRect)arg1 alpha:(double)arg2;
+ (id)ghostedRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
- (id)initWithRect:(struct CGRect)arg1 alpha:(double)arg2;

@end
