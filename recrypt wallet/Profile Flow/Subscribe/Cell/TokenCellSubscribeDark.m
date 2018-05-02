//
//  TokenCellSubscribeDark.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 27.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "TokenCellSubscribeDark.h"

@implementation TokenCellSubscribeDark

- (void)awakeFromNib {
	[super awakeFromNib];
	self.indicator.tintColor = customBlueColor ();
}

@end
