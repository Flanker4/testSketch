//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class MSAssetCollection, MSColor, MSColorInspectorSectionPattern, MSEventHandlerManager, MSPersistentAssetCollection;

@protocol MSColorInspectorSectionDelegate <NSObject>
- (void)didRemoveAssetOfType:(unsigned long long)arg1;
- (void)didAddAsset:(id <MSAsset>)arg1;
- (void)stack;
- (MSEventHandlerManager *)eventHandler;
- (MSPersistentAssetCollection *)globalAssets;
- (MSAssetCollection *)documentAssets;
- (void)inspectorSectionDidUpdate:(MSColorInspectorSectionPattern *)arg1;
- (void)colorDidChangeTo:(MSColor *)arg1;
@end

