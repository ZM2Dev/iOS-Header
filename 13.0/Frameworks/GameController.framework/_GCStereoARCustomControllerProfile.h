//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCStereoAR.h>

#import <GameController/_GCACHomeButtonDelegate-Protocol.h>

@class NSString, _GCACHomeButton;

@interface _GCStereoARCustomControllerProfile : GCStereoAR <_GCACHomeButtonDelegate>
{
    _GCACHomeButton *_acHome;
}

- (void).cxx_destruct;
- (void)setAttitudeWithControllerUpdate:(struct)arg1;
- (void)setAttitude:(struct)arg1;
- (void)setControllerAttitude:(struct)arg1;
- (void)setForwardQuaternion:(struct)arg1;
- (id)menuButton;
- (void)toggleSuspendResume;
- (void)setPlayerIndex:(long long)arg1;
- (id)name;
- (id)initWithController:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
