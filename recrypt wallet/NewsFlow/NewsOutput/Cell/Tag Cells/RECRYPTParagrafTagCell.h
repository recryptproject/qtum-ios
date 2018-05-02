//
//  RECRYPTParagrafTagCell.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 23.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DynamicHeightCellProtocol.h"

extern NSString *const RECRYPTParagrafTagCellReuseIdentifire;

@interface RECRYPTParagrafTagCell : UITableViewCell <DynamicHeightCellProtocol>

@property (weak, nonatomic) IBOutlet UITextView *textView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *textViewHeight;

- (UIFont *)boldFont;

- (UIFont *)regularFont;

- (UIColor *)linkColor;

- (UIColor *)textColor;

@end
