//
//  TemplateTokenViewControllerLight.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 28.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "TemplateTokenViewControllerLight.h"
#import "TokenTemplateCell.h"

@interface TemplateTokenViewControllerLight ()

@end

@implementation TemplateTokenViewControllerLight

- (void)tableView:(UITableView *) tableView didHighlightRowAtIndexPath:(NSIndexPath *) indexPath {

	TokenTemplateCell *cell = (TokenTemplateCell *)[tableView cellForRowAtIndexPath:indexPath];
	cell.tokenIdentifire.backgroundColor = lightGreenColor ();
}

- (void)tableView:(UITableView *) tableView didUnhighlightRowAtIndexPath:(NSIndexPath *) indexPath {

	TokenTemplateCell *cell = (TokenTemplateCell *)[tableView cellForRowAtIndexPath:indexPath];
	cell.tokenIdentifire.backgroundColor = lightGreenColor ();
}

@end
