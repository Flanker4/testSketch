//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class NSDictionary, NSString;

@protocol SMKMirrorDataSource <NSObject>
@property(readonly) BOOL shouldScrollToSelectedArtboard;
@property(readonly) NSDictionary *manifestContent;
@property(readonly) NSString *currentArtboardIdentifier;
- (void)renderImageForArtboardIdentifier:(NSString *)arg1 inRect:(struct CGRect)arg2 scale:(double)arg3 context:(id)arg4 handler:(void (^)(NSData *))arg5;
@end
