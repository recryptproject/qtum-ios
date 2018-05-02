//
//  ImageLoader.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 21.05.17.
//  Copyright © 2016 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageLoader : NSObject

- (void)getImageWithUrl:(NSString *) url
				andSize:(CGSize) size
	  withResultHandler:(void (^)(UIImage *image)) complete;


@end
