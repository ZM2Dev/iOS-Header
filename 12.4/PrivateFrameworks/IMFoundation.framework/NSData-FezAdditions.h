//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (FezAdditions)
+ (id)__imDataWithRandomBytes:(unsigned long long)arg1;
+ (id)__imDataWithHexString:(id)arg1;
- (id)_FTOptionallyDecompressData;
- (id)_FTDecompressData;
- (id)__imHexString;
- (id)__imHexStringOfBytes:(char *)arg1 withLength:(unsigned long long)arg2;
@end
