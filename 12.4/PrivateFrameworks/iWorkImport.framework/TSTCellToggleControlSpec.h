//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTCellSpec.h>

__attribute__((visibility("hidden")))
@interface TSTCellToggleControlSpec : TSTCellSpec
{
}

+ (id)instanceWithArchive:(const struct CellSpecArchive *)arg1 unarchiver:(id)arg2;
+ (id)cellSpecFromTSKFormat:(id)arg1;
+ (id)toggleControlSpec;
- (void)saveToArchive:(struct CellSpecArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct CellSpecArchive *)arg1 unarchiver:(id)arg2;
- (_Bool)validateFormatAndValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)asToggleControlSpec;
- (int)interactionType;

@end
