//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class AFSecurityPolicy, NSData, NSDictionary, NSError, NSInputStream, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSOutputStream, NSRecursiveLock, NSSet, NSString, NSURLConnection, NSURLCredential, NSURLRequest, NSURLResponse;

@interface AFURLConnectionOperation : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSSecureCoding, NSCopying>
{
    BOOL _shouldUseCredentialStorage;
    NSOutputStream *_outputStream;
    NSSet *_runLoopModes;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSError *_error;
    NSData *_responseData;
    NSURLCredential *_credential;
    AFSecurityPolicy *_securityPolicy;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_group> *_completionGroup;
    NSDictionary *_userInfo;
    long long _state;
    NSRecursiveLock *_lock;
    NSURLConnection *_connection;
    NSString *_responseString;
    unsigned long long _responseStringEncoding;
    long long _totalBytesRead;
    id _backgroundTaskCleanup;
    id _uploadProgress;
    id _downloadProgress;
    id _authenticationChallenge;
    id _cacheResponse;
    id _redirectResponse;
}

+ (BOOL)supportsSecureCoding;
+ (id)batchOfRequestOperations:(id)arg1 progressBlock:(id)arg2 completionBlock:(id)arg3;
+ (id)networkRequestThread;
+ (void)networkRequestThreadEntryPoint:(id)arg1;
@property(copy, nonatomic) id redirectResponse; // @synthesize redirectResponse=_redirectResponse;
@property(copy, nonatomic) id cacheResponse; // @synthesize cacheResponse=_cacheResponse;
@property(copy, nonatomic) id authenticationChallenge; // @synthesize authenticationChallenge=_authenticationChallenge;
@property(copy, nonatomic) id downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(copy, nonatomic) id uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(copy, nonatomic) id backgroundTaskCleanup; // @synthesize backgroundTaskCleanup=_backgroundTaskCleanup;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(nonatomic) unsigned long long responseStringEncoding; // @synthesize responseStringEncoding=_responseStringEncoding;
@property(copy, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // @synthesize completionGroup=_completionGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) AFSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property(retain, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
@property(nonatomic) BOOL shouldUseCredentialStorage; // @synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSSet *runLoopModes; // @synthesize runLoopModes=_runLoopModes;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)cancelConnection;
- (void)cancel;
- (void)finish;
- (void)operationDidStart;
- (void)start;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isReady;
- (void)setCompletionBlock:(id)arg1;
- (void)setRedirectResponseBlock:(id)arg1;
- (void)setCacheResponseBlock:(id)arg1;
- (void)setWillSendRequestForAuthenticationChallengeBlock:(id)arg1;
- (void)setDownloadProgressBlock:(id)arg1;
- (void)setUploadProgressBlock:(id)arg1;
- (void)resume;
- (BOOL)isPaused;
- (void)operationDidPause;
- (void)pause;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream;
- (void)dealloc;
- (id)init;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

