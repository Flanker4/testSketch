//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class MSTiledLayer;

@protocol MSTiledLayerDelegate <NSObject>
- (void)tiledLayerDidRefreshTileContent:(MSTiledLayer *)arg1;
- (void)tiledLayer:(MSTiledLayer *)arg1 renderOverlayInRect:(struct CGRect)arg2;
- (void)tiledLayer:(MSTiledLayer *)arg1 requiresRedrawInRect:(struct CGRect)arg2;
- (void)tiledLayer:(MSTiledLayer *)arg1 didChangeToState:(unsigned long long)arg2;
@end

