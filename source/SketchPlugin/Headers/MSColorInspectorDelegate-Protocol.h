//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class MSColor, MSColorInspector;

@protocol MSColorInspectorDelegate <NSObject>
- (void)colorInspector:(MSColorInspector *)arg1 didChangeToColor:(MSColor *)arg2;

@optional
- (void)colorInspectorWillClose:(MSColorInspector *)arg1;
- (void)colorInspectorDidChange:(MSColorInspector *)arg1;
- (void)inspectorDidChangeType:(MSColorInspector *)arg1;
@end
