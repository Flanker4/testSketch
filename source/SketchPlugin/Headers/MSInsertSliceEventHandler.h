//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSInsertLayerEventHandler.h"

@class MSLayer, NSArray;

@interface MSInsertSliceEventHandler : MSInsertLayerEventHandler
{
    NSArray *_allSlices;
    MSLayer *_hoveringLayer;
}

@property(retain, nonatomic) MSLayer *hoveringLayer; // @synthesize hoveringLayer=_hoveringLayer;
@property(retain, nonatomic) NSArray *allSlices; // @synthesize allSlices=_allSlices;

- (id)toolbarIdentifier;
- (void)drawInRect:(struct CGRect)arg1 cache:(id)arg2;
- (struct CGPoint)alignMouseToGrid:(struct CGPoint)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)layerAtPoint:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)handlerGotFocus;

@end

