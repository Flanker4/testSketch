//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSTextField;

@interface BCToolbarPopoverNavigationItemView : NSView
{
    NSTextField *_titleLabel;
}

@property(readonly, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubtreeIfNeeded;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

