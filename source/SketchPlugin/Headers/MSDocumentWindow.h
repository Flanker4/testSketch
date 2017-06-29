//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class NSButton, NSEvent;

@interface MSDocumentWindow : NSWindow
{
    NSButton *_titleBarBadge;
    NSEvent *_lastForwardedKeyEvent;
}

@property(nonatomic) __weak NSEvent *lastForwardedKeyEvent; // @synthesize lastForwardedKeyEvent=_lastForwardedKeyEvent;
@property(retain, nonatomic) NSButton *titleBarBadge; // @synthesize titleBarBadge=_titleBarBadge;

- (id)touchBar;
- (BOOL)closePopovers;
- (BOOL)shouldDismissPopover:(id)arg1 event:(id)arg2;
- (void)mouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)sendEvent:(id)arg1;

@end

