//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol MapsApplicationTestingDelegate;

@protocol MapsApplicationTestDelegate <NSObject>
+ (NSString *)extendLaunchTest;
+ (void)failedTest:(NSString *)arg1 applicationTestingDelegate:(id <MapsApplicationTestingDelegate>)arg2;
+ (void)finishedTest:(NSString *)arg1 extraResults:(NSDictionary *)arg2 applicationTestingDelegate:(id <MapsApplicationTestingDelegate>)arg3;
@end
