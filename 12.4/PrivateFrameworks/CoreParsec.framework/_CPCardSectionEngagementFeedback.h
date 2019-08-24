//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPCardSectionEngagementFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSDictionary, NSString, _CPCardSectionForFeedback, _CPPunchoutForFeedback;

@interface _CPCardSectionEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPCardSectionEngagementFeedback, NSSecureCoding>
{
    _Bool _destinationWasPARPunchout;
    int _triggerEvent;
    int _actionCardType;
    int _actionTarget;
    unsigned long long _timestamp;
    _CPPunchoutForFeedback *_destination;
    _CPCardSectionForFeedback *_cardSection;
    NSString *_parPunchoutActionTarget;
    NSString *_cardSectionId;
    NSString *_resultId;
}

@property(nonatomic) int actionTarget; // @synthesize actionTarget=_actionTarget;
@property(copy, nonatomic) NSString *resultId; // @synthesize resultId=_resultId;
@property(copy, nonatomic) NSString *cardSectionId; // @synthesize cardSectionId=_cardSectionId;
@property(copy, nonatomic) NSString *parPunchoutActionTarget; // @synthesize parPunchoutActionTarget=_parPunchoutActionTarget;
@property(nonatomic) _Bool destinationWasPARPunchout; // @synthesize destinationWasPARPunchout=_destinationWasPARPunchout;
@property(retain, nonatomic) _CPCardSectionForFeedback *cardSection; // @synthesize cardSection=_cardSection;
@property(nonatomic) int actionCardType; // @synthesize actionCardType=_actionCardType;
@property(nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(retain, nonatomic) _CPPunchoutForFeedback *destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)init;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) _Bool requiresQueryId;
@property(readonly, nonatomic) id feedbackJSON;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
