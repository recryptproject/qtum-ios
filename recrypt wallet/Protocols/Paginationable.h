//
//  Paginationable.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 19.05.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CustomPageControl;

@protocol Paginationable <NSObject>

- (void)setCurrentPage:(NSInteger) page;

- (void)setNumberPages:(NSInteger) number;


@end
