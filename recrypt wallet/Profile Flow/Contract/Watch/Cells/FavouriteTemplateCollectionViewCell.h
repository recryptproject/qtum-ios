//
//  FavouriteTemplateCollectionViewCell.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 17.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>

static NSString *favouriteTemplateCellIdentifire = @"FavouriteTemplateCollectionViewCell";

@interface FavouriteTemplateCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UILabel *nameLabel;

+ (UIFont *)getLabelFont;

@end
