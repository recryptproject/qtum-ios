//
//  PageControl.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 06.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PageControlItem;

@interface PageControl : UIView

@property (nonatomic) NSInteger pagesCount;
@property (nonatomic) NSInteger selectedPage;

- (UIView <PageControlItem> *)createViewItem;

- (CGFloat)spaceBetweenItems;

@end
