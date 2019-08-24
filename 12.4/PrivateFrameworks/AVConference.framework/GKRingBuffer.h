//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GKRingBuffer : NSObject
{
    void *ringBufRef;
    unsigned int endTime;
    unsigned int capacity;
    unsigned int bytesPerFrame;
}

- (int)fetch:(char *)arg1 numSamples:(unsigned int)arg2 timestamp:(unsigned int)arg3;
- (int)needsNewNumSamples:(unsigned int)arg1 timestamp:(unsigned int)arg2;
- (_Bool)store:(char *)arg1 numSamples:(unsigned int)arg2 timestamp:(unsigned int)arg3;
- (void)increaseCapacity:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCapacity:(unsigned int)arg1 bytesPerFrame:(unsigned int)arg2;

@end
