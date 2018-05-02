//
//  LibraryTableViewCellDark.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 27.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "LibraryTableViewCellDark.h"

@implementation LibraryTableViewCellDark

- (void)awakeFromNib {
	[super awakeFromNib];
	UIView *bgColorView = [[UIView alloc] init];
	bgColorView.backgroundColor = customRedColor ();
	[self setSelectedBackgroundView:bgColorView];
}

- (void)setSelected:(BOOL) selected animated:(BOOL) animated {

	[super setSelected:selected animated:animated];

	self.nameLabel.textColor = selected ? customBlackColor () : customBlueColor ();
}

@end
