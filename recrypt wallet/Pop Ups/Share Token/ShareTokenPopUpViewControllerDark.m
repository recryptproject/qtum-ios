//
//  ShareTokenPopUpViewControllerDark.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 01.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "ShareTokenPopUpViewControllerDark.h"

@interface ShareTokenPopUpViewControllerDark ()

@end

@implementation ShareTokenPopUpViewControllerDark

- (void)viewDidLoad {
	[super viewDidLoad];

	self.abiTextView.layer.borderWidth = 1.0f;
	self.abiTextView.layer.borderColor = customBlackColor ().CGColor;
}

@end
