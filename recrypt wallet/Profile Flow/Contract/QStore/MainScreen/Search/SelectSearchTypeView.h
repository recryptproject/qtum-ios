//
//  SelectSearchTypeView.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 27.06.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SelectSearchTypeViewDelegate <NSObject>

- (void)selectIndexChanged:(NSInteger) index;

@end

@interface SelectSearchTypeView : UIView

@property (nonatomic, weak) id <SelectSearchTypeViewDelegate> delegate;

- (void)setSelectedIndex:(NSInteger) index;

- (NSInteger)selectedIndex;

@end
