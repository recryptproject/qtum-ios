//
//  ConfirmWordCollectionViewCell.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 03.01.2018.
//  Copyright © 2018 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString* confirmWordCollectionViewCellIdentifire;

@interface ConfirmWordCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UILabel *textLabel;
@property (weak, nonatomic) IBOutlet UIView *backView;

@end
