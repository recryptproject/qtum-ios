//
//  CreatePinViewControllerDark.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 11.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "CreatePinViewControllerDark.h"

@interface CreatePinViewControllerDark ()

@end

@implementation CreatePinViewControllerDark

- (void)configPasswordView {

	[self.passwordView setStyle:DarkStyle lenght:LongType];
	self.passwordView.delegate = self;
}

@end
