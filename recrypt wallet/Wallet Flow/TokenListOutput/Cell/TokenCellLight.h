//
//  TokenCellLight.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 07.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "TokenCell.h"

static NSString *tokenCellIdentifireLight = @"TokenCellLight";

@interface TokenCellLight : TokenCell

@property (weak, nonatomic) IBOutlet UILabel *unconfirmedTextLabel;

@end
