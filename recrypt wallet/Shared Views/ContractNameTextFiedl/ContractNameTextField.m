//
//  ContractNameTextField.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 01.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "ContractNameTextField.h"

@implementation ContractNameTextField

- (BOOL)textField:(UITextField *) textField shouldChangeCharactersInRange:(NSRange) range replacementString:(NSString *) string {

	if (self.textField.isEditing == YES) {
		[self.textField sizeToFit];
		CGFloat width = self.textField.frame.size.width;
		CGFloat leftOffset = 38;

		if ([UIScreen mainScreen].bounds.size.width - leftOffset > width) {

			self.frame = CGRectMake (self.frame.origin.x, self.frame.origin.y, width + leftOffset, self.frame.size.height);
			[self layoutIfNeeded];
		}
	}
	return YES;
}

@end
