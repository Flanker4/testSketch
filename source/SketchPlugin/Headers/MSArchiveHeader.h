//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

#import "NSCoding.h"

@class NSDictionary;

@interface MSArchiveHeader : NSObject <NSCoding>
{
    long long _version;
    NSDictionary *_metadata;
    id _root;
}

+ (id)metadataForNewHeader;
@property(retain, nonatomic) id root; // @synthesize root=_root;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) long long version; // @synthesize version=_version;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
