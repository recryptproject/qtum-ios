//
//  ViewWithAnimatedLine.m
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 30.05.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "ViewWithAnimatedLine.h"

@interface ViewWithAnimatedLine ()

@property (nonatomic, weak) NSLayoutConstraint *trailingConstraintForLine;

@end

@implementation ViewWithAnimatedLine

- (void)showAnimation {
	self.trailingConstraintForLine.constant = self.frame.size.width;
	[self layoutIfNeeded];

	self.trailingConstraintForLine.constant = 0.0f;
	[UIView animateWithDuration:0.15f animations:^{
		[self layoutIfNeeded];
	}];
}

- (void)setRightConstraint:(NSLayoutConstraint *) constraint {
	self.trailingConstraintForLine = constraint;
}

@end
