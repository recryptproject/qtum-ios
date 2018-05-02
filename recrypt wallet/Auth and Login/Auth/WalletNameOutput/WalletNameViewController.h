//
//  WalletNameViewController.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 30.12.16.
//  Copyright © 2016 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AuthCoordinator.h"
#import "WalletNameOutput.h"
#import "WalletNameOutputDelegate.h"

@interface WalletNameViewController : BaseViewController <WalletNameOutput>

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *buttonsBottomConstraint;

@end
