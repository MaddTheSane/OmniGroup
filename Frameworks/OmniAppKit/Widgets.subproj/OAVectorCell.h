// Copyright 2003-2005 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <AppKit/NSActionCell.h>

@class NSImageCell;

@interface OAVectorCell : NSActionCell
{
    NSImageCell *_imageCell; // used for drawing gray bezel
    BOOL         _isMultiple;
}

@property BOOL isMultiple;

@end
