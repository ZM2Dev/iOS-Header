//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLModel.h>

#import <CoreML/MLSpecificationCompiler-Protocol.h>

@interface MLNeuralNetworkCompiler : MLModel <MLSpecificationCompiler>
{
}

+ (id)compiledVersionForSpecification:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)compileSpecification:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 options:(id)arg3 error:(id *)arg4;

@end
