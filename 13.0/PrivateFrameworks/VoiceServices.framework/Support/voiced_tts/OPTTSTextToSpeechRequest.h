//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <voiced_tts/FLTBFBufferAccessor-Protocol.h>
#import <voiced_tts/NSCopying-Protocol.h>

@class NSArray, NSData, NSMutableDictionary, NSString, OPTTSTextToSpeechRequestMeta;

@interface OPTTSTextToSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechRequest *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_91732649)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) OPTTSTextToSpeechRequestMeta *meta_info;
@property(readonly, nonatomic) long long preferred_voice_type;
@property(readonly, nonatomic) NSArray *context_info;
@property(readonly, nonatomic) NSString *voice_name;
@property(readonly, nonatomic) _Bool enable_word_timing_info;
@property(readonly, nonatomic) long long audio_type;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) NSString *gender;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequest *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequest *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

