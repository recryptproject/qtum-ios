//
//  NewsFacedeService.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 13.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//


@interface NewsFacedeService ()

@property (strong, nonatomic) RECRYPTFeedParcer *parcer;
@property (strong, nonatomic) RECRYPTHtmlParcer *htmlParcer;
@property (nonatomic, copy) RECRYPTNewsItems completion;
@property (nonatomic, copy) gettingNewsFailedBlock failure;
@property (nonatomic, strong) NSOperationQueue *storingQueue;

@end

@implementation NewsFacedeService

NSString *const kNewsCache = @"kArchivedNewsDict";

- (instancetype)init {

	self = [super init];

	if (self != nil) {
	}
	return self;
}

#pragma mark - Custom Accessors

- (NSOperationQueue *)storingQueue {

	if (!_storingQueue) {
		_storingQueue = [[NSOperationQueue alloc] init];
		_storingQueue.maxConcurrentOperationCount = 1;
	}
	return _storingQueue;
}

- (void)getNewsItemsWithCompletion:(RECRYPTNewsItems) completion andFailure:(gettingNewsFailedBlock) failure {

	self.completion = completion;
	self.failure = failure;
	__weak __typeof (self) weakSelf = self;

	NSMutableArray <RECRYPTNewsItem *> *news = @[].mutableCopy;

	RECRYPTFeedParcer *parcer = [[RECRYPTFeedParcer alloc] init];

	//1 parcing feed from medium

	[parcer parceFeedFromUrl:@"https://medium.com/feed/@Recrypt" withCompletion:^(NSArray<RECRYPTFeedItem *> *feeds) {

		for (RECRYPTFeedItem *feedItem in feeds) {

			RECRYPTNewsItem *newsItem = [[RECRYPTNewsItem alloc] initWithTags:nil andFeed:feedItem];
			[news addObject:newsItem];
		}

		[weakSelf storeNews:news];

		dispatch_block_t block = ^{

			dispatch_async (dispatch_get_main_queue (), ^{
				if (weakSelf.completion) {
					weakSelf.completion ([weakSelf unarchivedNews]);
				}
			});
		};

		[weakSelf.storingQueue addOperationWithBlock:block];
	}             andFailure:^{
		dispatch_async (dispatch_get_main_queue (), ^{
			if (weakSelf.failure) {
				weakSelf.failure ();
			}
		});
	}];

	self.parcer = parcer;
}

- (void)getTagsFromNews:(RECRYPTNewsItem *) newsItem withCompletion:(RECRYPTTagsItems) completion {

	RECRYPTFeedItem *feedItem = newsItem.feed;
	RECRYPTHtmlParcer *htmlParcer = [[RECRYPTHtmlParcer alloc] init];
	__weak __typeof (self) weakSelf = self;
	[completion copy];
	[htmlParcer parceNewsFromHTMLString:feedItem.summary withCompletion:^(NSArray<RECRYPTHTMLTagItem *> *tags) {

		newsItem.tags = tags;

		if (completion) {
			completion (tags);
		}
		[weakSelf updateNewsWithNewsItem:newsItem];
	}];
	self.htmlParcer = htmlParcer;
}

- (void)updateNewsWithNewsItem:(RECRYPTNewsItem *) newsItem {

	__weak __typeof (self) weakSelf = self;

	dispatch_block_t block = ^{

		NSArray <RECRYPTNewsItem *> *unarchivedNews = [weakSelf unarchivedNews];
		NSMutableDictionary *newsDict = [[weakSelf createDictWithNews:unarchivedNews] mutableCopy];

		if (newsDict) {
			[newsDict setObject:newsItem forKey:newsItem.identifire];
			NSData *data = [NSKeyedArchiver archivedDataWithRootObject:[newsDict copy]];
			[SLocator.dataOperation saveFileWithName:newsCacheFileName withData:data];
		}
		[weakSelf unarchivedNews];
	};

	[self.storingQueue addOperationWithBlock:block];
}

- (NSArray <RECRYPTNewsItem *> *)obtainNewsItems {

	return [self unarchivedNews];
}

- (void)storeNews:(NSArray <RECRYPTNewsItem *> *) news {

	__weak __typeof (self) weakSelf = self;

	dispatch_block_t block = ^{

		NSArray <RECRYPTNewsItem *> *unarchivedNews = [weakSelf unarchivedNews];
		NSDictionary *oldNews = [weakSelf createDictWithNews:unarchivedNews];
		NSDictionary *newNews = [weakSelf createDictWithNews:news];
		NSMutableDictionary *uniqueNews = [oldNews mutableCopy];

		for (NSString *identifire in newNews.allKeys) {
			if (![oldNews objectForKey:identifire]) {
				[uniqueNews setObject:newNews[identifire] forKey:identifire];
			}
		}

		NSData *data = [NSKeyedArchiver archivedDataWithRootObject:uniqueNews];
		[SLocator.dataOperation saveFileWithName:newsCacheFileName withData:data];
	};

	[self.storingQueue addOperationWithBlock:block];
}

- (NSArray <RECRYPTNewsItem *> *)unarchivedNews {

	NSData *data = [SLocator.dataOperation getDataFormFileWithName:newsCacheFileName];
	NSDictionary *newsDict = [NSKeyedUnarchiver unarchiveObjectWithData:data];
	if (newsDict) {
		return [self sortNews:[newsDict allValues]];
	}
	return nil;
}

- (NSDictionary<NSString *, NSArray <RECRYPTNewsItem *> *> *)createDictWithNews:(NSArray <RECRYPTNewsItem *> *) news {

	NSMutableDictionary *newsDict = @{}.mutableCopy;
	for (RECRYPTNewsItem *newsItem in news) {
		[newsDict setObject:newsItem forKey:newsItem.identifire];
	}

	return [newsDict copy];
}

- (NSArray <RECRYPTNewsItem *> *)sortNews:(NSArray <RECRYPTNewsItem *> *) news {

	NSArray *sortedArray = [news sortedArrayUsingComparator:^NSComparisonResult(RECRYPTNewsItem *news1, RECRYPTNewsItem *news2) {

		return [news2.feed.date compare:news1.feed.date];
	}];

	return sortedArray;
}

#pragma mark - Cancelabe

- (void)stop {
	[self.parcer cancel];
	[self.htmlParcer cancel];
}


@end
