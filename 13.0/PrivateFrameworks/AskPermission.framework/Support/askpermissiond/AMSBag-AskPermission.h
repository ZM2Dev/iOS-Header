//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSBag.h>

@class AMSBagValue;

@interface AMSBag (AskPermission)
+ (id)_bagKeySet;
+ (id)sharedBag;
@property(readonly, nonatomic) AMSBagValue *updateRequestURL;
@property(readonly, nonatomic) AMSBagValue *retrieveRequestURL;
@property(readonly, nonatomic) AMSBagValue *localeIdentifier;
@property(readonly, nonatomic) AMSBagValue *countryCode;
@end
