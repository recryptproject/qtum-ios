//
//  SecurityPopupViewControllerLight.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 31.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "SecurityPopupViewControllerLight.h"

@interface SecurityPopupViewControllerLight ()

@end

@implementation SecurityPopupViewControllerLight

- (void)configPasswordView {

	[self.passwordView setStyle:LightPopupStyle
						 lenght:SLocator.appSettings.isLongPin ? LongType : ShortType];

	self.passwordView.delegate = self;
}

@end
