//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableStyledLayer.h"

@class NSDictionary, NSString;

@interface _MSImmutableSymbolInstance : MSImmutableStyledLayer
{
    double _horizontalSpacing;
    double _masterInfluenceEdgeMaxXPadding;
    double _masterInfluenceEdgeMaxYPadding;
    double _masterInfluenceEdgeMinXPadding;
    double _masterInfluenceEdgeMinYPadding;
    NSDictionary *_overrides;
    NSString *_symbolID;
    double _verticalSpacing;
}

+ (Class)mutableClass;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing=_verticalSpacing;
@property(retain, nonatomic) NSString *symbolID; // @synthesize symbolID=_symbolID;
@property(retain, nonatomic) NSDictionary *overrides; // @synthesize overrides=_overrides;
@property(nonatomic) double masterInfluenceEdgeMinYPadding; // @synthesize masterInfluenceEdgeMinYPadding=_masterInfluenceEdgeMinYPadding;
@property(nonatomic) double masterInfluenceEdgeMinXPadding; // @synthesize masterInfluenceEdgeMinXPadding=_masterInfluenceEdgeMinXPadding;
@property(nonatomic) double masterInfluenceEdgeMaxYPadding; // @synthesize masterInfluenceEdgeMaxYPadding=_masterInfluenceEdgeMaxYPadding;
@property(nonatomic) double masterInfluenceEdgeMaxXPadding; // @synthesize masterInfluenceEdgeMaxXPadding=_masterInfluenceEdgeMaxXPadding;
@property(nonatomic) double horizontalSpacing; // @synthesize horizontalSpacing=_horizontalSpacing;

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

