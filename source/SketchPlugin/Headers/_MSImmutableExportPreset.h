//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableModelObject.h"

@class NSArray, NSString;

@interface _MSImmutableExportPreset : MSImmutableModelObject
{
    NSString *_name;
    BOOL _shouldApplyAutomatically;
    NSArray *_exportFormats;
}

+ (Class)mutableClass;
@property(retain, nonatomic) NSArray *exportFormats; // @synthesize exportFormats=_exportFormats;
@property(nonatomic) BOOL shouldApplyAutomatically; // @synthesize shouldApplyAutomatically=_shouldApplyAutomatically;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(id)arg1;
- (void)enumerateProperties:(id)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

