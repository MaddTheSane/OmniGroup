// Copyright 2015 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <Foundation/NSObject.h>

NS_ASSUME_NONNULL_BEGIN

@interface OAColorSpaceHelper : NSObject
@property (readwrite, nonatomic, copy, nullable) NSString *sha1;
@property (readwrite, nonatomic, retain, nullable) NSColorSpace *colorSpace;
@end

@interface OAColorSpaceManager : NSObject

@property (readwrite, nonatomic, retain) NSMutableArray<OAColorSpaceHelper*> *colorSpaceList;
// A list of OAColorSpaceHelpers

- (NSArray<NSDictionary<NSString*,id>*> *)propertyListRepresentations;
- (void)loadPropertyListRepresentations:(NSArray<NSDictionary<NSString*,id>*> *)array;

+ (BOOL)isColorSpaceGeneric:(NSColorSpace *)colorSpace;
// generic rgb, generic gray, or generic cmyk

+ (nullable NSString *)nameForColorSpace:(NSColorSpace *)colorSpace;
// returns a shorthand name for Apple default colorspaces, otherwise nil
+ (nullable NSColorSpace *)colorSpaceForName:(NSString *)name;

- (NSString *)nameForColorSpace:(NSColorSpace *)colorSpace;
// returns a shorthand name for Apple default colorspaces
// returns an unadornedLowercaseHexString sha-1 of the iccprofile data for unknown colorspaces and adds them to the list
- (nullable NSColorSpace *)colorSpaceForName:(NSString *)name;
// checks the shorthand names, and the sha-1 strings
// nil if not found
@end

NS_ASSUME_NONNULL_END
