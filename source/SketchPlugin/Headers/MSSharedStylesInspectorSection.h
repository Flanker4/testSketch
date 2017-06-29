//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSMenuDelegate.h"

@class MSLayerArray, MSSharedObject, NSButton, NSImage, NSPopUpButton, NSString, NSTextField;

@interface MSSharedStylesInspectorSection : NSViewController <NSMenuDelegate>
{
    MSLayerArray *_layers;
    NSPopUpButton *_sharedObjectsPopUpButton;
    NSTextField *_editNameField;
    NSButton *_syncOrResetButton;
    NSImage *_initialImage;
    MSSharedObject *_renamingObject;
    id _renameBlock;
}

@property(copy, nonatomic) id renameBlock; // @synthesize renameBlock=_renameBlock;
@property(retain, nonatomic) MSSharedObject *renamingObject; // @synthesize renamingObject=_renamingObject;
@property(retain, nonatomic) NSImage *initialImage; // @synthesize initialImage=_initialImage;
@property(retain, nonatomic) NSButton *syncOrResetButton; // @synthesize syncOrResetButton=_syncOrResetButton;
@property(retain, nonatomic) NSTextField *editNameField; // @synthesize editNameField=_editNameField;
@property(retain, nonatomic) NSPopUpButton *sharedObjectsPopUpButton; // @synthesize sharedObjectsPopUpButton=_sharedObjectsPopUpButton;
@property(copy, nonatomic) MSLayerArray *layers; // @synthesize layers=_layers;

- (id)document;
- (struct MSModelObject *)firstSharedObject;
- (id)sharedObjectContainer;
- (BOOL)hasTextLayers;
- (BOOL)hasOnlyTextLayers;
- (unsigned long long)sharedObjectType;
- (void)generatePreviewForMenuItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)syncOrResetSharedStyleAction:(id)arg1;
- (void)isolateSelectedObject:(id)arg1;
- (void)applySharedObjectToSelection:(id)arg1;
- (void)renameSharedObjectAction:(id)arg1;
- (void)renameSharedObject:(id)arg1;
- (void)layerWithSharedStyleDidChange;
- (void)beginRenameSharedObject:(id)arg1 completionBlock:(id)arg2;
- (void)showManageSymbolsSheet:(id)arg1;
- (id)currentSharedObject;
- (void)addSharedObjectsToMenu:(id)arg1;
- (void)createSharedStyle:(id)arg1;
- (id)sharedObjectDisplayName;
- (void)reloadMenu;
- (unsigned long long)selectedMenuIndex;
- (void)updateMenuSelectionToSelectedIndex;
- (BOOL)hasLayersWithMissingFonts;
- (BOOL)hasLayersOutOfSyncWithSharedObject;
- (void)validateSyncButtons;
- (void)prepareForDisplay;
- (void)reloadData;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

