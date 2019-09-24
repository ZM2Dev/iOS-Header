//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriInstrumentation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SISchemaViewContainer <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *dialogPhase;
@property(copy, nonatomic) NSString *dialogIdentifier;
@property(copy, nonatomic) NSString *snippetClass;
@property(copy, nonatomic) NSString *viewID;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
