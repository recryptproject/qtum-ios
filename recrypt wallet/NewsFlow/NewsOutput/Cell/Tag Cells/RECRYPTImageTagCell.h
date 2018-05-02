//
//  RECRYPTImageTagCell.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 20.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DynamicHeightCellProtocol.h"

extern NSString *const RECRYPTImageTagCellReuseIdentifire;

@interface RECRYPTImageTagCell : UITableViewCell <DynamicHeightCellProtocol>

@property (weak, nonatomic) IBOutlet UIImageView *tagImageView;

- (CGSize)prefferedSize;

@end
