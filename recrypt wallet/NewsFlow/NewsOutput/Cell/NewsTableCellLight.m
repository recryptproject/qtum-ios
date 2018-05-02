//
//  NewsTableCellLight.m
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 21.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "NewsTableCellLight.h"

@implementation NewsTableCellLight


- (void)awakeFromNib {

	[super awakeFromNib];

	UIView *bgColorView = [[UIView alloc] init];
	bgColorView.backgroundColor = lightBlueColor ();
	[self setSelectedBackgroundView:bgColorView];
}

@end
