//
//  SmartContractsListViewControllerLight.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 28.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "SmartContractsListViewControllerLight.h"
#import "SmartContractListItemCell.h"

@interface SmartContractsListViewControllerLight ()

@end

@implementation SmartContractsListViewControllerLight

- (void)tableView:(UITableView *) tableView didHighlightRowAtIndexPath:(NSIndexPath *) indexPath {

	RECRYPTSwipableCellWithButtons *cell = (RECRYPTSwipableCellWithButtons *)[tableView cellForRowAtIndexPath:indexPath];
	cell.myContentView.backgroundColor = lightBlueColor ();
}

- (void)tableView:(UITableView *) tableView didUnhighlightRowAtIndexPath:(NSIndexPath *) indexPath {

	RECRYPTSwipableCellWithButtons *cell = (RECRYPTSwipableCellWithButtons *)[tableView cellForRowAtIndexPath:indexPath];
	cell.myContentView.backgroundColor = [UIColor whiteColor];
}

- (CGFloat)tableView:(UITableView *) tableView heightForRowAtIndexPath:(NSIndexPath *) indexPath {
	return 53;
}

- (RemoveContractTrainigView *)trainingViewWithStyle {

	RemoveContractTrainigView *trainingView = [[[NSBundle mainBundle] loadNibNamed:@"RemoveContractTrainingViewLight" owner:self options:nil] objectAtIndex:0];

	return trainingView;
}

@end
