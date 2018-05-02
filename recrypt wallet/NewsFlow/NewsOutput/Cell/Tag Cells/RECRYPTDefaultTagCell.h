//
//  RECRYPTDefaultTagCell.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 20.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DynamicHeightCellProtocol.h"

extern NSString *const RECRYPTDefaultTagCellReuseIdentifire;

@interface RECRYPTDefaultTagCell : UITableViewCell <DynamicHeightCellProtocol>

@property (weak, nonatomic) IBOutlet UILabel *contentLabel;

@end
