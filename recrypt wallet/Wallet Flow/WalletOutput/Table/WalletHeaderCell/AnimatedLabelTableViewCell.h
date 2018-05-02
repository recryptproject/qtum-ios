//
//  AnimatedLabelTableViewCell.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 30.05.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AnimatedLabelTableViewCell : UITableViewCell

- (void)changePositionForLabel:(UILabel *) label andPercent:(CGFloat) percent values:(NSArray *) values constraints:(NSArray *) constraints isLeft:(BOOL) isLeft;

@end
