//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PRAutocorrectionContext : NSObject
{
    unsigned long long _modificationMask;
}

+ (void)clearCaches;
+ (id)autocorrectionContextOfType:(unsigned long long)arg1;
- (double)validSequenceCorrectionThreshold;
- (void)setValidSequenceCorrectionThreshold:(double)arg1;
- (void)reset;
- (id)correction;
- (id)completions;
- (id)guesses;
- (id)prefixes;
- (id)removedModifications;
- (id)addedModifications;
- (id)currentModifications;
- (unsigned long long)modificationMask;
- (void)setModificationMask:(unsigned long long)arg1;
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void *)arg2 geometryData:(id)arg3;
- (void)addInputCharacter:(unsigned short)arg1 geometryData:(id)arg2;

@end
