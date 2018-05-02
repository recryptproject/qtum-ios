//
//  HistoryItemAddressCellTableViewCell.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 06.04.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>

static NSString *HistoryItemAddressCellTableViewCellIdentifier = @"HistoryItemAddressCellTableViewCellIdentifier";

@interface HistoryItemAddressCellTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *addressLabel;
@property (weak, nonatomic) IBOutlet UILabel *valueLabel;
@property (weak, nonatomic) IBOutlet UILabel *currencyLabel;

@end
