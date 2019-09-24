//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreNFC/NFCNDEFTag-Protocol.h>
#import <CoreNFC/NFCTag-Protocol.h>

@class NFCISO7816APDU, NSData;

@protocol NFCMiFareTag <NFCTag, NFCNDEFTag>
@property(readonly, copy, nonatomic) NSData *historicalBytes;
@property(readonly, copy, nonatomic) NSData *identifier;
@property(readonly, nonatomic) unsigned long long mifareFamily;
- (void)sendMiFareISO7816Command:(NFCISO7816APDU *)arg1 completionHandler:(void (^)(NSData *, unsigned char, unsigned char, NSError *))arg2;
- (void)sendMiFareCommand:(NSData *)arg1 completionHandler:(void (^)(NSData *, NSError *))arg2;
@end
