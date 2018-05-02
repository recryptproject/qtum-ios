//
//  PageControlItem.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 06.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PageControlItem <NSObject>

- (void)setSelectedState:(BOOL) selected;

- (CGFloat)getSelectedWidth;

- (CGFloat)getNotSelectedWidth;

@end
