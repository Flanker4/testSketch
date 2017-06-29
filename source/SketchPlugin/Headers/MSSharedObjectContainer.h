//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSSharedObjectContainer.h"

#import "MSSharedObjectContainer.h"

@class NSArray, NSObject<NSCopying,NSCoding>, NSString;

@interface MSSharedObjectContainer : _MSSharedObjectContainer <MSSharedObjectContainer>
{
    id <MSSharedObjectContainerDelegate> _delegate;
}

@property(nonatomic) __weak id <MSSharedObjectContainerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)objectsSortedByName;
- (void)enumeratePotentialInstancesInContainer:(id)arg1 block:(id)arg2;
- (id)sharedObjectsInLayers:(id)arg1;
- (id)sharedObjectsInLayer:(id)arg1;
- (BOOL)resetSharedObjectInstance:(struct MSModelObject *)arg1;
- (void)syncInstance:(struct MSModelObject *)arg1 withTemplateInstance:(struct MSModelObject *)arg2;
- (void)synchroniseInstancesOfSharedObject:(id)arg1 withInstance:(struct MSModelObject *)arg2;
- (void)updateValueOfSharedObject:(id)arg1 byCopyingInstance:(struct MSModelObject *)arg2;
- (BOOL)updateInstancesOfSharedObject:(id)arg1 withValue:(struct MSModelObject *)arg2;
- (BOOL)syncSharedObjectWithInstance:(struct MSModelObject *)arg1;
- (id)layersToIterateOver;
- (void)unregisterInstance:(struct MSModelObject *)arg1;
- (void)registerInstance:(struct MSModelObject *)arg1 withSharedObject:(id)arg2;
- (unsigned long long)numberOfSharedObjects;
- (long long)indexOfSharedObject:(id)arg1;
- (id)sharedObjectAtIndex:(unsigned long long)arg1;
- (id)sharedObjectWithID:(struct NSObject *)arg1;
- (id)sharedObjectForInstance:(struct MSModelObject *)arg1;
- (BOOL)isSharedObjectForInstance:(struct MSModelObject *)arg1;
- (id)instancesOf:(id)arg1 inContainer:(id)arg2;
- (id)mergeSharedObjectWithName:(id)arg1 sharedObjectID:(struct NSObject *)arg2 instance:(struct MSModelObject *)arg3;
- (void)removeSharedObject:(id)arg1;
- (id)addSharedObjectWithName:(id)arg1 firstInstance:(struct MSModelObject *)arg2;
- (Class)sharedObjectClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSObject<NSCopying,NSCoding> *objectID;
@property(readonly, nonatomic) NSArray *objects;
@property(readonly) Class superclass;

@end

