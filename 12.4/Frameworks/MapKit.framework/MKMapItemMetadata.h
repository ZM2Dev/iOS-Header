//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOBusiness, NSMutableDictionary;

@interface MKMapItemMetadata : NSObject
{
    GEOBusiness *_business;
    NSMutableDictionary *_imageCache;
}

@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly, nonatomic) GEOBusiness *business; // @synthesize business=_business;
- (void).cxx_destruct;
- (id)imageForURL:(id)arg1;
- (void)addImage:(id)arg1 forURL:(id)arg2;
- (id)description;
- (id)initWithBusiness:(id)arg1;

@end
