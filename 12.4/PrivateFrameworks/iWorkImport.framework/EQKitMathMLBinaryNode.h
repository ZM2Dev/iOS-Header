//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitMathMLNode.h>

#import <iWorkImport/EQKitMathMLNode-Protocol.h>

__attribute__((visibility("hidden")))
@interface EQKitMathMLBinaryNode : EQKitMathMLNode <EQKitMathMLNode>
{
    EQKitMathMLNode *mFirst;
    EQKitMathMLNode *mSecond;
}

- (void)dealloc;
- (_Bool)isBaseFontNameUsed;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (id)init;

@end
