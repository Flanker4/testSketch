//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class MSSubtreeRoot;

@interface MSDiff : NSObject
{
    MSSubtreeRoot *_firstObjectRoot;
    MSSubtreeRoot *_secondObjectRoot;
}

@property(retain, nonatomic) MSSubtreeRoot *secondObjectRoot; // @synthesize secondObjectRoot=_secondObjectRoot;
@property(retain, nonatomic) MSSubtreeRoot *firstObjectRoot; // @synthesize firstObjectRoot=_firstObjectRoot;

- (id)description;
- (struct CGRect)overlayDirtyDiffRect;
- (struct CGRect)contentDirtyDiffRect;
- (id)init;
- (id)initWithFirstObjectRoot:(id)arg1 secondObjectRoot:(id)arg2;

@end
