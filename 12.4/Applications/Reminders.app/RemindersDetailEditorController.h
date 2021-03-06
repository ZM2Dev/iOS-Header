//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "EKExpandingTextViewDelegate-Protocol.h"
#import "RemindersActionEditorDelegate-Protocol.h"
#import "RemindersEndRepeatControllerDelegate-Protocol.h"
#import "RemindersListPickerDelegate-Protocol.h"
#import "RemindersLocationEditorDelegate-Protocol.h"
#import "RemindersRecurrenceTypeViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class EKCalendar, EKRecurrenceRule, EKReminder, EKStructuredLocation, NSDate, NSIndexPath, NSString, NSURL, UITableView, UITextField, _RemindersDatePickerCell, _RemindersPriorityPickerCell, _RemindersTextEditCell;
@protocol RemindersDetailEditorControllerDelegate;

@interface RemindersDetailEditorController : UIViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, RemindersRecurrenceTypeViewControllerDelegate, RemindersEndRepeatControllerDelegate, RemindersLocationEditorDelegate, RemindersListPickerDelegate, RemindersActionEditorDelegate, EKExpandingTextViewDelegate>
{
    EKReminder *_reminder;
    UITableView *_tableView;
    _RemindersTextEditCell *_titleCell;
    _RemindersPriorityPickerCell *_priorityCell;
    _RemindersTextEditCell *_notesCell;
    _RemindersDatePickerCell *_datePickerCell;
    unsigned int _needsSave;
    _Bool _showingTime;
    _Bool _showingLocation;
    _Bool _showingInlineDatePicker;
    _Bool _showingDueDate;
    _Bool _showingAction;
    NSIndexPath *_inlineDatePickerIndexPath;
    NSDate *_dueDate;
    NSDate *_alarmDate;
    EKStructuredLocation *_alarmLocation;
    long long _repeatType;
    NSString *_customRepeatString;
    NSDate *_repeatEnd;
    long long _proximity;
    EKCalendar *_calendar;
    EKRecurrenceRule *_recurrenceRule;
    NSURL *_actionURL;
    UITextField *_editingTextField;
    _Bool _isInShareExtension;
    CDUnknownBlockType _locationEditorDoneBlock;
    id <RemindersDetailEditorControllerDelegate> _delegate;
}

+ (id)defaultAlarmDate;
@property(nonatomic) __weak id <RemindersDetailEditorControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) EKReminder *reminder; // @synthesize reminder=_reminder;
- (void).cxx_destruct;
- (void)_storeChanged:(id)arg1;
- (void)formatCellForDatePicker:(id)arg1;
- (id)longDateString:(id)arg1;
- (id)shortDateString:(id)arg1;
- (id)locationString;
- (void)dismissInlineDatePicker;
- (_Bool)_showingAction;
- (_Bool)_showingActionSwitch;
- (_Bool)_showingActionURL;
- (_Bool)_showingListChooser;
- (_Bool)_showingDelay;
- (_Bool)_showingLocation;
- (_Bool)_showingLocationSwitch;
- (_Bool)_showingEndRepeat;
- (_Bool)_showingRepeat;
- (_Bool)_showingDueDate;
- (_Bool)_showingAlarm;
- (_Bool)_showingTitle;
- (id)indexPathForEditorRow:(long long)arg1;
- (long long)tableRowInMoreSection:(long long)arg1;
- (long long)tableRowInActionSection:(long long)arg1;
- (long long)tableRowInLocationSection:(long long)arg1;
- (long long)tableRowInTimeSection:(long long)arg1;
- (long long)_editorRowForIndexPath:(id)arg1;
- (long long)_editorRowInMoreSection:(long long)arg1;
- (long long)_editorRowInActionSection:(long long)arg1;
- (long long)_editorRowInLocationSection:(long long)arg1;
- (long long)_editorRowInTimeSection:(long long)arg1;
- (long long)_editorSectionForTableSection:(long long)arg1;
- (long long)_tableSectionForEditorSection:(long long)arg1;
- (void)datePickerChanged:(id)arg1;
- (void)_priorityChanged:(id)arg1;
- (void)actionToggled:(id)arg1;
- (void)atALocationToggled:(id)arg1;
- (void)onADayToggled:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)scrollToIndexPath:(id)arg1;
- (void)textViewDidChangeContentHeight:(id)arg1;
- (_Bool)textViewShouldSignalContentSizeChange:(id)arg1;
- (void)actionEditor:(id)arg1 didChangeURL:(id)arg2;
- (void)listPickerDidSelect:(id)arg1;
- (void)locationEditor:(id)arg1 didChangeLocation:(id)arg2;
- (void)locationEditor:(id)arg1 didChangeProximity:(long long)arg2;
- (void)endRepeatController:(id)arg1 didSelectDate:(id)arg2;
- (void)_updateTableRowHeights;
- (void)_updateCustomRepeatCell;
- (void)recurrenceTypeViewController:(id)arg1 didChooseRepeatType:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dismissKeyboard;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardDidShow;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)locationEditorDone;
- (void)showAlarmLocation:(CDUnknownBlockType)arg1;
- (void)showAlarmDate;
- (void)saveReminderIfNeeded;
- (void)updateFromReminder;
- (void)createDatePickerCell;
- (struct CGSize)calculatePreferredContentSize;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initForShareExtensionWithReminder:(id)arg1;
- (id)initWithNewReminder:(id)arg1;
- (id)initWithReminder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

