//
//  RECRYPTParagrafTagCellLight.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 24.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "RECRYPTParagrafTagCellLight.h"

@implementation RECRYPTParagrafTagCellLight

- (UIFont *)boldFont {

	return [UIFont fontWithName:@"ProximaNova-Bold" size:16];
}

- (UIFont *)regularFont {
	return [UIFont fontWithName:@"ProximaNova-Light" size:14];
}

- (UIColor *)linkColor {
	return lightGreenColor ();
}

- (UIColor *)textColor {
	return lightDarkGrayColor ();
}

@end
