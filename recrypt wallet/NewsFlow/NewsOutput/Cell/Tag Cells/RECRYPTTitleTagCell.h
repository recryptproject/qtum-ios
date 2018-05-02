//
//  RECRYPTTitleTagCell.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 09.11.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString *const RECRYPTTitleTagCellLightReuseIdentifire;

@interface RECRYPTTitleTagCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

@property (weak, nonatomic) IBOutlet UILabel *dateLabel;

@end
