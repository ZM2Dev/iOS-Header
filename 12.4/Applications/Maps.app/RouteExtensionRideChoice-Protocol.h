//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol RouteExtensionRideChoice <NSObject>
@property(readonly, copy, nonatomic) NSString *bookingCommandTitle;
@property(readonly, copy, nonatomic) NSString *ETASubtitle;
@property(readonly, copy, nonatomic) NSString *rideWaitSubtitle;
@property(readonly, copy, nonatomic) NSString *priceRangeCaption;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) UIImage *image;
- (void)book;
@end

