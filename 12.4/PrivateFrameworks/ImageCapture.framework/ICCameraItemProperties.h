//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICCameraDevice, ICCameraFolder, NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ICCameraItemProperties : NSObject
{
    ICCameraDevice *_device;
    ICCameraFolder *_parentFolder;
    unsigned long long _objectID;
    unsigned long long _parentID;
    unsigned long long _ownerID;
    unsigned long long _twinID;
    NSString *_name;
    NSString *_UTI;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    _Bool _locked;
    NSMutableDictionary *_userData;
    unsigned int _ptpObjectHandle;
    id _userObject;
    CDUnknownBlockType _completionBlock;
}

@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) id userObject; // @synthesize userObject=_userObject;
@property unsigned int ptpObjectHandle; // @synthesize ptpObjectHandle=_ptpObjectHandle;
@property(retain) NSMutableDictionary *userData; // @synthesize userData=_userData;
@property _Bool locked; // @synthesize locked=_locked;
@property(retain) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) NSString *UTI; // @synthesize UTI=_UTI;
@property(retain) NSString *name; // @synthesize name=_name;
@property unsigned long long twinID; // @synthesize twinID=_twinID;
@property unsigned long long ownerID; // @synthesize ownerID=_ownerID;
@property unsigned long long parentID; // @synthesize parentID=_parentID;
@property unsigned long long objectID; // @synthesize objectID=_objectID;
@property ICCameraFolder *parentFolder; // @synthesize parentFolder=_parentFolder;
@property ICCameraDevice *device; // @synthesize device=_device;
- (void)dealloc;

@end
