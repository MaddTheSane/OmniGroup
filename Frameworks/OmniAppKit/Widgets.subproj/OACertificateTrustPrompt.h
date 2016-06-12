// Copyright 2016 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OmniFoundation/OFAsynchronousOperation.h>
#import <OmniFoundation/OFCredentials.h>

@class NSWindow;

NS_ASSUME_NONNULL_BEGIN

@interface OACertificateTrustPrompt : OFAsynchronousOperation <OFCertificateTrustDisposition>

- (instancetype)initForChallenge:(NSURLAuthenticationChallenge *)challenge;

/* Tells OACertificateTrustPrompt how to find the window to attach the sheet to. This block will be invoked on the main thread right before the panel is to be shown. */
- (void)findParentWindow:(NSWindow *(^)(void))finder;

/* Result. Valid only once the operation is finished. */
/* Note that on OSX we only return TrustDurationSession, not TrustDurationAlways: the "always" behavior is implemented by allowing the user to modify the certificate trust settings directly with SFCertificateView. On iOS, the equivalent class (OUICertificateTrustAlert) can return both Session and Always depending on the users response. */
@property (readonly,nonatomic) OFCertificateTrustDuration result;
- (SecTrustRef)serverTrust CF_RETURNS_NOT_RETAINED;    // The trust ref we've evaluated and possibly modified

@end

NS_ASSUME_NONNULL_END
