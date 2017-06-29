//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class NSMenu;

@interface MSNormalEventContextualMenuBuilder : NSObject
{
    NSMenu *_standardLayerMenu;
    NSMenu *_textLayerMenu;
    NSMenu *_groupLayerMenu;
    NSMenu *_multipleSelectionMenu;
    NSMenu *_noSelectionMenu;
    NSMenu *_imageLayerMenu;
    NSMenu *_symbolInstanceMenu;
    NSMenu *_artboardMenu;
    NSMenu *_sliceMenu;
}

@property(retain, nonatomic) NSMenu *sliceMenu; // @synthesize sliceMenu=_sliceMenu;
@property(retain, nonatomic) NSMenu *artboardMenu; // @synthesize artboardMenu=_artboardMenu;
@property(retain, nonatomic) NSMenu *symbolInstanceMenu; // @synthesize symbolInstanceMenu=_symbolInstanceMenu;
@property(retain, nonatomic) NSMenu *imageLayerMenu; // @synthesize imageLayerMenu=_imageLayerMenu;
@property(retain, nonatomic) NSMenu *noSelectionMenu; // @synthesize noSelectionMenu=_noSelectionMenu;
@property(retain, nonatomic) NSMenu *multipleSelectionMenu; // @synthesize multipleSelectionMenu=_multipleSelectionMenu;
@property(retain, nonatomic) NSMenu *groupLayerMenu; // @synthesize groupLayerMenu=_groupLayerMenu;
@property(retain, nonatomic) NSMenu *textLayerMenu; // @synthesize textLayerMenu=_textLayerMenu;
@property(retain, nonatomic) NSMenu *standardLayerMenu; // @synthesize standardLayerMenu=_standardLayerMenu;

- (id)symbolInstanceOnlyItems;
- (id)symbolItems;
- (id)groupOnlyItems;
- (id)imageOnlyItems;
- (id)textOnlyItems;
- (id)noSelectionItems;
- (id)distributeItems;
- (id)alignItems;
- (id)lockHideItems;
- (id)maskItems;
- (id)transformItems;
- (id)groupRenameItems;
- (id)pasteCopyStyleItems;
- (id)moveForwardBackwardItems;
- (id)pickLayerItems;
- (id)cutCopyPasteItems;
- (id)replaceWithSymbolItems;
- (id)menuWithItemGroups:(id)arg1;
- (id)standardMenuItemGroups;
- (void)constructMenus;
- (id)menuForLayers:(id)arg1;

@end

