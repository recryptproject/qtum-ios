//
//  NewsCellBuilder.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 19.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RECRYPTHTMLTagItem.h"

@interface NewsDetailCellBuilder : NSObject

- (UITableViewCell *)getCellWithTagItem:(RECRYPTHTMLTagItem *) tag fromTable:(UITableView *) tableView withIndexPath:(NSIndexPath *) indexPath;

- (UITableViewCell *)getCellTitleWithFeedItem:(RECRYPTFeedItem *) feedItem fromTable:(UITableView *) tableView withIndexPath:(NSIndexPath *) indexPath;

@end
