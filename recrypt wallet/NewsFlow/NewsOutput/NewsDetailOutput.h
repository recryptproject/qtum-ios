//
//  NewsDetailOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 20.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Presentable.h"

@class RECRYPTNewsItem;
@class NewsDetailCellBuilder;

@protocol NewsDetailOutputDelegate <NSObject>

- (void)refreshTagsWithNewsItem:(RECRYPTNewsItem *) newsItem;

- (void)didBackPressed;

@end

@protocol NewsDetailOutput <Presentable>

@property (weak, nonatomic) id <NewsDetailOutputDelegate> delegate;
@property (strong, nonatomic) RECRYPTNewsItem *newsItem;
@property (strong, nonatomic) NewsDetailCellBuilder *cellBuilder;

- (void)reloadTableView;

- (void)failedToGetData;

- (void)startLoading;

- (void)stopLoadingIfNeeded;

@end
