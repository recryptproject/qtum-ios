//
//  RECRYPTBigNumber.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 30.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JKBigDecimal.h"

@interface RECRYPTBigNumber : NSObject

@property (strong, nonatomic, readonly) JKBigDecimal *decimalContainer;

+ (instancetype)decimalWithString:(NSString *) string;

+ (instancetype)decimalWithInteger:(NSInteger) integer;

- (instancetype)initWithString:(NSString *) string;

- (instancetype)initWithInteger:(NSInteger) integer;


- (instancetype)add:(RECRYPTBigNumber *) bigDecimal;

- (instancetype)subtract:(RECRYPTBigNumber *) bigDecimal;

- (instancetype)multiply:(RECRYPTBigNumber *) bigDecimal;

- (instancetype)divide:(RECRYPTBigNumber *) bigDecimal;

- (instancetype)remainder:(RECRYPTBigNumber *) bigInteger;

- (NSComparisonResult)compare:(RECRYPTBigNumber *) other;

- (instancetype)pow:(unsigned int) exponent;

- (instancetype)negate;

- (instancetype)abs;

- (NSString *)stringValue;

- (NSInteger)integerValue;

- (NSString *)description;

- (int64_t)satoshiAmountValue;

- (NSInteger)recryptAmountValue;

@end

@interface RECRYPTBigNumber (Comparison)

- (BOOL)isLessThan:(RECRYPTBigNumber *) decimalNumber;

- (BOOL)isLessThanOrEqualTo:(RECRYPTBigNumber *) decimalNumber;

- (BOOL)isGreaterThan:(RECRYPTBigNumber *) decimalNumber;

- (BOOL)isGreaterThanOrEqualTo:(RECRYPTBigNumber *) decimalNumber;

- (BOOL)isEqualToDecimalNumber:(RECRYPTBigNumber *) decimalNumber;

- (BOOL)isEqualToInt:(int) i;

- (BOOL)isGreaterThanInt:(int) i;

- (BOOL)isGreaterThanOrEqualToInt:(int) i;

- (BOOL)isLessThanInt:(int) i;

- (BOOL)isLessThanOrEqualToInt:(int) i;

- (NSDecimalNumber *)decimalNumber;

- (RECRYPTBigNumber *)roundedNumberWithScale:(NSInteger) scale;

@end

@interface RECRYPTBigNumber (Format)

- (NSString *)shortFormatOfNumberWithPowerOfMinus10:(RECRYPTBigNumber *) power;

- (NSString *)shortFormatOfNumberWithPowerOf10:(RECRYPTBigNumber *) power;

- (RECRYPTBigNumber *)numberWithPowerOfMinus10:(RECRYPTBigNumber *) power;

- (RECRYPTBigNumber *)numberWithPowerOf10:(RECRYPTBigNumber *) power;

- (NSString *)stringNumberWithPowerOfMinus10:(RECRYPTBigNumber *) power;

- (NSString *)stringNumberWithPowerOf10:(RECRYPTBigNumber *) power;

- (NSString *)shortFormatOfNumber;

@end

@interface RECRYPTBigNumber (Constants)

+ (RECRYPTBigNumber*)maxBigNumberWithPowerOfTwo:(NSInteger) power isUnsigned:(BOOL) isUnsigned;

@end
