//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@interface CKAccountInfo : NSObject <NSSecureCoding>
{
    _Bool _hasValidCredentials;
    long long _accountStatus;
    long long _accountPartition;
    long long _deviceToDeviceEncryptionAvailability;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool hasValidCredentials; // @synthesize hasValidCredentials=_hasValidCredentials;
@property(nonatomic) long long deviceToDeviceEncryptionAvailability; // @synthesize deviceToDeviceEncryptionAvailability=_deviceToDeviceEncryptionAvailability;
@property(nonatomic) long long accountPartition; // @synthesize accountPartition=_accountPartition;
@property(nonatomic) long long accountStatus; // @synthesize accountStatus=_accountStatus;
@property(nonatomic) _Bool supportsDeviceToDeviceEncryption;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)CKPropertiesDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
