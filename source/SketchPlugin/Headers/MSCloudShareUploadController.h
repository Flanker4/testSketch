//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCloudShareAPI.h"

@class AFAmazonS3Manager, MSDocumentData, NSError, NSString, NSURL;

@interface MSCloudShareUploadController : MSCloudShareAPI
{
    BOOL _includeDocument;
    BOOL _uploadFailed;
    NSString *_password;
    MSDocumentData *_documentData;
    id _progressHandler;
    id _completionHandler;
    NSURL *_localURL;
    AFAmazonS3Manager *_s3Manager;
    NSError *_uploadError;
    NSString *_name;
}

@property(nonatomic) BOOL uploadFailed; // @synthesize uploadFailed=_uploadFailed;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSError *uploadError; // @synthesize uploadError=_uploadError;
@property(retain, nonatomic) AFAmazonS3Manager *s3Manager; // @synthesize s3Manager=_s3Manager;
@property(retain, nonatomic) NSURL *localURL; // @synthesize localURL=_localURL;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) id progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) MSDocumentData *documentData; // @synthesize documentData=_documentData;
@property(nonatomic) BOOL includeDocument; // @synthesize includeDocument=_includeDocument;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;

- (void)cancel;
- (void)queueFileToUpload:(id)arg1 index:(unsigned long long)arg2 stepSize:(double)arg3 progressTracker:(id)arg4;
- (void)uploadExportedFiles:(id)arg1 shareData:(id)arg2;
- (void)reportProgress:(id)arg1 stepSize:(double)arg2;
- (void)createS3ManagerWithCredentials:(id)arg1 bucket:(id)arg2 region:(id)arg3;
- (void)uploadFilesAfterManifestUploadWithResult:(id)arg1;
- (BOOL)shouldAttemptReuploadAfterError:(id)arg1;
- (id)loadManifest;
- (void)uploadManifest;
- (void)uploadDocument;
- (id)initWithDocument:(id)arg1 name:(id)arg2 progressHandler:(id)arg3 completionHandler:(id)arg4;

@end

