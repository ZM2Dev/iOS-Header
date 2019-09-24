//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString;

@interface SGPseudoReminderKey : NSObject <SGEntityKey>
{
    NSString *_groupId;
}

+ (_Bool)isSupportedEntityType:(long long)arg1;
@property(readonly, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (id)initWithSerialized:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)serialize;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToPseudoReminderKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithGroupId:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
