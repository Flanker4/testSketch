//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSDragRectEventHandler.h"

@class MSShapePathLayer, NSArray, NSCursor, NSMutableArray;

@interface MSInsertShapeEventHandler : MSDragRectEventHandler
{
    NSMutableArray *_insertedShapes;
    NSCursor *_cursor;
    MSShapePathLayer *_prototypeLayer;
    NSArray *_snapLines;
    NSArray *_snapRects;
    struct CGRect _initialPrototypeRect;
}

@property(retain, nonatomic) NSArray *snapRects; // @synthesize snapRects=_snapRects;
@property(nonatomic) struct CGRect initialPrototypeRect; // @synthesize initialPrototypeRect=_initialPrototypeRect;
@property(retain, nonatomic) NSArray *snapLines; // @synthesize snapLines=_snapLines;
@property(retain, nonatomic) MSShapePathLayer *prototypeLayer; // @synthesize prototypeLayer=_prototypeLayer;

- (BOOL)allowsSwitchToInsertAction;
- (void)flagsChanged:(id)arg1;
- (void)drawRectPreview;
- (void)drawInRect:(struct CGRect)arg1 cache:(id)arg2;
- (void)resizeLayer:(id)arg1 toRect:(struct CGRect)arg2;
- (id)insertShapeAsNewLayer:(struct CGRect)arg1;
- (id)insertShapeAsSubPathOfShape:(id)arg1 inRect:(struct CGRect)arg2;
- (id)parentShapeForInsertingSubPath;
- (id)performActionWithRect:(struct CGRect)arg1;
- (id)imageName;
- (void)handlerWillLoseFocus;
- (void)addSnapRectsForImmutableGroup:(id)arg1 withAncestors:(id)arg2 toArray:(id)arg3;
- (void)cacheSnapPointsInBackground;
- (struct CGPoint)snapMouseToEdges:(struct CGPoint)arg1 guides:(id *)arg2;
- (struct CGPoint)snapMouseAndShowSnapLines:(struct CGPoint)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)applicableActionItemIdentifier;
- (id)defaultCursor;
@property(retain, nonatomic) NSCursor *cursor; // @synthesize cursor=_cursor;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;

@end

