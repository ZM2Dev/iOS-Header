//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/MSPIdentifiableFavorite-Protocol.h>
#import <coreroutine/MSPImmutableObject-Protocol.h>

@protocol MSPFavorite <MSPImmutableObject, MSPIdentifiableFavorite>
- (void)ifPlace:(void (^)(id <MSPFavoritePlace>))arg1 ifRoute:(void (^)(id <MSPFavoriteRoute>))arg2 ifRegion:(void (^)(id <MSPFavoriteRegion>))arg3 ifTransitLine:(void (^)(id <MSPFavoriteTransitLine>))arg4;
@end
