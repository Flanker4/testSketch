//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class MSLayerGroup, NSData, NSString, NSURL;

@protocol MSImporter <NSObject>
- (BOOL)shouldCollapseSinglePage;
- (BOOL)shouldExpandPages;
- (NSString *)secondPhaseSubtitleForValue:(long long)arg1 maximum:(long long)arg2;
- (NSString *)firstPhaseSubtitle;
- (void)finishImporting;
- (void)importIntoGroup:(MSLayerGroup *)arg1 name:(NSString *)arg2 progress:(void (^)(void))arg3;
- (unsigned long long)prepareToImportFromURL:(NSURL *)arg1;
- (unsigned long long)prepareToImportFromData:(NSData *)arg1;
@end

