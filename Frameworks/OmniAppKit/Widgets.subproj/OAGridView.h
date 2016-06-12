// Copyright 2000-2015 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <AppKit/NSView.h>

@class NSMutableArray;
@class NSColor;

@interface OAGridView : NSView
{
    CGFloat leftMargin;
    CGFloat rightMargin;
    CGFloat topMargin;
    CGFloat bottomMargin;
    CGFloat interColumnSpace;
    CGFloat interRowSpace;
    NSInteger rowCount;
    NSInteger columnCount;
    NSMutableArray<NSMutableArray<__kindof NSView*>*> *rows;
    NSColor *backgroundColor;
}

// Accessors
@property (nonatomic) NSInteger rowCount;
@property (nonatomic) NSInteger columnCount;
@property (nonatomic) CGFloat interColumnSpace;
@property (nonatomic) CGFloat interRowSpace;
@property (nonatomic) CGFloat leftMargin;
@property (nonatomic) CGFloat rightMargin;
@property (nonatomic) CGFloat topMargin;
@property (nonatomic) CGFloat bottomMargin;

- (NSView *)viewAtRow:(NSInteger)row column:(NSInteger)column;
- (void)setView:(NSView *)aView atRow:(NSInteger)row column:(NSInteger)column;
- (void)setView:(NSView *)aView relativeToView:(NSView *)referenceView atRow:(NSInteger)row column:(NSInteger)column;

- (void)removeAllViews;

@property (nonatomic, strong) NSColor *backgroundColor;

// NSView methods
- (void)resizeSubviewsWithOldSize:(NSSize)oldFrameSize;
- (void)drawRect:(NSRect)rect;

- (void)tile;

@end
