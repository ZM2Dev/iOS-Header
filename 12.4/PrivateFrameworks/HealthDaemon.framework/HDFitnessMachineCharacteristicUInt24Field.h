//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDFitnessMachineCharacteristicField.h>

@interface HDFitnessMachineCharacteristicUInt24Field : HDFitnessMachineCharacteristicField
{
    unsigned int _value;
}

@property(nonatomic) unsigned int value; // @synthesize value=_value;
- (id)valueAsData;
- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;

@end

