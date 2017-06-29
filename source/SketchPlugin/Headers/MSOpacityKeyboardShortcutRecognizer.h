//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class NSMutableArray;

@interface MSOpacityKeyboardShortcutRecognizer : NSObject
{
    NSMutableArray *_accumulatedNumberKeyEvents;
    id _target;
    SEL _action;
    double _concatenationDuration;
    double _opacity;
}

@property(readonly, nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double concatenationDuration; // @synthesize concatenationDuration=_concatenationDuration;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;

- (void)discardAccumulatedEvents;
- (double)opacityFromCharacters:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)init;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
