//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, NSString;
@protocol NSCoding;

@protocol _DKSimpleKeyValueStore
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(NSObject<NSCoding> *)arg1 forKey:(NSString *)arg2;
- (NSObject *)objectForKey:(NSString *)arg1;
@end
