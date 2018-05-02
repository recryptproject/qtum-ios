//
//  NewsOutputDelegate.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 21.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//
@class RECRYPTNewsItem;

@protocol NewsOutputDelegate <NSObject>

@required
- (void)refreshTableViewData;

- (void)didSelectCellWithNews:(RECRYPTNewsItem *) newsItem;

@end
