//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import AppKit;

@class NSDate, NSString, NSURL;

@interface MSCloudShare : NSObject
{
    NSString *_identifier;
    NSDate *_createdAt;
    NSString *_name;
    NSURL *_publicURL;
    NSDate *_updatedAt;
}

@property(retain, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(readonly, nonatomic) NSURL *publicURL; // @synthesize publicURL=_publicURL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)applyDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 publicURL:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

