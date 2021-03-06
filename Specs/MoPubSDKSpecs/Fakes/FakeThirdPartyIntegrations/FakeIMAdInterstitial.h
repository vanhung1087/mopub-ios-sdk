//
//  FakeGSFullScreenAd.h
//  MoPub
//
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#import "IMInterstitial.h"
#import "IMInterstitialDelegate.h"
#import "IMInMobiNetworkExtras.h"

@interface FakeIMAdInterstitial : IMInterstitial <FakeInterstitialAd>

@property (nonatomic, retain) IMInMobiNetworkExtras *fakeNetworkExtras;
@property (nonatomic, assign) BOOL willPresentSuccessfully;
@property (nonatomic, assign) BOOL didPresent;

- (void)simulateLoadingAd;
- (void)simulateFailingToLoad;
- (void)simulateUserTap;
- (void)simulateUserDismissingAd;
- (void)simulateInterstitialFinishedDisappearing;

@end
