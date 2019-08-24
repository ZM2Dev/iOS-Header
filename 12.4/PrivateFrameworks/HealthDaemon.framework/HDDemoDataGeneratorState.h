//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class HDDemoDataGeneratorWorkoutConfiguration, NSDate;

@interface HDDemoDataGeneratorState : NSObject <NSSecureCoding>
{
    _Bool _createdFromNSKeyedUnarchiver;
    _Bool _finished;
    _Bool _firstRun;
    NSDate *_firstSampleDate;
    NSDate *_lastSampleDate;
    NSDate *_lastRunDate;
    long long _currentDay;
    double _startTime;
    double _currentTime;
    double _endTime;
    HDDemoDataGeneratorWorkoutConfiguration *_workoutConfiguration;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HDDemoDataGeneratorWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
@property(nonatomic, getter=isFirstRun) _Bool firstRun; // @synthesize firstRun=_firstRun;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long currentDay; // @synthesize currentDay=_currentDay;
@property(retain, nonatomic) NSDate *lastRunDate; // @synthesize lastRunDate=_lastRunDate;
@property(retain, nonatomic) NSDate *lastSampleDate; // @synthesize lastSampleDate=_lastSampleDate;
@property(retain, nonatomic) NSDate *firstSampleDate; // @synthesize firstSampleDate=_firstSampleDate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) long long calendarDay;
@property(readonly, nonatomic) NSDate *currentDate;
@property(readonly, nonatomic, getter=isHiking) _Bool hiking;
@property(readonly, nonatomic, getter=isDoingYoga) _Bool doingYoga;
@property(readonly, nonatomic, getter=isWalking) _Bool walking;
@property(readonly, nonatomic, getter=isDoingElliptical) _Bool doingElliptical;
@property(readonly, nonatomic, getter=isDoingHIIT) _Bool doingHIIT;
@property(readonly, nonatomic, getter=isSwimming) _Bool swimming;
@property(readonly, nonatomic, getter=isCycling) _Bool cycling;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic, getter=isExercising) _Bool exercising;
- (_Bool)createdFromNSKeyedUnarchiver;
- (id)init;

@end
