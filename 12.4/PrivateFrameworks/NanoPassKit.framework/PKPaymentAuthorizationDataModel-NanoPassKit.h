//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationDataModel.h>

@interface PKPaymentAuthorizationDataModel (NanoPassKit)
- (_Bool)_hasNonPeerPaymentAcceptedPasses;
- (_Bool)npkIsSplitPeerPaymentWithoutAnotherPaymentMethod;
- (_Bool)npkIsSplitPeerPaymentWithAnotherPaymentMethod;
- (_Bool)npkIsSplitPeerPayment;
- (_Bool)npkIsSkeletonPeerPayment;
- (_Bool)npkIsPeerPayment;
- (void)npkSetPassAndPaymentApplicationForAID:(id)arg1;
@end
