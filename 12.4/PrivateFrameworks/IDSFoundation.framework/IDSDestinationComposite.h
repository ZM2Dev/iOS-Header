//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSDestination.h>

@class NSArray;

@interface IDSDestinationComposite : IDSDestination
{
    NSArray *_destinations;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *destinations; // @synthesize destinations=_destinations;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)groupID;
- (id)destinationURIs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinations:(id)arg1;

@end
