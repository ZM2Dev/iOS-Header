//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/SGObject.h>

@class NSString, SGExtractionInfo;

@interface SGLabeledObject : SGObject
{
    NSString *_label;
    SGExtractionInfo *_extractionInfo;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) SGExtractionInfo *extractionInfo; // @synthesize extractionInfo=_extractionInfo;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long extractionType;
- (_Bool)isEqualToLabeledObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)localizedLabel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 extractionType:(unsigned long long)arg2 recordId:(id)arg3 origin:(id)arg4;
- (id)initWithLabel:(id)arg1 extractionInfo:(id)arg2 recordId:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
