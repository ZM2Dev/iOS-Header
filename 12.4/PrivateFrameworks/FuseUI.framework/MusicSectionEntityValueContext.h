//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicEntityValueContext.h>

@class NSString;

@interface MusicSectionEntityValueContext : MusicEntityValueContext
{
    _Bool _wantsLocalizedTitle;
    NSString *_localizedTitle;
}

@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic) _Bool wantsLocalizedTitle; // @synthesize wantsLocalizedTitle=_wantsLocalizedTitle;
- (void).cxx_destruct;
- (void)resetOutputValues;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
