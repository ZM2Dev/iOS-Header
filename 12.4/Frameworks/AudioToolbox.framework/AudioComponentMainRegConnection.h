//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioToolbox/AudioComponentRegistrarProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface AudioComponentMainRegConnection : NSObject <AudioComponentRegistrarProtocol>
{
    struct AudioComponentRegistrarImpl *mImpl;
    struct ConnectionInfo mConnInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)getComponentList:(id)arg1 linkedSDKVersion:(int)arg2 includeExtensions:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (id)initWithRegistrar:(struct AudioComponentRegistrarImpl *)arg1 connection:(id)arg2;

@end

