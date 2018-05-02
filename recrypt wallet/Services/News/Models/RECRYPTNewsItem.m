//
//  RECRYPTNewsItem.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 19.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//


@interface RECRYPTNewsItem ()

@property (nonatomic, strong) RECRYPTFeedItem *feed;
@property (nonatomic, strong) NSString *identifire;

@end

@implementation RECRYPTNewsItem

- (instancetype)initWithTags:(NSArray<RECRYPTHTMLTagItem *> *) tags andFeed:(RECRYPTFeedItem *) feed {

	self = [super init];
	if (self) {
		_tags = tags;
		_feed = feed;
		_identifire = feed.identifier;
	}
	return self;
}

- (instancetype)initWithCoder:(NSCoder *) decoder {

	self = [super init];

	if (self) {

		self.tags = [decoder decodeObjectForKey:@"tags"];
		self.feed = [decoder decodeObjectForKey:@"feed"];
		self.identifire = [decoder decodeObjectForKey:@"identifire"];
	}

	return self;
}

- (void)encodeWithCoder:(NSCoder *) encoder {

	[encoder encodeObject:self.tags forKey:@"tags"];
	[encoder encodeObject:self.feed forKey:@"feed"];
	[encoder encodeObject:self.identifire forKey:@"identifire"];
}

#pragma mark - Equality

- (BOOL)isEqualToNewsItem:(RECRYPTNewsItem *) aNewsItem {

	if (!aNewsItem) {
		return NO;
	}

	BOOL haveEqualTags = (!self.tags && !aNewsItem.tags) || [self.tags isEqualToArray:aNewsItem.tags];
	BOOL haveEqualFeed = (!self.feed && !aNewsItem.feed) || [self.feed isEqual:aNewsItem.feed];
	BOOL haveEqualIdentifires = (!self.identifire && !aNewsItem.identifire) || [self.identifire isEqualToString:aNewsItem.identifire];

	return haveEqualTags && haveEqualFeed && haveEqualIdentifires;
}

- (BOOL)isEqual:(id) anObject {

	if (self == anObject) {
		return YES;
	}

	if (![anObject isKindOfClass:[RECRYPTNewsItem class]]) {
		return NO;
	}

	return [self isEqualToNewsItem:(RECRYPTNewsItem *)anObject];
}

- (NSUInteger)hash {

	return [self.tags hash] ^ [self.feed hash] ^ [self.identifire hash];
}

@end
