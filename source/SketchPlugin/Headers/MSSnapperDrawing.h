//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class MSLayerGroup, MSSnapperData;

@interface MSSnapperDrawing : NSObject
{
    MSSnapperData *_snapperData;
    double _zoomValue;
    MSLayerGroup *_group;
}

+ (void)drawSnapsForData:(id)arg1 zoomValue:(double)arg2 group:(id)arg3;
@property(retain, nonatomic) MSLayerGroup *group; // @synthesize group=_group;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(retain, nonatomic) MSSnapperData *snapperData; // @synthesize snapperData=_snapperData;

- (void)drawSnapLines;
- (void)drawSnaps;

@end

