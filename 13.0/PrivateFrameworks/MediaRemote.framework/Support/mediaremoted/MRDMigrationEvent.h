//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSString;
@protocol MRDMigrationEventDelegate;

@interface MRDMigrationEvent : NSObject
{
    NSMutableArray *_prepareCompletions;
    _Bool _isPrepared;
    _Bool _isPreparing;
    NSString *_rapportUID;
    NSString *_inputUID;
    NSString *_name;
    id <MRDMigrationEventDelegate> _delegate;
    NSString *_deviceUID;
    NSError *_error;
}

@property(readonly, nonatomic) _Bool isPreparing; // @synthesize isPreparing=_isPreparing;
@property(readonly, nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *deviceUID; // @synthesize deviceUID=_deviceUID;
@property(nonatomic) __weak id <MRDMigrationEventDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *inputUID; // @synthesize inputUID=_inputUID;
@property(readonly, nonatomic) NSString *rapportUID; // @synthesize rapportUID=_rapportUID;
- (void).cxx_destruct;
- (id)createNotificationInfo;
- (void)migrateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_prepareWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *label;
- (id)description;
- (id)initWithUID:(id)arg1 delegate:(id)arg2;

@end
