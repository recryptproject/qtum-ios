//
//  SmartContractListItemCellDark.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 28.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "SmartContractListItemCellDark.h"

@implementation SmartContractListItemCellDark

- (void)awakeFromNib {

	[super awakeFromNib];

	UIView *bgColorView = [[UIView alloc] init];
	bgColorView.backgroundColor = customRedColor ();
	[self setSelectedBackgroundView:bgColorView];
}

@end
