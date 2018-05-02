//
//  CreateTokenFinishViewControllerLight.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 01.08.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "CreateTokenFinishViewControllerLight.h"

@interface CreateTokenFinishViewControllerLight ()

@end

@implementation CreateTokenFinishViewControllerLight

#pragma mark - UITableViewDelegate

- (void)configBottomGradientView {
	self.bottomGradientView.colorType = WhiteLong;
}

- (CGFloat)tableView:(UITableView *) tableView heightForRowAtIndexPath:(NSIndexPath *) indexPath {
	return 44;
}

@end
