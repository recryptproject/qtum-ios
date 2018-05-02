//
//  QStoreSearchTableViewCellLight.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 19.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "QStoreSearchTableViewCellLight.h"

@implementation QStoreSearchTableViewCellLight

- (void)awakeFromNib {
	[super awakeFromNib];

	UIView *bgColorView = [[UIView alloc] init];
	bgColorView.backgroundColor = lightBlueColor ();
	[self setSelectedBackgroundView:bgColorView];
}

- (BOOL)isLight {
	return YES;
}

@end
