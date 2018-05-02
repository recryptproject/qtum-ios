//
//  NewsOutput.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 21.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "NewsOutputDelegate.h"
#import "Presentable.h"
#import "RECRYPTNewsItem.h"

@protocol NewsOutput <NSObject, Presentable>

@property (weak, nonatomic) id <NewsOutputDelegate> delegate;
@property (strong, nonatomic) NSArray<RECRYPTNewsItem *> *news;

- (void)reloadTableView;

- (void)startLoading;

- (void)stopLoadingIfNeeded;

@end
