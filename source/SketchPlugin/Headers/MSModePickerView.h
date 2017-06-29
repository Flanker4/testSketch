//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton, NSTextField;

@interface MSModePickerView : NSView
{
    long long _pickerMode;
    id <MSModeModePickerDelegate> _delegate;
    NSButton *_button1;
    NSButton *_button2;
    NSButton *_button3;
    NSButton *_button4;
    NSButton *_button5;
    NSButton *_button6;
    NSTextField *_labelField;
}

@property(nonatomic) __weak NSTextField *labelField; // @synthesize labelField=_labelField;
@property(nonatomic) __weak NSButton *button6; // @synthesize button6=_button6;
@property(nonatomic) __weak NSButton *button5; // @synthesize button5=_button5;
@property(nonatomic) __weak NSButton *button4; // @synthesize button4=_button4;
@property(nonatomic) __weak NSButton *button3; // @synthesize button3=_button3;
@property(nonatomic) __weak NSButton *button2; // @synthesize button2=_button2;
@property(nonatomic) __weak NSButton *button1; // @synthesize button1=_button1;
@property(nonatomic) __weak id <MSModeModePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long pickerMode; // @synthesize pickerMode=_pickerMode;

- (id)buttons;
- (void)deselectAllButtons;
- (id)cellForMode:(long long)arg1;
- (id)buttonForMode:(long long)arg1;
- (id)labelForMode:(long long)arg1;
- (long long)pickerModeForEvent:(id)arg1;
- (long long)highlightCount;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)addTrackingAreaForButton:(id)arg1;
- (void)buttonAction:(id)arg1;
- (void)awakeFromNib;

@end
