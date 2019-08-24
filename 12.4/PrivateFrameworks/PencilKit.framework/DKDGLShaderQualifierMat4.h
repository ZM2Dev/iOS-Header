//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/DKDGLShaderQualifier.h>

@interface DKDGLShaderQualifierMat4 : DKDGLShaderQualifier
{
    struct CATransform3D _transform3D;
    struct CATransform3D _proposedTransform3D;
}

@property(nonatomic) struct CATransform3D proposedTransform3D; // @synthesize proposedTransform3D=_proposedTransform3D;
@property(readonly, nonatomic) struct CATransform3D transform3D; // @synthesize transform3D=_transform3D;
- (id)description;
- (void)setGLUniformWithShader:(id)arg1;
- (id)initWithTransform3D:(struct CATransform3D)arg1;

@end
