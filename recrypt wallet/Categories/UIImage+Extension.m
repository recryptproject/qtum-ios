//
//  UIImage+Extension.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 05.05.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "UIImage+Extension.h"

@implementation UIImage (Extension)

+ (UIImage *)changeViewToImage:(UIView *) viewForImage {

	UIGraphicsBeginImageContext (viewForImage.bounds.size);
	[viewForImage.layer renderInContext:UIGraphicsGetCurrentContext ()];
	UIImage *img = UIGraphicsGetImageFromCurrentImageContext ();
	UIGraphicsEndImageContext ();
	return img;
}

@end
