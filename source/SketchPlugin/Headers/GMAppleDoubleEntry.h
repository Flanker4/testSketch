//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class NSData;

@interface GMAppleDoubleEntry : NSObject
{
    int entryID_;
    NSData *data_;
}

+ (id)entryWithID:(int)arg1 data:(id)arg2;

- (id)data;
- (int)entryID;
- (id)initWithEntryID:(int)arg1 data:(id)arg2;

@end

