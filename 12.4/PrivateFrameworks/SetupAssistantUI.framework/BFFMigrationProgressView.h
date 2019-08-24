//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFRestoreProgressView.h>

@class NSDateComponentsFormatter, NSString;

@interface BFFMigrationProgressView : BFFRestoreProgressView
{
    NSString *_internalProgressText;
    NSDateComponentsFormatter *_elapsedDurationFormatter;
}

@property(retain, nonatomic) NSDateComponentsFormatter *elapsedDurationFormatter; // @synthesize elapsedDurationFormatter=_elapsedDurationFormatter;
@property(retain) NSString *internalProgressText; // @synthesize internalProgressText=_internalProgressText;
- (void).cxx_destruct;
- (id)timeRemainingString:(double)arg1;
- (id)initWithTitle:(id)arg1;

@end
