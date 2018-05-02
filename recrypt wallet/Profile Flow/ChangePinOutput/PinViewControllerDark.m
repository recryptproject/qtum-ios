//
//  PinViewControllerDark.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 26.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "PinViewControllerDark.h"

@interface PinViewControllerDark ()

@end

@implementation PinViewControllerDark

- (void)configPasswordView {

	[self.passwordView setStyle:DarkStyle lenght:SLocator.appSettings.isLongPin ? LongType : ShortType];
	self.passwordView.delegate = self;
}

@end
