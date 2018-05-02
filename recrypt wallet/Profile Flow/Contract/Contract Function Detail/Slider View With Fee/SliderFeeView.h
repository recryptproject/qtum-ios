//
//  SliderFeeView.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 21.09.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TextFieldWithLine.h"

@protocol SliderFeeViewDelegate

- (void)didChangeFeeSlider:(UISlider *) slider;

- (void)didChangeGasPriceSlider:(RECRYPTBigNumber *) value;

- (void)didChangeGasLimiteSlider:(RECRYPTBigNumber *) value;

@end


@interface SliderFeeView : UIView

@property (weak, nonatomic) IBOutlet UISlider *slider;
@property (weak, nonatomic) IBOutlet UILabel *minFeeLabel;
@property (weak, nonatomic) IBOutlet UILabel *maxFeeLabel;
@property (weak, nonatomic) IBOutlet TextFieldWithLine *feeTextField;
@property (weak, nonatomic) id <SliderFeeViewDelegate> delegate;
@property (weak, nonatomic) IBOutlet TextFieldWithLine *defaultAddressTextField;
@property (weak, nonatomic) IBOutlet UILabel *defaultAddressLabel;

- (void)setMinGasPrice:(RECRYPTBigNumber *) min andMax:(RECRYPTBigNumber *) max step:(long) step;

- (void)setMinGasLimit:(RECRYPTBigNumber *) min andMax:(RECRYPTBigNumber *) max standart:(RECRYPTBigNumber *) standart step:(long) step;

@end
