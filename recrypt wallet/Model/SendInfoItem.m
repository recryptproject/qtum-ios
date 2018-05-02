//
//  SendInfoItem.m
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 18.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

NSString *const RecryptAddressKey = @"recrypt";
NSString *const AmountKey = @"amount";
NSString *const LabelKey = @"label";
NSString *const MessageKey = @"message";
NSString *const TokenAddressKey = @"tokenAddress";

@interface SendInfoItem ()

@property (nonatomic) NSString *recryptAddress;
@property (nonatomic) NSString *tokenAddress;
@property (nonatomic) NSString *amountString;
@property (nonatomic) NSString *label;
@property (nonatomic) NSString *message;
@property (nonatomic) NSString *fromRecryptAddress;

@end

@implementation SendInfoItem

- (instancetype)initWithString:(NSString *) string {
	self = [super init];
	if (self) {
		[self emptySetup];
		[self parseFullString:string];
	}
	return self;
}

- (instancetype)initWithRecryptAddress:(NSString *) recryptAddress tokenAddress:(NSString *) tokenAddress amountString:(NSString *) amountString {
	self = [super init];
	if (self) {
		[self emptySetup];
		_recryptAddress = recryptAddress;
		_tokenAddress = tokenAddress;
		_amountString = amountString;
		_type = _tokenAddress ? SendInfoItemTypeToken : SendInfoItemTypeRecrypt;
	}
	return self;
}

- (instancetype)initWithRecryptAddress:(NSString *) recryptAddress
					   tokenAddress:(NSString *) tokenAddress
					   amountString:(NSString *) amountString
					fromRecryptAddress:(NSString *) fromAddress {

	self = [self initWithRecryptAddress:recryptAddress tokenAddress:tokenAddress amountString:amountString];
	if (self) {
		_fromRecryptAddress = fromAddress;
	}
	return self;
}

- (instancetype)initWithRecryptAddressKey:(BTCKey *) recryptAddressKey
						  tokenAddress:(NSString *) tokenAddress
						  amountString:(NSString *) amountString
					fromRecryptAddressKey:(BTCKey *) fromAddressKey {
	self = [super init];
	if (self) {
		[self emptySetup];
		_recryptAddressKey = recryptAddressKey;
		_tokenAddress = tokenAddress;
		_amountString = amountString;
		_fromRecryptAddressKey = fromAddressKey;
		_type = _tokenAddress ? SendInfoItemTypeToken : SendInfoItemTypeRecrypt;
	}
	return self;
}

- (instancetype)init {
	self = [super init];
	if (self) {
		[self emptySetup];
	}
	return self;
}

- (void)emptySetup {
	_label = NSLocalizedString(@"RECRYPT Mobile Wallet", nil);
	_message = NSLocalizedString(@"Payment Request", nil);
}

- (void)parseFullString:(NSString *) string {

	if (!string) {
		_type = SendInfoItemTypeInvalid;
		return;
	}

	NSArray *array = [string componentsSeparatedByString:@"?"];

	if (![self parseFirstPart:[array firstObject]]) {
		_type = SendInfoItemTypeInvalid;
		return;
	}

	if (array.count == 1) {
		return;
	}

	if (![self parseSecondPart:[array lastObject]]) {
		_type = SendInfoItemTypeInvalid;
		return;
	}
}

- (BOOL)parseFirstPart:(NSString *) string {

	NSArray *array = [string componentsSeparatedByString:@":"];

	if (array.count != 2) {
		return NO;
	}

	if ([[array firstObject] isEqualToString:RecryptAddressKey]) {
		_recryptAddress = [array lastObject];
	} else {
		return NO;
	}

	return YES;
}

- (BOOL)parseSecondPart:(NSString *) string {

	NSArray *array = [string componentsSeparatedByString:@"&"];

	for (NSString *param in array) {

		NSArray *paramArray = [param componentsSeparatedByString:@"="];
		if (paramArray.count != 2) {
			return NO;
		}

		if ([[paramArray firstObject] isEqualToString:AmountKey]) {
			_amountString = [paramArray lastObject];
		}
		if ([[paramArray firstObject] isEqualToString:LabelKey]) {
			_label = [paramArray lastObject];
		}
		if ([[paramArray firstObject] isEqualToString:MessageKey]) {
			_message = [paramArray lastObject];
		}
		if ([[paramArray firstObject] isEqualToString:TokenAddressKey]) {
			_tokenAddress = [paramArray lastObject];
			_type = SendInfoItemTypeToken;
		}
	}

	return YES;
}

- (NSString *)stringByItem {

	NSMutableString *string = [NSMutableString new];

	if (self.recryptAddress) {
		[string appendString:[NSString stringWithFormat:@"%@:%@?", RecryptAddressKey, self.recryptAddress]];
	} else {
		return nil;
	}

	if (self.amountString && self.amountString.length > 0) {
		[string appendString:[NSString stringWithFormat:@"%@=%@&", AmountKey, self.amountString]];
	}

	if (self.label) {
		[string appendString:[NSString stringWithFormat:@"%@=%@&", LabelKey, self.label]];
	}

	if (self.message) {
		[string appendString:[NSString stringWithFormat:@"%@=%@&", MessageKey, self.message]];
	}

	if (self.tokenAddress) {
		[string appendString:[NSString stringWithFormat:@"%@=%@&", TokenAddressKey, self.tokenAddress]];
	}

	[string replaceCharactersInRange:NSMakeRange (string.length - 1, 1) withString:@""];

	return string;
}

@end
