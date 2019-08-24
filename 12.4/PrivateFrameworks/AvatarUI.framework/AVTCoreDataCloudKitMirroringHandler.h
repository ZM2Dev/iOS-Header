//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCoreDataCloudKitMirroringHandler-Protocol.h>

@class NSNotificationCenter;
@protocol AVTBlockScheduler, AVTCoreDataCloudKitMirroringHandlerDelegate, AVTUILogger, NSObject;

@interface AVTCoreDataCloudKitMirroringHandler : NSObject <AVTCoreDataCloudKitMirroringHandler>
{
    _Bool _exportInFlight;
    id <AVTCoreDataCloudKitMirroringHandlerDelegate> _delegate;
    id <AVTUILogger> _logger;
    id <AVTBlockScheduler> _blockScheduler;
    id <NSObject> _willResetNotificationToken;
    id <NSObject> _didResetNotificationToken;
    NSNotificationCenter *_notificationCenter;
}

@property(nonatomic) _Bool exportInFlight; // @synthesize exportInFlight=_exportInFlight;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) id <NSObject> didResetNotificationToken; // @synthesize didResetNotificationToken=_didResetNotificationToken;
@property(retain, nonatomic) id <NSObject> willResetNotificationToken; // @synthesize willResetNotificationToken=_willResetNotificationToken;
@property(readonly, nonatomic) id <AVTBlockScheduler> blockScheduler; // @synthesize blockScheduler=_blockScheduler;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <AVTCoreDataCloudKitMirroringHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetZoneWithManagedObjectContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)exportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scheduleExportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)didResetSync:(id)arg1;
- (void)willResetSync:(id)arg1;
- (void)startObservingResetSyncWithNotificationCenter:(id)arg1;
- (void)dealloc;
- (id)initWithLogger:(id)arg1 blockScheduler:(id)arg2;

@end
