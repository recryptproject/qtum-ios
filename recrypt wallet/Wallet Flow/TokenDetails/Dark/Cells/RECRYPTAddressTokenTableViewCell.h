//
//  RECRYPTAddressTokenTableViewCell.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 19.05.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol RECRYPTAddressTokenTableViewCellDelegate <NSObject>

@required
- (void)actionPlus:(id) sender;

- (void)actionTokenAddressControl;

@end

@interface RECRYPTAddressTokenTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *addressLabel;
@property (weak, nonatomic) id <RECRYPTAddressTokenTableViewCellDelegate> delegate;
@property (weak, nonatomic) IBOutlet UILabel *tokenAddressTextLabel;

@end
