//
//  TokenAddressContolCellLight.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 03.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "TokenAddressContolCellLight.h"

@implementation TokenAddressContolCellLight

- (void)awakeFromNib {

	[super awakeFromNib];
	UIView *bgColorView = [[UIView alloc] init];
	bgColorView.backgroundColor = lightBlueColor ();
	[self setSelectedBackgroundView:bgColorView];
}


@end
