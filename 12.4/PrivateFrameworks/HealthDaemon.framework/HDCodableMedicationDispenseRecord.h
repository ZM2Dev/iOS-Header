//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableCodedQuantity, HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalRecord, HDCodableMedicationDosageList, NSData, NSString;

@interface HDCodableMedicationDispenseRecord : PBCodable <HDDecoding, NSCopying>
{
    HDCodableCodedQuantity *_daysSupplyQuantity;
    HDCodableMedicationDosageList *_dosages;
    NSData *_earliestDosageDate;
    NSData *_handOverDate;
    HDCodableMedicalRecord *_medicalRecord;
    HDCodableMedicalCodingList *_medicationCodings;
    NSData *_preparationDate;
    HDCodableCodedQuantity *_quantityDispensed;
    HDCodableMedicalCoding *_statusCoding;
}

@property(retain, nonatomic) HDCodableCodedQuantity *daysSupplyQuantity; // @synthesize daysSupplyQuantity=_daysSupplyQuantity;
@property(retain, nonatomic) HDCodableMedicalCoding *statusCoding; // @synthesize statusCoding=_statusCoding;
@property(retain, nonatomic) NSData *earliestDosageDate; // @synthesize earliestDosageDate=_earliestDosageDate;
@property(retain, nonatomic) HDCodableMedicationDosageList *dosages; // @synthesize dosages=_dosages;
@property(retain, nonatomic) NSData *handOverDate; // @synthesize handOverDate=_handOverDate;
@property(retain, nonatomic) NSData *preparationDate; // @synthesize preparationDate=_preparationDate;
@property(retain, nonatomic) HDCodableCodedQuantity *quantityDispensed; // @synthesize quantityDispensed=_quantityDispensed;
@property(retain, nonatomic) HDCodableMedicalCodingList *medicationCodings; // @synthesize medicationCodings=_medicationCodings;
@property(retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasDaysSupplyQuantity;
@property(readonly, nonatomic) _Bool hasStatusCoding;
@property(readonly, nonatomic) _Bool hasEarliestDosageDate;
@property(readonly, nonatomic) _Bool hasDosages;
@property(readonly, nonatomic) _Bool hasHandOverDate;
@property(readonly, nonatomic) _Bool hasPreparationDate;
@property(readonly, nonatomic) _Bool hasQuantityDispensed;
@property(readonly, nonatomic) _Bool hasMedicationCodings;
@property(readonly, nonatomic) _Bool hasMedicalRecord;
- (_Bool)applyToObject:(id)arg1 error:(out id *)arg2;
- (_Bool)applyToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
