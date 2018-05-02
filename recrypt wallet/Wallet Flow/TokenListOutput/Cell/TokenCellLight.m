//
//  TokenCellLight.m
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 07.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "TokenCellLight.h"

@implementation TokenCellLight

- (void)awakeFromNib {
	[super awakeFromNib];

	UIView *bgColorView = [[UIView alloc] init];
	bgColorView.backgroundColor = lightBlueColor ();
	[self setSelectedBackgroundView:bgColorView];
    
    self.unconfirmedTextLabel.text = NSLocalizedString(@"Unconfirmed:", @"Token Cell Light Unconfirmed Balance");
}

@end
