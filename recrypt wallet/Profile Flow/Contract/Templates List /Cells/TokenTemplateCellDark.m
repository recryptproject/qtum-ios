//
//  TokenTemplateCellDark.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 28.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "TokenTemplateCellDark.h"

@implementation TokenTemplateCellDark

- (void)awakeFromNib {

	[super awakeFromNib];

	self.disclousureImage.tintColor = customBlueColor ();

	UIView *bgColorView = [[UIView alloc] init];
	bgColorView.backgroundColor = customRedColor ();
	[self setSelectedBackgroundView:bgColorView];
}

@end
