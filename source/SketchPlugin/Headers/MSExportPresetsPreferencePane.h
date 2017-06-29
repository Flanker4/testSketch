//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPreferencePane.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class MSExportFormatViewController, MSExportPreset, NSArray, NSButton, NSStackView, NSString, NSTableView, NSTextField, NSView;

@interface MSExportPresetsPreferencePane : MSPreferencePane <NSTableViewDataSource, NSTableViewDelegate>
{
    NSButton *_addButton;
    NSButton *_addFormatButton;
    NSView *_exportFormatEditorView;
    NSView *_exportFormatFooterView;
    NSStackView *_exportFormatsView;
    MSExportFormatViewController *_exportFormatsViewController;
    NSView *_noPresetsPlaceholderView;
    NSTextField *_presetNameTextField;
    NSButton *_removeButton;
    NSTableView *_tableView;
    NSArray *_exportFormatViewControllers;
    struct CGSize _designedSize;
}

+ (id)localizedNewExportPresetName;
+ (BOOL)exportPresetWithNameExists:(id)arg1;
+ (id)toolbarIcon;
+ (id)title;
+ (id)identifier;
@property(retain, nonatomic) NSArray *exportFormatViewControllers; // @synthesize exportFormatViewControllers=_exportFormatViewControllers;
@property(readonly, nonatomic) struct CGSize designedSize; // @synthesize designedSize=_designedSize;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) __weak NSTextField *presetNameTextField; // @synthesize presetNameTextField=_presetNameTextField;
@property(nonatomic) __weak NSView *noPresetsPlaceholderView; // @synthesize noPresetsPlaceholderView=_noPresetsPlaceholderView;
@property(nonatomic) __weak MSExportFormatViewController *exportFormatsViewController; // @synthesize exportFormatsViewController=_exportFormatsViewController;
@property(nonatomic) __weak NSStackView *exportFormatsView; // @synthesize exportFormatsView=_exportFormatsView;
@property(nonatomic) __weak NSView *exportFormatFooterView; // @synthesize exportFormatFooterView=_exportFormatFooterView;
@property(nonatomic) __weak NSView *exportFormatEditorView; // @synthesize exportFormatEditorView=_exportFormatEditorView;
@property(nonatomic) __weak NSButton *addFormatButton; // @synthesize addFormatButton=_addFormatButton;
@property(nonatomic) __weak NSButton *addButton; // @synthesize addButton=_addButton;

- (void)restoreDefaultExportPresets:(id)arg1;
- (void)removeExportFormat:(id)arg1;
- (void)addExportFormat:(id)arg1;
- (void)commitExportPresetName:(id)arg1;
- (id)uniqueNonEmptyName:(id)arg1 forPreset:(id)arg2;
- (id)presetWithName:(id)arg1;
- (void)pickDefaultExportPreset:(id)arg1;
- (void)removeExportPreset:(id)arg1;
- (void)addExportPreset:(id)arg1;
- (void)refreshExportFormats;
- (void)refreshExportPresets;
- (void)editExportPreset:(id)arg1;
- (BOOL)selectPreset:(id)arg1;
- (BOOL)selectPresetAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) MSExportPreset *selectedPreset;
@property(readonly, copy, nonatomic) NSArray *presets;
- (id)globalAssets;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (struct CGSize)preferredSize;
- (void)viewDidAppear;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

