//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKRecordObject-Protocol.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKBillPaymentSelectedSuggestedAmountData : NSObject <NSSecureCoding, PKRecordObject>
{
    NSString *_statementIdentifier;
    NSDate *_transactionDate;
    unsigned long long _suggestedAmountCategory;
    NSDecimalNumber *_transactionAmount;
}

+ (_Bool)supportsSecureCoding;
+ (id)recordNamePrefix;
+ (id)recordType;
@property(copy, nonatomic) NSDecimalNumber *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(nonatomic) unsigned long long suggestedAmountCategory; // @synthesize suggestedAmountCategory=_suggestedAmountCategory;
@property(copy, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(copy, nonatomic) NSString *statementIdentifier; // @synthesize statementIdentifier=_statementIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)initWithStatementIdentifier:(id)arg1 transactionDate:(id)arg2 transactionAmount:(id)arg3 suggestedAmountCategory:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
