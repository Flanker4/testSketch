//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class MSVersionedArchive, NSURL;

@interface MSAssetMigrationSources : NSObject
{
    MSVersionedArchive *_colorArchive;
    MSVersionedArchive *_gradientArchive;
    NSURL *_imageURL;
}

@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) MSVersionedArchive *gradientArchive; // @synthesize gradientArchive=_gradientArchive;
@property(retain, nonatomic) MSVersionedArchive *colorArchive; // @synthesize colorArchive=_colorArchive;


@end

