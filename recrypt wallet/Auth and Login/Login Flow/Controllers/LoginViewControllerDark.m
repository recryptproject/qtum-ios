//
//  LoginViewControllerDark.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 10.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "LoginViewControllerDark.h"

@interface LoginViewControllerDark ()

@end

@implementation LoginViewControllerDark

- (void)configPasswordView {

	[self.passwordView setStyle:DarkStyle lenght:SLocator.appSettings.isLongPin ? LongType : ShortType];
	self.passwordView.delegate = self;
}

@end
