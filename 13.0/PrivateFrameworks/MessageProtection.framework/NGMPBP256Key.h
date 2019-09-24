//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MessageProtection/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NGMPBP256Key : PBCodable <NSCopying>
{
    NSString *_keychainTag;
    int _keystore;
}

@property(nonatomic) int keystore; // @synthesize keystore=_keystore;
@property(retain, nonatomic) NSString *keychainTag; // @synthesize keychainTag=_keychainTag;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsKeystore:(id)arg1;
- (id)keystoreAsString:(int)arg1;

@end
