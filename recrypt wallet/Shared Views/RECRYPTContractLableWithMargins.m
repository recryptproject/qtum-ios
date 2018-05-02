//
//  RECRYPTContractLableWithMargins.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 02.11.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "RECRYPTContractLableWithMargins.h"

@interface RECRYPTContractLableWithMargins ()

@property (assign, nonatomic) UIEdgeInsets insets;

@end

@implementation RECRYPTContractLableWithMargins

- (instancetype)initWithCoder:(NSCoder *) aDecoder {

	self = [super initWithCoder:aDecoder];

	if (self) {
		self.insets = UIEdgeInsetsMake (0, 4, 0, 4);
	}
	return self;
}

- (void)drawTextInRect:(CGRect) rect {

	[super drawTextInRect:UIEdgeInsetsInsetRect (rect, self.insets)];
}

- (CGSize)intrinsicContentSize {

	CGSize size = [super intrinsicContentSize];
	size.width += self.insets.left + self.insets.right;
	size.height += self.insets.top + self.insets.bottom;
	return size;
}

@end
