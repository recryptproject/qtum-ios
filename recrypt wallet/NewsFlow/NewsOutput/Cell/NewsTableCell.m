//
//  NewsTableCell.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 07.02.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "NewsTableCell.h"

@implementation NewsTableCell

- (void)prepareForReuse {

	[super prepareForReuse];
	self.titleLabel.text = @"";
	self.descriptionLabel.text = @"";
	self.dateLabel.text = @"";
}

#pragma mark - Public Methods


@end
