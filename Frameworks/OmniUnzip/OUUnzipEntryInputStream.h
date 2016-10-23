// Copyright 2016 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <Foundation/NSObject.h>

NS_ASSUME_NONNULL_BEGIN

@class OUUnzipEntry;

@protocol OFByteProvider;

typedef NS_OPTIONS(NSUInteger, OUUnzipEntryInputStreamOptions) {
    OUUnzipEntryInputStreamOptionNone     = 0,
    OUUnzipEntryInputStreamOptionRaw      = 1 << 0,
};

#pragma mark -

@interface OUUnzipEntryInputStream : NSInputStream

- (instancetype)initWithUnzipEntry:(OUUnzipEntry *)unzipEntry inZipArchiveAtURL:(NSURL *)archiveURL data:(nullable NSObject <OFByteProvider> *)store options:(OUUnzipEntryInputStreamOptions)options NS_DESIGNATED_INITIALIZER;

@property (nonatomic, copy, readonly) NSURL *zipArchiveURL;
@property (nonatomic, nullable, strong, readonly) NSObject <OFByteProvider> *dataStore;
@property (nonatomic, strong, readonly) OUUnzipEntry *unzipEntry;
@property (nonatomic, readonly) OUUnzipEntryInputStreamOptions options;

@end

#pragma mark 

@interface NSInputStream ()

- (instancetype)initWithUnzipEntry:(OUUnzipEntry *)unzipEntry inZipArchiveAtURL:(NSURL *)archiveURL data:(nullable NSObject <OFByteProvider> *)store options:(OUUnzipEntryInputStreamOptions)options NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
