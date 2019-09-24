//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLComputePipelineState-Protocol.h>

@class MTLDebugInstrumentationData, MTLIndirectArgumentBufferEmulationData, NSString;
@protocol MTLDevice;

@interface _MTLComputePipelineState : NSObject <MTLComputePipelineState>
{
    NSString *_label;
    id <MTLDevice> _device;
    MTLIndirectArgumentBufferEmulationData *_iabEmulationData;
    MTLDebugInstrumentationData *_debugInstrumentationData;
    _Bool _supportIndirectCommandBuffers;
    unsigned long long _resourceIndex;
}

@property(nonatomic) unsigned long long resourceIndex; // @synthesize resourceIndex=_resourceIndex;
@property(retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData; // @synthesize debugInstrumentationData=_debugInstrumentationData;
@property(retain, nonatomic) MTLIndirectArgumentBufferEmulationData *IABEmulationData; // @synthesize IABEmulationData=_iabEmulationData;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly) NSString *label; // @synthesize label=_label;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_da2e99ad)arg1;
@property(readonly) _Bool supportIndirectCommandBuffers;
@property(readonly) unsigned long long uniqueIdentifier;
@property(readonly, copy) NSString *description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup; // @dynamic maxTotalThreadsPerThreadgroup;
@property(readonly) unsigned long long staticThreadgroupMemoryLength; // @dynamic staticThreadgroupMemoryLength;
@property(readonly) Class superclass;
@property(readonly) unsigned long long threadExecutionWidth; // @dynamic threadExecutionWidth;

@end
