//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

#import "MSPasteboardReader.h"

@class NSString;

@interface MSPasteboardImagesReader : NSObject <MSPasteboardReader>
{
}

- (id)pasteboardDataFromPasteboard:(id)arg1 options:(unsigned long long)arg2 sender:(id)arg3;
- (id)supportedPasteboardTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

