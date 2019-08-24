//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPlaceActionDetails, NSString;

__attribute__((visibility("hidden")))
@interface MapsAnalyticsHelper : NSObject
{
    int _tapAction;
    int _target;
    GEOPlaceActionDetails *_actionDetails;
    NSString *_eventValue;
}

+ (id)analyticsSuggestionEntriesArrayFromAutoCompleteResultsArray:(id)arg1 autoCompleteContext:(id)arg2 currentLocation:(id)arg3 personalizedCompoundItems:(id)arg4;
+ (id)analyticsResultsInfoArrayFromAutoCompleteResultsArray:(id)arg1 selectedIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *eventValue; // @synthesize eventValue=_eventValue;
@property(readonly, nonatomic) GEOPlaceActionDetails *actionDetails; // @synthesize actionDetails=_actionDetails;
@property(readonly, nonatomic) int target; // @synthesize target=_target;
@property(readonly, nonatomic) int tapAction; // @synthesize tapAction=_tapAction;
- (void).cxx_destruct;
- (id)initWithMapItem:(id)arg1;
- (id)initWithLabelMarker:(id)arg1;
- (id)init;

@end
