//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MSInspectorSection.h"

@class NSArray, NSString;

@interface MSLayerSection : NSViewController <MSInspectorSection>
{
    NSArray *_layers;
}

@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;

- (id)views;
- (id)initWithLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

