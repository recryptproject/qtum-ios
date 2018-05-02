//
//  RECRYPTParagrafTagCell.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 23.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "RECRYPTParagrafTagCell.h"


NSString *const RECRYPTParagrafTagCellReuseIdentifire = @"RECRYPTParagrafTagCellReuseIdentifire";

@implementation RECRYPTParagrafTagCell

- (UIFont *)boldFont {

	return [UIFont fontWithName:@"simplonmono-medium" size:18];
}

- (UIFont *)regularFont {
	return [UIFont fontWithName:@"simplonmono-regular" size:16];
}

- (UIColor *)linkColor {
	return customRedColor ();
}

- (UIColor *)textColor {
	return customBlueColor ();
}

- (CGFloat)calculateSelfHeight {

	UITextView *calculationView = [[UITextView alloc] init];
	[calculationView setAttributedText:self.textView.attributedText];
	CGSize size = [calculationView sizeThatFits:CGSizeMake (self.textView.frame.size.width, FLT_MAX)];
	return ceilf (size.height);
}

@end
