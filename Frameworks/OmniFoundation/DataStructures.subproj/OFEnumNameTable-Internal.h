// Copyright 2002-2016 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OmniFoundation/OFEnumNameTable.h>

NS_ASSUME_NONNULL_BEGIN

@interface OFEnumNameTable ()
{
    NSInteger _defaultEnumValue;
    CFMutableArrayRef _enumOrder;
    CFMutableDictionaryRef _enumToName;
    CFMutableDictionaryRef _enumToDisplayName;
    CFMutableDictionaryRef _nameToEnum;
}
@end

NS_ASSUME_NONNULL_END
