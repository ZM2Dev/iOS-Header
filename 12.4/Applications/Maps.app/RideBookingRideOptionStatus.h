//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSSet, NSString, NSUserActivity;
@protocol RideBookingApplication;

__attribute__((visibility("hidden")))
@interface RideBookingRideOptionStatus : NSObject
{
    _Bool _loadingRideOptions;
    id <RideBookingApplication> _application;
    NSArray *_rideOptions;
    unsigned long long _rideOptionStatusError;
    NSDate *_expirationDate;
    NSUserActivity *_userActivity;
    NSSet *_cacheItems;
}

+ (id)statusWithApplication:(id)arg1 rideOptions:(id)arg2 expirationDate:(id)arg3 userActivity:(id)arg4 cacheItems:(id)arg5 rideOptionStatusError:(unsigned long long)arg6;
+ (id)statusWithApplication:(id)arg1 error:(unsigned long long)arg2;
+ (id)statusWithApplication:(id)arg1 loadingRideOptions:(_Bool)arg2;
+ (id)statusWithApplication:(id)arg1;
@property(retain, nonatomic) NSSet *cacheItems; // @synthesize cacheItems=_cacheItems;
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) unsigned long long rideOptionStatusError; // @synthesize rideOptionStatusError=_rideOptionStatusError;
@property(retain, nonatomic) NSArray *rideOptions; // @synthesize rideOptions=_rideOptions;
@property(nonatomic) _Bool loadingRideOptions; // @synthesize loadingRideOptions=_loadingRideOptions;
@property(nonatomic) __weak id <RideBookingApplication> application; // @synthesize application=_application;
- (void).cxx_destruct;
- (id)description;
- (id)_init;
@property(readonly, nonatomic) NSString *errorMessage;

@end
