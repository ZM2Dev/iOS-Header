//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface HFCharacteristicGroup : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSSet *_characteristicTypes;
}

+ (id)characteristicGroupForIdentifier:(id)arg1;
+ (id)characteristicGroupForCharacteristicType:(id)arg1;
+ (id)groupedTitleForCharacteristicType:(id)arg1;
+ (id)allCharacteristicGroups;
+ (id)_targetCurrentStateCharacteristicGroups;
+ (id)_currentTargetStateCharacteristicTypeMap;
+ (id)_targetCurrentStateCharacteristicTypeMap;
@property(readonly, copy, nonatomic) NSSet *characteristicTypes; // @synthesize characteristicTypes=_characteristicTypes;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long groupSortPriority;
- (id)init;
- (id)initWithID:(id)arg1 title:(id)arg2 characteristicTypes:(id)arg3;

@end
