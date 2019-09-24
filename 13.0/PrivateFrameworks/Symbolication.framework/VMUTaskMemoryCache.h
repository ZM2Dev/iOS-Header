//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VMUTaskMemoryCache : NSObject
{
    struct mapped_memory_t *_memoryRegions;
    unsigned int _task;
    _Bool _taskIs64Bit;
    _Bool _stopped;
}

+ (id)taskMemoryCacheForTask:(unsigned int)arg1;
+ (_Bool)taskIs64Bit:(unsigned int)arg1;
- (_Bool)copyRange:(struct _VMURange)arg1 to:(void *)arg2;
- (int)readPointerAt:(unsigned long long)arg1 value:(unsigned long long *)arg2;
- (int)peekAtAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnsBuf:(void **)arg3;
- (int)mapAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnedAddress:(unsigned long long *)arg3 returnedSize:(unsigned long long *)arg4;
- (int)stopPeeking;
- (int)startPeeking;
- (void)dealloc;
- (void)flushMemoryCache;
- (id)initWithTask:(unsigned int)arg1;

@end
