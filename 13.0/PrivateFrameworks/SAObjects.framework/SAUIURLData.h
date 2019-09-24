//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSData, NSString, NSURL;

@interface SAUIURLData : AceObject <SAAceSerializable>
{
}

+ (id)uRLDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)uRLData;
@property(copy, nonatomic) NSURL *uri;
@property(copy, nonatomic) NSData *data;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
