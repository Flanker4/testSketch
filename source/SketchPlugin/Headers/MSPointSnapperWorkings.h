//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class NSMutableSet, NSSet;

@interface MSPointSnapperWorkings : NSObject
{
    NSMutableSet *_handleIndexPaths;
    unsigned long long _axis;
    double _snapThreshold;
    double _snapLocation;
    double _guideStart;
    double _guideEnd;
    struct CGPoint _pointToSnap;
}

@property(readonly, nonatomic) NSSet *handleIndexPaths; // @synthesize handleIndexPaths=_handleIndexPaths;
@property(readonly, nonatomic) double guideEnd; // @synthesize guideEnd=_guideEnd;
@property(readonly, nonatomic) double guideStart; // @synthesize guideStart=_guideStart;
@property(readonly, nonatomic) double snapLocation; // @synthesize snapLocation=_snapLocation;
@property(nonatomic) double snapThreshold; // @synthesize snapThreshold=_snapThreshold;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property(nonatomic) struct CGPoint pointToSnap; // @synthesize pointToSnap=_pointToSnap;

- (struct CGPoint)snapPoint:(struct CGPoint)arg1 andMakeGuide:(id *)arg2 forLayer:(id)arg3 snappedHandles:(id)arg4;
- (BOOL)trySnapToLocation:(double)arg1 guideStart:(id)arg2 end:(id)arg3 handleIndexPath:(id)arg4;
- (BOOL)trySnapToPoint:(struct CGPoint)arg1 handleIndexPath:(id)arg2;
- (void)extendGuideToStart:(id)arg1 end:(id)arg2;
@property(readonly, nonatomic) BOOL snapped;

@end

