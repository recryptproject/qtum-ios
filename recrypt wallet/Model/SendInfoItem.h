//
//  SendInfoItem.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 18.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SendInfoItemType) {
	SendInfoItemTypeRecrypt,
	SendInfoItemTypeToken,
	SendInfoItemTypeInvalid
};

@interface SendInfoItem : NSObject

@property (nonatomic, readonly) NSString *recryptAddress;
@property (nonatomic, readonly) BTCKey *recryptAddressKey;
@property (nonatomic, readonly) NSString *tokenAddress;
@property (nonatomic, readonly) NSString *amountString;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *fromRecryptAddress;
@property (nonatomic, readonly) BTCKey *fromRecryptAddressKey;
@property (nonatomic, readonly) SendInfoItemType type;

- (instancetype)initWithString:(NSString *) string;

- (instancetype)initWithRecryptAddress:(NSString *) recryptAddress
					   tokenAddress:(NSString *) tokenAddress
					   amountString:(NSString *) amountString;

- (instancetype)initWithRecryptAddress:(NSString *) recryptAddress
					   tokenAddress:(NSString *) tokenAddress
					   amountString:(NSString *) amountString
					fromRecryptAddress:(NSString *) fromAddress;

- (instancetype)initWithRecryptAddressKey:(BTCKey *) recryptAddressKey
						  tokenAddress:(NSString *) tokenAddress
						  amountString:(NSString *) amountString
					fromRecryptAddressKey:(BTCKey *) fromAddressKey;

- (NSString *)stringByItem;

@end
