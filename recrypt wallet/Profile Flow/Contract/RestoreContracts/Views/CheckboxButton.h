//
//  CheckboxButton.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 12.06.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CheckboxButtonDelegate;

@interface CheckboxButton : UIView

- (void)setTitle:(NSString *) value;

- (void)setCheck:(BOOL) value;

- (BOOL)isChecked;

- (void)setSquareBackroundColor:(UIColor *) color;

@property (nonatomic, weak) id <CheckboxButtonDelegate> delegate;

@end

@protocol CheckboxButtonDelegate <NSObject>

- (void)didStateChanged:(CheckboxButton *) sender;

@end
