//
//  RECRYPTAddressTokenTableViewCell.m
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 19.05.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "RECRYPTAddressTokenTableViewCell.h"

@interface RECRYPTAddressTokenTableViewCell ()


@end

@implementation RECRYPTAddressTokenTableViewCell

- (void)awakeFromNib {
	[super awakeFromNib];
}

- (void)setSelected:(BOOL) selected animated:(BOOL) animated {
	[super setSelected:selected animated:animated];

}

- (void)actionPlus:(id) sender {
	[self.delegate actionPlus:sender];
}

@end
