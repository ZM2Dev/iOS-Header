//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface AWDMMCSChunkingInfo : PBCodable <NSCopying>
{
    long long _byteCount;
    long long _chunkCount;
    long long _duration;
    long long _startTime;
    NSMutableArray *_chunkingErrors;
    int _errorCode;
    NSString *_errorDomain;
    _Bool _cancelled;
    struct {
        unsigned int byteCount:1;
        unsigned int chunkCount:1;
        unsigned int duration:1;
        unsigned int startTime:1;
        unsigned int errorCode:1;
        unsigned int cancelled:1;
    } _has;
}

+ (Class)chunkingErrorType;
@property(retain, nonatomic) NSMutableArray *chunkingErrors; // @synthesize chunkingErrors=_chunkingErrors;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long byteCount; // @synthesize byteCount=_byteCount;
@property(nonatomic) long long chunkCount; // @synthesize chunkCount=_chunkCount;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)chunkingErrorAtIndex:(unsigned long long)arg1;
- (unsigned long long)chunkingErrorsCount;
- (void)addChunkingError:(id)arg1;
- (void)clearChunkingErrors;
@property(nonatomic) _Bool hasCancelled;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) _Bool hasByteCount;
@property(nonatomic) _Bool hasChunkCount;
- (void)dealloc;

@end
