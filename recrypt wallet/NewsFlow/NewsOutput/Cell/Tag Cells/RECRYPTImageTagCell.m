//
//  RECRYPTImageTagCell.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 20.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "RECRYPTImageTagCell.h"

NSString *const RECRYPTImageTagCellReuseIdentifire = @"RECRYPTImageTagCellReuseIdentifire";

@interface RECRYPTImageTagCell ()


@end

@implementation RECRYPTImageTagCell

- (void)prepareForReuse {

	[super prepareForReuse];
	self.tagImageView.contentMode = UIViewContentModeCenter;
	self.tagImageView.image = [UIImage imageNamed:@"news-placehodler"];
}


- (CGSize)prefferedSize {

	float cellWidth = [[UIScreen mainScreen] bounds].size.width - 10 - 10;
	float ratio = cellWidth / 355.f;
	float cellHeight = ratio * 192;
	return CGSizeMake (cellWidth, cellHeight);
}

@end
