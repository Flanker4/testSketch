//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableModelObject.h"

@class MSImmutableImageCollection, NSArray;

@interface _MSImmutableAssetCollection : MSImmutableModelObject
{
    NSArray *_images;
    NSArray *_colors;
    NSArray *_exportPresets;
    NSArray *_gradients;
    MSImmutableImageCollection *_imageCollection;
}

+ (Class)mutableClass;
@property(retain, nonatomic) MSImmutableImageCollection *imageCollection; // @synthesize imageCollection=_imageCollection;
@property(retain, nonatomic) NSArray *gradients; // @synthesize gradients=_gradients;
@property(retain, nonatomic) NSArray *exportPresets; // @synthesize exportPresets=_exportPresets;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;

- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(id)arg1;
- (void)enumerateProperties:(id)arg1;
- (id)imageCollectionGeneric;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

