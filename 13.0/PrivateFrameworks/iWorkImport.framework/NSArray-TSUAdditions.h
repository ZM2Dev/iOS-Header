//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (TSUAdditions)
+ (id)tsu_arrayWithNonNilObject:(id)arg1;
+ (id)tsu_arrayWithUIntegers:(const unsigned long long *)arg1 count:(unsigned long long)arg2;
+ (id)tsu_arrayByUnioningArray:(id)arg1 withArray:(id)arg2;
+ (id)tsu_arrayWithInts:(const int *)arg1 count:(unsigned long long)arg2;
+ (id)tsu_arrayWithCGFloats:(const double *)arg1 count:(unsigned long long)arg2;
- (id)tsu_localizedList;
- (id)tsu_anyObject;
- (id)tsu_onlyObject;
- (id)tsu_uniqueObjects;
- (id)tsu_arrayByFlattening;
- (id)tsu_arrayByMappingObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_arrayByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (id)tsu_arrayOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)tsu_isHomogeneousForClass:(Class)arg1;
- (_Bool)tsu_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)tsu_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (void)tsu_enumerateSnapshotObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_arrayByRemovingObjectsAtIndexes:(id)arg1;
- (id)tsu_arrayByRemovingFirstObject;
- (id)tsu_arrayByReversingOrder;
- (id)tsu_arrayByAddingNonContainedObjectsFromArray:(id)arg1;
- (id)tsu_arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)tsu_intersectionWithArray:(id)arg1;
- (id)tsu_arrayWithObjectsInSet:(id)arg1;
- (id)tsu_indexesOfObjects:(id)arg1;
- (unsigned long long)tsu_indexOfSmallestObject;
- (id)tsu_objectPriorToObject:(id)arg1;
- (id)tsu_rangeCheckedObjectAtIndex:(unsigned long long)arg1;
- (id)tsu_initWithUIntegers:(const unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)tsu_initWithInts:(const int *)arg1 count:(unsigned long long)arg2;
- (id)tsu_initWithCGFloats:(const double *)arg1 count:(unsigned long long)arg2;
- (id)tsp_initWithNSRangeArray:(const RepeatedPtrField_6e0d89e6 *)arg1;
- (void)tsp_saveToNSRangeArray:(RepeatedPtrField_6e0d89e6 *)arg1;
- (id)tsp_initWithProtobufUUIDArray:(const RepeatedPtrField_c4607516 *)arg1;
- (void)tsp_saveToProtobufUUIDArray:(RepeatedPtrField_c4607516 *)arg1;
- (id)tsp_initWithUInt32Array:(const RepeatedField_92283dc2 *)arg1;
- (void)tsp_saveToUInt32Array:(RepeatedField_92283dc2 *)arg1;
- (id)tsp_initWithColorArray:(const RepeatedPtrField_c17961e4 *)arg1;
- (void)tsp_saveToColorArray:(RepeatedPtrField_c17961e4 *)arg1;
- (id)tsp_initWithProtobufStringArray:(const RepeatedPtrField_fe7cf120 *)arg1;
- (void)tsp_saveToProtobufStringArray:(RepeatedPtrField_fe7cf120 *)arg1;
- (id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 objectMap:(id *)arg3 error:(id *)arg4;
- (void)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)tsch_initTSCHChartGridValuesArrayWithProtobufGridRowArray:(const RepeatedPtrField_36342b27 *)arg1;
- (void)tsch_saveTSCHChartGridValuesArrayToProtobufGridRowArray:(RepeatedPtrField_36342b27 *)arg1;
- (id)tsch_initTSCHChartGridValuesWithProtobufGridRow:(const struct GridRow *)arg1;
- (void)tsch_saveTSCHChartGridValuesToProtobufGridRow:(struct GridRow *)arg1;
- (id)tsch_initWithSwapTuplesArray:(const RepeatedPtrField_e6d64692 *)arg1 unarchiver:(id)arg2;
- (void)tsch_saveToSwapTuplesArray:(RepeatedPtrField_e6d64692 *)arg1 archiver:(id)arg2;
- (id)tsch_initWithSwapTuples:(const struct StyleSwapUndoTuplesArchive *)arg1 unarchiver:(id)arg2;
- (void)tsch_saveToSwapTuples:(struct StyleSwapUndoTuplesArchive *)arg1 archiver:(id)arg2;
- (id)tsch_initWithSwapTupleArray:(const RepeatedPtrField_6c786866 *)arg1 unarchiver:(id)arg2;
- (void)tsch_saveToSwapTupleArray:(RepeatedPtrField_6c786866 *)arg1 archiver:(id)arg2;
- (id)tsd_initWithGeometryArray:(const RepeatedPtrField_27865cdd *)arg1;
- (void)tsd_saveToGeometryArray:(RepeatedPtrField_27865cdd *)arg1 archiver:(id)arg2;
- (void)tsd_saveToExteriorTextWrapArray:(RepeatedPtrField_c7c49ab2 *)arg1 archiver:(id)arg2;
- (id)tsd_initWithExteriorTextWrapArray:(const RepeatedPtrField_c7c49ab2 *)arg1;
- (int)tss_propertyAtIndex:(unsigned int)arg1;
- (_Bool)kn_isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
@end
