//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

@class NSMutableDictionary;

@interface BCKeyEventActionTableView : NSTableView
{
    NSMutableDictionary *_keyEvents;
}

@property(retain, nonatomic) NSMutableDictionary *keyEvents; // @synthesize keyEvents=_keyEvents;

- (void)keyDown:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2 forKeyDownEventWithCharacters:(id)arg3;

@end

