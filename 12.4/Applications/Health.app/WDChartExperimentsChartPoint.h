//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HKChartPoint-Protocol.h"

@class NSDate, NSNumber, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface WDChartExperimentsChartPoint : NSObject <HKChartPoint>
{
    NSDate *_xValue;
    NSNumber *_yValue;
    id <HKGraphSeriesBlockCoordinateInfo> _experimentInfo;
}

@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> experimentInfo; // @synthesize experimentInfo=_experimentInfo;
@property(readonly, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;
@property(readonly, nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;
- (void).cxx_destruct;
- (id)userInfo;
- (id)maxYValue;
- (id)minYValue;
- (id)allYValues;
- (id)yValueForKey:(id)arg1;
- (id)maxXValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)xValueAsGenericType;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2 userInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

