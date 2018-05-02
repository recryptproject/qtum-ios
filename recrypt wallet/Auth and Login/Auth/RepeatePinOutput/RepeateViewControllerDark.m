//
//  RepeateViewControllerDark.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 11.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "RepeateViewControllerDark.h"

@interface RepeateViewControllerDark ()

@end

@implementation RepeateViewControllerDark

- (void)configPasswordView {

	[self.passwordView setStyle:DarkStyle lenght:LongType];
	self.passwordView.delegate = self;
}

@end
