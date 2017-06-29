//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCollectionViewItem.h"

@class MSExportSheet, MSSliceDragView, NSButton, NSImageView, NSTextField;

@interface MSExportSheetItem : NSCollectionViewItem
{
    BOOL _showWarningLabel;
    MSSliceDragView *_previewView;
    NSTextField *_titleField;
    NSTextField *_subTitleField;
    NSButton *_checkBox;
    NSImageView *_warningView;
    MSExportSheet *_exportSheet;
}

@property(nonatomic) BOOL showWarningLabel; // @synthesize showWarningLabel=_showWarningLabel;
@property(nonatomic) __weak MSExportSheet *exportSheet; // @synthesize exportSheet=_exportSheet;
@property(retain, nonatomic) NSImageView *warningView; // @synthesize warningView=_warningView;
@property(retain, nonatomic) NSButton *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) NSTextField *subTitleField; // @synthesize subTitleField=_subTitleField;
@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain, nonatomic) MSSliceDragView *previewView; // @synthesize previewView=_previewView;

@property(nonatomic) BOOL isExportable;
- (id)subTitle;
- (void)loadUI;
- (void)awakeFromNib;
- (id)init;

@end
