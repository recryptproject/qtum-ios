//
//  SourceCodePopUpViewControllerDark.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 21.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "SourceCodePopUpViewControllerDark.h"

@interface SourceCodePopUpViewControllerDark ()

@end

@implementation SourceCodePopUpViewControllerDark

- (void)setupTextView {

	self.textView.layer.borderWidth = 1.0f;
	self.textView.layer.borderColor = customBlackColor ().CGColor;
}

@end
