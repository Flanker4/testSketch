//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CHSheetController.h"

@class NSArray, NSButton, NSCollectionView, NSMutableArray, NSSet;

@interface MSExportSheet : CHSheetController
{
    NSCollectionView *_collectionView;
    NSButton *_includeAllSlicesCheckBox;
    NSButton *_exportButton;
    NSMutableArray *_selectedSlices;
    NSArray *_slices;
    NSSet *_warningSliceIDs;
}

@property(retain, nonatomic) NSSet *warningSliceIDs; // @synthesize warningSliceIDs=_warningSliceIDs;
@property(retain, nonatomic) NSArray *slices; // @synthesize slices=_slices;
@property(retain, nonatomic) NSMutableArray *selectedSlices; // @synthesize selectedSlices=_selectedSlices;
@property(retain, nonatomic) NSButton *exportButton; // @synthesize exportButton=_exportButton;
@property(retain, nonatomic) NSButton *includeAllSlicesCheckBox; // @synthesize includeAllSlicesCheckBox=_includeAllSlicesCheckBox;
@property(retain, nonatomic) NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;

- (void)toggleItemSelectedForExportState:(id)arg1;
- (BOOL)isItemSelectedForExport:(id)arg1;
- (id)document;
- (void)confirm:(id)arg1;
- (id)collectionView:(id)arg1 newItemForRepresentedObject:(id)arg2;
- (void)resizeWindowToFit;
- (void)includeAllCheckboxAction:(id)arg1;
- (void)updateExportSheetItems:(BOOL)arg1;
@property(readonly, nonatomic) long long slicesCheckBoxState;
- (void)validateIncludeAllSlicesCheckBox;
- (void)findConflictingNamesInSlices:(id)arg1;
- (void)awakeFromNib;

@end

