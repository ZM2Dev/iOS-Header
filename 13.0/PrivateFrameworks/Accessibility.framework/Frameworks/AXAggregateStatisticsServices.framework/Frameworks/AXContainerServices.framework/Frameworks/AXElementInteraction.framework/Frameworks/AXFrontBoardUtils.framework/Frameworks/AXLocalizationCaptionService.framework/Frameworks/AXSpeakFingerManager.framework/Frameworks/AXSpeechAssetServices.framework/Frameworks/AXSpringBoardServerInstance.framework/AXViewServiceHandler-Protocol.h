//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXSpringBoardServerInstance/NSObject-Protocol.h>

@class AXVSBaseService, NSDictionary;

@protocol AXViewServiceHandler <NSObject>
- (_Bool)isShowingAXUIViewService:(AXVSBaseService *)arg1;
- (void)hideAXUIViewService:(AXVSBaseService *)arg1;
- (void)showAXUIViewService:(AXVSBaseService *)arg1 withData:(NSDictionary *)arg2;
@end

