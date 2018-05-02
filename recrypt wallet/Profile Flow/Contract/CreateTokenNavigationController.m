//
//  CreateTokenNavigationController.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 06.03.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "CreateTokenNavigationController.h"

@interface CreateTokenNavigationController () <UIGestureRecognizerDelegate>

@end

@implementation CreateTokenNavigationController

- (void)viewDidLoad {
	[super viewDidLoad];
	self.navigationBar.hidden = YES;
	self.interactivePopGestureRecognizer.delegate = self;
	self.interactivePopGestureRecognizer.enabled = NO;
}

- (void)didReceiveMemoryWarning {
	[super didReceiveMemoryWarning];
}

@end
