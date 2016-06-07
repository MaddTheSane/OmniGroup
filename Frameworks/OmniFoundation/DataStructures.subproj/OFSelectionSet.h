// Copyright 2003-2015 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <Foundation/NSObject.h>

#import <OmniFoundation/OFUtilities.h> // OFPredicateBlock

@class NSArray<ObjectType>, NSPredicate;

NS_ASSUME_NONNULL_BEGIN

@interface OFSelectionSet<__covariant ObjectType> : NSObject

- (void)addObject:(ObjectType)object;
- (void)addObjectsFromArray:(NSArray<ObjectType> *)objects;
- (void)removeObject:(ObjectType)object;
- (void)removeObjectsInArray:(NSArray<ObjectType> *)toRemove;
- (void)removeAllObjects;

- (BOOL)containsObject:(ObjectType)object;
- (NSUInteger)count;

- (NSArray<ObjectType> *)allObjects;

- (NSArray<ObjectType> *)copyObjectsSatisfyingPredicateBlock:(OFPredicateBlock)predicate;
- (NSArray<ObjectType> *)copyObjectsSatisfyingPredicate:(NSPredicate *)predicate;
- (void)removeObjectsSatisfyingPredicate:(NSPredicate *)predicate;

- (NSArray<ObjectType> *)objectsSortedByInsertionOrder:(NSArray<ObjectType> *)someObjects;
- (NSUInteger)insertionOrderForObject:(ObjectType)object; // NSNotFound if not present

@end

NS_ASSUME_NONNULL_END
