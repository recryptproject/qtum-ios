//
//  LightBlueGrayBorderView.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 24.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "LightBlueGrayBorderView.h"

@implementation LightBlueGrayBorderView

- (instancetype)initWithCoder:(NSCoder *) aDecoder {

	self = [super initWithCoder:aDecoder];
	if (self) {
		[self config];
	}
	return self;
}

- (void)layoutSubviews {
	[super layoutSubviews];
}

#pragma mark - Config

- (void)config {

	self.layer.borderColor = lightBlueColor ().CGColor;
	self.layer.borderWidth = 1;
}

@end
