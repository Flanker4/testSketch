//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCloudAPI.h"

@interface MSCloudAuthAPI : MSCloudAPI
{
    BOOL _loggingIn;
}

@property(nonatomic) BOOL loggingIn; // @synthesize loggingIn=_loggingIn;
- (BOOL)shouldSwitchToUserID:(id)arg1 email:(id)arg2;
- (void)processUserData:(id)arg1;
- (void)loadAccountProfileWithCompletionHandler:(id)arg1;
- (void)loginWithAccessToken:(id)arg1 completionHandler:(id)arg2;
- (void)updateUserAccountWithCompletionHandler:(id)arg1;
- (void)processUserAPIRequest:(id)arg1 completionHandler:(id)arg2;
- (id)baseURL;

@end

