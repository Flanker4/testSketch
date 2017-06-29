//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSLayer.h"

@class MSShapePath;

@interface _MSShapePathLayer : MSLayer
{
    long long _booleanOperation;
    BOOL _edited;
    MSShapePath *_path;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;

- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(retain, nonatomic) MSShapePath *path; // @synthesize path=_path;
- (id)pathGeneric;
@property(nonatomic) BOOL edited; // @synthesize edited=_edited;
@property(nonatomic) long long booleanOperation; // @synthesize booleanOperation=_booleanOperation;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(id)arg1;
- (void)enumerateProperties:(id)arg1;

@end
