//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDReflection : NSObject <TSDMixing, NSCopying, NSMutableCopying>
{
    double mOpacity;
    double mFadeAcceleration;
}

+ (_Bool)canMixWithNilObjects;
+ (id)reflection;
+ (id)instanceWithArchive:(const struct ReflectionArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) double fadeAcceleration; // @synthesize fadeAcceleration=mFadeAcceleration;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=mOpacity;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOpacity:(double)arg1;
- (id)initWithOpacity:(double)arg1 fadeAcceleration:(double)arg2;
- (id)init;
- (void)saveToArchive:(struct ReflectionArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ReflectionArchive *)arg1 unarchiver:(id)arg2;

@end
