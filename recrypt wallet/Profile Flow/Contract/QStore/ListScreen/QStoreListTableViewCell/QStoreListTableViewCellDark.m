//
//  QStoreListTableViewCellDark.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 18.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "QStoreListTableViewCellDark.h"

@implementation QStoreListTableViewCellDark

- (void)awakeFromNib {
	[super awakeFromNib];

	UIView *bgColorView = [[UIView alloc] init];
	bgColorView.backgroundColor = customRedColor ();
	[self setSelectedBackgroundView:bgColorView];
}

- (void)setSelected:(BOOL) selected animated:(BOOL) animated {
	[super setSelected:selected animated:animated];

}

- (void)changeHighlight:(BOOL) value {
	self.nameLabel.textColor =
			self.imageIcon.tintColor =
					self.amount.textColor = value ? customBlackColor () : customBlueColor ();
}

@end
