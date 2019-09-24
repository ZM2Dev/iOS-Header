//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TabSnapshotGeneratorDelegate;

@interface TabSnapshotGenerator : NSObject
{
    id <TabSnapshotGeneratorDelegate> _delegate;
}

@property(nonatomic) __weak id <TabSnapshotGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_renderView:(id)arg1 afterScreenUpdates:(_Bool)arg2;
- (id)renderSnapshotWithSize:(struct CGSize)arg1 backgroundColor:(id)arg2 topBackdropHeight:(double)arg3 options:(unsigned long long)arg4 drawing:(CDUnknownBlockType)arg5;
- (_Bool)contentShouldUnderlapTopBackdropForContentProvider:(id)arg1;
- (struct CGRect)contentRectForContentProvider:(id)arg1 withSnapshotSize:(struct CGSize)arg2;
- (id)backgroundColorForContentProvider:(id)arg1;
- (void)_snapshotWithRequest:(id)arg1 contentProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)snapshotWithRequest:(id)arg1 contentProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
