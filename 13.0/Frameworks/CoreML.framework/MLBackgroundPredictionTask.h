//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLBackgroundTask.h>

@class MLModelConfiguration, MLPredictionOptions, NSURL;

@interface MLBackgroundPredictionTask : MLBackgroundTask
{
    NSURL *_modelURL;
    MLModelConfiguration *_modelConfiguration;
    MLPredictionOptions *_predictionOptions;
}

+ (_Bool)supportsSecureCoding;
+ (Class)taskRunnerClass;
@property(copy, nonatomic) MLPredictionOptions *predictionOptions; // @synthesize predictionOptions=_predictionOptions;
@property(copy, nonatomic) MLModelConfiguration *modelConfiguration; // @synthesize modelConfiguration=_modelConfiguration;
@property(copy, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
