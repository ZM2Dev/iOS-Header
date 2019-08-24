//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCUserInfo, NSString;
@protocol FCFeldsparIDProviderObserving;

@protocol FCFeldsparIDProvider <NSObject>
@property(readonly, copy, nonatomic) NSString *feldsparID;
- (void)removeObserver:(id <FCFeldsparIDProviderObserving>)arg1;
- (void)addObserver:(id <FCFeldsparIDProviderObserving>)arg1;
- (void)registerUserInfo:(FCUserInfo *)arg1;
@end
