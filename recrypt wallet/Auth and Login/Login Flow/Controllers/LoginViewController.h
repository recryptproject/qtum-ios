//
//  LoginViewController.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 21.02.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "PinController.h"
#import "LoginViewOutput.h"
#import "LoginViewOutputDelegate.h"
#import "PasswordView.h"

@interface LoginViewController : PinController <LoginViewOutput, PasswordViewDelegate>

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *bottomConstraintForCancelButton;
@property (weak, nonatomic) IBOutlet PasswordView *passwordView;

@end
