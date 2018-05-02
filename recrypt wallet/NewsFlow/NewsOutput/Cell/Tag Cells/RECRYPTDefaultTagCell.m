//
//  RECRYPTDefaultTagCell.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 20.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "RECRYPTDefaultTagCell.h"

NSString *const RECRYPTDefaultTagCellReuseIdentifire = @"RECRYPTDefaultTagCellReuseIdentifire";

@implementation RECRYPTDefaultTagCell

- (void)awakeFromNib {

	[super awakeFromNib];
}

- (CGFloat)calculateSelfHeight {
	return 212;
}

@end
