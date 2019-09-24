//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKUIPreviewViewController.h>

@class CalendarModel, CompactDayViewController, DayNavigationViewController, EKCalendarDate, PaletteView, UIView, UIWindow;

@interface EKUIPreviewDayViewController : EKUIPreviewViewController
{
    CompactDayViewController *_dayViewController;
    DayNavigationViewController *_dayScrubberViewController;
    PaletteView *_paletteView;
    UIView *_lineView;
    UIWindow *_window;
    EKCalendarDate *_displayedDate;
    CalendarModel *_model;
}

@property(retain, nonatomic) CalendarModel *model; // @synthesize model=_model;
@property(retain, nonatomic) EKCalendarDate *displayedDate; // @synthesize displayedDate=_displayedDate;
- (void).cxx_destruct;
- (id)_paletteView;
- (id)_dayView;
- (id)_currentDateComponents;
- (id)_now;
- (_Bool)shouldAutorotate;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1 displayedDate:(id)arg2 window:(id)arg3;

@end
