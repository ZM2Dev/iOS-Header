//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADColor.h>

__attribute__((visibility("hidden")))
@interface OADSchemeColor : OADColor
{
    int mIndex;
}

+ (id)schemeColorWithIndex:(int)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)schemeColorIndex;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSchemeColorIndex:(int)arg1;

@end
