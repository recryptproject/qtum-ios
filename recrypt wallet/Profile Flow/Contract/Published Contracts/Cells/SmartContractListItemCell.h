//
//  SmartContractListItemCell.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 30.05.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RECRYPTSwipableCellWithButtons.h"

static NSString *smartContractListItemCellIdentifire = @"SmartContractListItemCellIdentifire";

@interface SmartContractListItemCell : RECRYPTSwipableCellWithButtons

@property (weak, nonatomic) IBOutlet UILabel *contractName;
@property (weak, nonatomic) IBOutlet UILabel *typeIdentifire;
@property (weak, nonatomic) IBOutlet UILabel *creationDate;

@end
