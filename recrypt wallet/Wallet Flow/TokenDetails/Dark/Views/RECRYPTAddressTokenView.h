//
//  RECRYPTAddressTokenView.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 29.05.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol RECRYPTAddressTokenViewDelegate <NSObject>

@required
- (void)actionPlus:(id) sender;

- (void)actionTokenAddressControl;

@end

@interface RECRYPTAddressTokenView : UIView

@property (weak, nonatomic) IBOutlet UILabel *addressLabel;
@property (weak, nonatomic) id <RECRYPTAddressTokenViewDelegate> delegate;
@property (weak, nonatomic) IBOutlet UILabel *tokenAddressTextLabel;

@end
