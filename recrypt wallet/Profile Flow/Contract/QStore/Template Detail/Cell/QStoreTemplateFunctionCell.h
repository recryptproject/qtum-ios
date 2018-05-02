//
//  QStoreTemplateFunctionCell.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 24.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>

static NSString *qstoreTemplateFunctionCellFunctionIdentifire = @"QStoreTemplateFunctionCellFunctionIdentifire";
static NSString *qstoreTemplateFunctionCellPropertyIdentifire = @"QStoreTemplateFunctionCellPropertyIdentifire";

@interface QStoreTemplateFunctionCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *methodName;

@end
