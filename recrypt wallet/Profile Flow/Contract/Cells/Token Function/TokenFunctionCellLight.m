//
//  TokenFunctionCellLight.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 02.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "TokenFunctionCellLight.h"

@implementation TokenFunctionCellLight

- (void)awakeFromNib {

	[super awakeFromNib];
	self.disclousere.tintColor = lightBlackColor ();

	UIView *bgColorView = [[UIView alloc] init];
	bgColorView.backgroundColor = lightBlueColor ();
	[self setSelectedBackgroundView:bgColorView];
}

@end
