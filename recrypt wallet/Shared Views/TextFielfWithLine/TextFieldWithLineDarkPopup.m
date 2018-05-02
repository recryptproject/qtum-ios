//
//  TextFieldWithLineDarkPopup.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 02.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "TextFieldWithLineDarkPopup.h"

@implementation TextFieldWithLineDarkPopup

- (UIColor *)getUnderlineColorDeselected {
	return customBlackColor ();
}

- (UIColor *)getUnderlineColorSelected {
	return customBlackColor ();
}

- (UIColor *)getPlaceholderColor {
	return customBlackColor ();
}

@end
