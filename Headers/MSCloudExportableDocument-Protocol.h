//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSDocumentData, NSString, SCKShare;

@protocol MSCloudExportableDocument <NSObject>
@property(readonly, nonatomic) NSString *cloudName;
@property(retain, nonatomic) SCKShare *cloudShare;
@property(readonly, nonatomic) MSDocumentData *documentData;
@end
