//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GEOFeatureStyleAttributes, NSString;

__attribute__((visibility("hidden")))
@interface RAPMarkerViewAttributes : NSObject <NSCopying>
{
    NSString *_title;
    GEOFeatureStyleAttributes *_styleAttributes;
}

@property(readonly, copy, nonatomic) GEOFeatureStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 styleAttributes:(id)arg2;

@end

