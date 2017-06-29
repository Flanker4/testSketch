//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSModelObject.h"

@class MSAssetCollection, MSSharedStyleContainer, MSSharedTextStyleContainer, MSSymbolContainer, NSArray, NSDictionary, NSMutableArray, NSString;

@interface _MSDocumentData : MSModelObject
{
    NSString *_cloudShareID;
    NSString *_cloudShareURL;
    NSString *_cloudUserID;
    unsigned long long _currentPageIndex;
    BOOL _enableLayerInteraction;
    BOOL _enableSliceInteraction;
    NSDictionary *_userInfo;
    MSAssetCollection *_assets;
    MSSharedStyleContainer *_layerStyles;
    MSSymbolContainer *_layerSymbols;
    MSSharedTextStyleContainer *_layerTextStyles;
    NSMutableArray *_pages;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;

- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)replaceAllPagesWithPages:(id)arg1;
- (void)movePageIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllPages;
- (void)removePagesAtIndexes:(id)arg1;
- (void)removePageAtIndex:(unsigned long long)arg1;
- (void)removePage:(id)arg1;
- (void)insertPage:(id)arg1 afterPage:(id)arg2;
- (void)insertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addPages:(id)arg1;
- (void)addPage:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)setPages:(id)arg1;
@property(readonly, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(retain, nonatomic) MSSharedTextStyleContainer *layerTextStyles; // @synthesize layerTextStyles=_layerTextStyles;
- (id)layerTextStylesGeneric;
@property(retain, nonatomic) MSSymbolContainer *layerSymbols; // @synthesize layerSymbols=_layerSymbols;
- (id)layerSymbolsGeneric;
@property(retain, nonatomic) MSSharedStyleContainer *layerStyles; // @synthesize layerStyles=_layerStyles;
- (id)layerStylesGeneric;
@property(retain, nonatomic) MSAssetCollection *assets; // @synthesize assets=_assets;
- (id)assetsGeneric;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) BOOL enableSliceInteraction; // @synthesize enableSliceInteraction=_enableSliceInteraction;
@property(nonatomic) BOOL enableLayerInteraction; // @synthesize enableLayerInteraction=_enableLayerInteraction;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) NSString *cloudUserID; // @synthesize cloudUserID=_cloudUserID;
@property(retain, nonatomic) NSString *cloudShareURL; // @synthesize cloudShareURL=_cloudShareURL;
@property(copy, nonatomic) NSString *cloudShareID; // @synthesize cloudShareID=_cloudShareID;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(id)arg1;
- (void)enumerateProperties:(id)arg1;

@end

