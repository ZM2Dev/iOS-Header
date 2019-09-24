//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDateFormatter, NSString;

@interface HKTableFormatter : NSObject
{
    NSArray *_titles;
    NSArray *_columns;
    NSDateFormatter *_dateFormatter;
    NSString *_title;
}

+ (id)formatterForCodableCondensedWorkouts;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)stringFromTimeInterval:(double)arg1;
- (id)stringFromDate:(id)arg1 fallback:(id)arg2;
- (id)stringFromDate:(id)arg1;
- (id)formattedTable;
- (void)_enumerateFormattedRowsWithColumnWidths:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)enumerateFormattedRows:(CDUnknownBlockType)arg1;
- (id)_formattedTableHeaderForColumnWidths:(id)arg1;
- (id)formattedTableHeader;
- (void)_appendColumn:(id)arg1 width:(long long)arg2 padding:(id)arg3 row:(id)arg4;
- (id)_columnWidths;
@property(readonly, nonatomic) long long rowCount;
- (void)appendHeterogenousRow:(id)arg1;
- (void)appendRow:(id)arg1;
- (id)init;
- (id)initWithColumnTitles:(id)arg1;
- (void)appendWorkout:(id)arg1;

@end
