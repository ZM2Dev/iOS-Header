//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoWeatherComplicationsCompanion/NWMColorPalette-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWMTemperatureColor : NSObject <NWMColorPalette>
{
}

+ (id)colorSpectrum;
+ (void)colorSpectrumBetweenLow:(id)arg1 high:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)colorForTemperature:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
