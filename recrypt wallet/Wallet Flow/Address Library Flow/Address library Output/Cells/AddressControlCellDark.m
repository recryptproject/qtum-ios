//
//  AddressControlCellDark.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 02.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "AddressControlCellDark.h"

@implementation AddressControlCellDark

- (void)awakeFromNib {
	[super awakeFromNib];
	UIView *bgColorView = [[UIView alloc] init];
	bgColorView.backgroundColor = customRedColor ();
	[self setSelectedBackgroundView:bgColorView];
}

- (void)setSelected:(BOOL) selected animated:(BOOL) animated {

	[super setSelected:selected animated:animated];

	self.symbolLabel.textColor =
			self.valueLabel.textColor =
					self.addressLabel.textColor = selected ? customBlackColor () : customBlueColor ();
}

@end
