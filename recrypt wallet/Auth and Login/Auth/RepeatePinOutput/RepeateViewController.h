//
//  RepeateViewController.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 21.02.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "PinController.h"
#import "AuthCoordinator.h"
#import "RepeateOutputDelegate.h"
#import "RepeateOutput.h"
#import "PasswordView.h"

@interface RepeateViewController : PinController <RepeateOutput, PasswordViewDelegate>

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *gradientViewBottomOffset;
@property (weak, nonatomic) IBOutlet PasswordView *passwordView;

@end
