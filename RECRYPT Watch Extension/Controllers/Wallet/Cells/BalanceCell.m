//
//  BalanceCell.m
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 13.06.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "BalanceCell.h"

@implementation BalanceCell

- (IBAction)showQRCode {
	if ([self.delegate respondsToSelector:@selector (showQRCode)]) {
		[self.delegate showQRCode];
	}
}

@end
