//
//  LoginViewControllerLight.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 10.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "LoginViewControllerLight.h"

@interface LoginViewControllerLight ()

@end

@implementation LoginViewControllerLight

- (void)keyboardWillShow:(NSNotification *) sender {

	CGRect end = [[sender userInfo][UIKeyboardFrameEndUserInfoKey] CGRectValue];
	self.bottomConstraintForCancelButton.constant = end.size.height + 20;
	[self.view layoutIfNeeded];
}

- (void)configPasswordView {

	[self.passwordView setStyle:LightStyle lenght:SLocator.appSettings.isLongPin ? LongType : ShortType];
	self.passwordView.delegate = self;
}

@end
