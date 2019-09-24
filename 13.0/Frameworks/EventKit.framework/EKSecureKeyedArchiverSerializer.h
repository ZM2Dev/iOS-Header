//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/EKSerializer-Protocol.h>

@class EKEventStore, NSString;

@interface EKSecureKeyedArchiverSerializer : NSObject <EKSerializer>
{
    EKEventStore *_eventStore;
    NSString *_version;
}

@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (void).cxx_destruct;
- (id)versionFromData:(id)arg1 error:(id *)arg2;
- (id)serializeEvent:(id)arg1 error:(id *)arg2;
- (id)deserializeData:(id)arg1 error:(id *)arg2;
- (id)initWithEventStore:(id)arg1 withVersion:(id)arg2;

@end
