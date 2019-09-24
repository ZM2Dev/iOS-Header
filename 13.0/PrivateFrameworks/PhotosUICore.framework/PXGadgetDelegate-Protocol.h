//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXGadgetNavigationHelper;
@protocol PXGadget, PXGadgetDelegate, PXGadgetTransition;

@protocol PXGadgetDelegate <NSObject>
@property(readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property(readonly, nonatomic) id <PXGadgetTransition> gadgetTransition;
- (void)dismissGadgetViewController:(struct NSObject *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)presentGadgetViewController:(struct NSObject *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (_Bool)gadget:(id <PXGadget>)arg1 transitionToViewController:(struct NSObject *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;

@optional
@property(nonatomic) __weak id <PXGadgetDelegate> nextGadgetResponder;
- (void)gadget:(id <PXGadget>)arg1 didChange:(unsigned long long)arg2;
- (void)gadget:(id <PXGadget>)arg1 animateChanges:(void (^)(void))arg2;
- (struct NSObject *)gadgetViewControllerHostingGadget:(id <PXGadget>)arg1;
@end
