//
//  RECRYPTBigNumber.m
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 30.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "JKBigDecimal+Comparison.h"
#import "JKBigDecimal+Format.h"
#import "NSNumber+Comparison.h"

@interface RECRYPTBigNumber ()

@property (copy, nonatomic) NSString *stringNumberValue;
@property (strong, nonatomic) JKBigDecimal *decimalContainer;

@end

@implementation RECRYPTBigNumber

- (instancetype)initWithString:(NSString *) string {

	self = [super init];

	if (self) {

		NSString *formattedString = [string stringByReplacingOccurrencesOfString:@"," withString:@"."];
		_stringNumberValue = formattedString;
		_decimalContainer = [[JKBigDecimal alloc] initWithString:formattedString];
	}
	return self;
}

- (instancetype)initWithInteger:(NSInteger) integer {

	NSString *intString = [NSString stringWithFormat:@"%li", (long)integer];
	return [self initWithString:intString];
}

#pragma mark - Custom Accessors

- (JKBigInteger *)bigInteger {
	return self.decimalContainer.bigInteger;
}

- (NSUInteger)figure {
	return self.decimalContainer.figure;
}

- (NSInteger)integerValue {

	return (NSInteger)[self.decimalNumber doubleValue];
}


#pragma mark - Public

+ (instancetype)decimalWithString:(NSString *) string {

	RECRYPTBigNumber *decimal = [[RECRYPTBigNumber alloc] initWithString:string];
	return decimal;
}

+ (instancetype)decimalWithInteger:(NSInteger) integer {

    NSString *intString = [NSString stringWithFormat:@"%li", (long)integer];
	RECRYPTBigNumber *decimal = [[RECRYPTBigNumber alloc] initWithString:intString];
	return decimal;
}


- (instancetype)add:(RECRYPTBigNumber *) bigDecimal {

	NSDecimalNumber *resDecimal = [[self.decimalContainer decimalNumber] decimalNumberByAdding:[bigDecimal decimalNumber]];
	RECRYPTBigNumber *res = [RECRYPTBigNumber decimalWithString:resDecimal.stringValue];
	return res;
}

- (instancetype)subtract:(RECRYPTBigNumber *) bigDecimal {

	NSDecimalNumber *resDecimal = [[self.decimalContainer decimalNumber] decimalNumberBySubtracting:[bigDecimal decimalNumber]];
	RECRYPTBigNumber *res = [RECRYPTBigNumber decimalWithString:resDecimal.stringValue];
	return res;
}

- (instancetype)multiply:(RECRYPTBigNumber *) bigDecimal {

	NSDecimalNumber *resDecimal = [[self.decimalContainer decimalNumber] decimalNumberByMultiplyingBy:[bigDecimal decimalNumber]];
	RECRYPTBigNumber *res = [RECRYPTBigNumber decimalWithString:resDecimal.stringValue];
	return res;
}

- (instancetype)divide:(RECRYPTBigNumber *) bigDecimal {

	NSDecimalNumber *resDecimal = [[self.decimalContainer decimalNumber] decimalNumberByDividingBy:[bigDecimal decimalNumber]];
	RECRYPTBigNumber *res = [RECRYPTBigNumber decimalWithString:resDecimal.stringValue];
	return res;
}

- (instancetype)remainder:(RECRYPTBigNumber *) bigInteger {

	JKBigDecimal *resDecimal = [self.decimalContainer remainder:bigInteger.decimalContainer];
	RECRYPTBigNumber *res = [RECRYPTBigNumber decimalWithString:resDecimal.stringValue];
	return res;
}

- (NSComparisonResult)compare:(RECRYPTBigNumber *) other {
	return [self.decimalContainer compare:other.decimalContainer];
}

- (instancetype)pow:(unsigned int) exponent {
	return [self pow:exponent];
}

- (instancetype)negate {
	return [self.decimalContainer negate];
}

- (instancetype)abs {
	return [self.decimalContainer abs];
}

- (NSString *)stringValue {
	return _stringNumberValue;
}

- (NSString *)description {
	return [self.decimalContainer description];
}

- (BTCAmount)satoshiAmountValue {

	RECRYPTBigNumber *amountMultiplyNumber = [[RECRYPTBigNumber alloc] initWithInteger:BTCCoin];
	BTCAmount amount = [self multiply:amountMultiplyNumber].integerValue;
	return amount;
}

- (NSInteger)recryptAmountValue {

	RECRYPTBigNumber *amountMultiplyNumber = [[RECRYPTBigNumber alloc] initWithInteger:BTCCoin];
	NSInteger amount = [self divide:amountMultiplyNumber].integerValue;
	return amount;
}

#pragma  mark - NSCoder

- (void)encodeWithCoder:(NSCoder *) aCoder {

	[aCoder encodeObject:self.stringNumberValue forKey:@"stringNumberValue"];
	[aCoder encodeObject:self.decimalContainer forKey:@"decimalContainer"];
}

- (nullable instancetype)initWithCoder:(NSCoder *) aDecoder {

	NSString *stringNumberValue = [aDecoder decodeObjectForKey:@"stringNumberValue"];
	JKBigDecimal *decimalContainer = [aDecoder decodeObjectForKey:@"decimalContainer"];

	self = [super init];

	if (self) {

		_stringNumberValue = stringNumberValue;
		_decimalContainer = decimalContainer;
	}

	return self;
}

@end


@implementation RECRYPTBigNumber (Comparison)

- (BOOL)isLessThan:(RECRYPTBigNumber *) decimalNumber {
	return [self.decimalContainer compare:decimalNumber.decimalContainer] == NSOrderedAscending;
}

- (BOOL)isLessThanOrEqualTo:(RECRYPTBigNumber *) decimalNumber {
	return [self.decimalContainer compare:decimalNumber.decimalContainer] != NSOrderedDescending;
}

- (BOOL)isGreaterThan:(RECRYPTBigNumber *) decimalNumber {
	return [self.decimalContainer compare:decimalNumber.decimalContainer] == NSOrderedDescending;
}

- (BOOL)isGreaterThanOrEqualTo:(RECRYPTBigNumber *) decimalNumber {
	return [self.decimalContainer compare:decimalNumber.decimalContainer] != NSOrderedAscending;
}

- (BOOL)isEqualToDecimalNumber:(RECRYPTBigNumber *) decimalNumber {

	return [self.decimalContainer compare:decimalNumber.decimalContainer] == NSOrderedSame;
}

- (NSComparisonResult)compareWithInt:(int) i {

	return [self.decimalContainer compare:[[JKBigDecimal alloc] initWithString:[NSString stringWithFormat:@"%i", i]]];
}

- (BOOL)isEqualToInt:(int) i {
	return [self compareWithInt:i] == NSOrderedSame;
}

- (BOOL)isGreaterThanInt:(int) i {
	return [self compareWithInt:i] == NSOrderedDescending;
}

- (BOOL)isGreaterThanOrEqualToInt:(int) i {
	return [self isGreaterThanInt:i] || [self isEqualToInt:i];
}

- (BOOL)isLessThanInt:(int) i {
	return [self compareWithInt:i] == NSOrderedAscending;
}

- (BOOL)isLessThanOrEqualToInt:(int) i {
	return [self isLessThanInt:i] || [self isEqualToInt:i];
}

#pragma mark - Converting

- (NSDecimalNumber *)decimalNumber {

	return [self.decimalContainer decimalNumber];
}

- (RECRYPTBigNumber* )roundedNumberWithScale:(NSInteger) scale {
    
    NSDecimalNumber* number = [[NSDecimalNumber alloc] initWithString:self.stringValue];
    number = [number roundedNumberWithScale:scale];
    
	return [RECRYPTBigNumber decimalWithString:number.stringValue];
}

@end

@implementation RECRYPTBigNumber (Format)

- (NSString *)shortFormatOfNumberWithPowerOfMinus10:(RECRYPTBigNumber *) power {

	if (power) {
		BTCMutableBigNumber *btcNumber = [[[BTCMutableBigNumber alloc] initWithDecimalString:power.stringValue] multiply:[BTCBigNumber negativeOne]];
		return [self shortFormatOfNumberWithAddedPower:btcNumber];
	}
	return [self shortFormatOfNumber];
}

- (NSString *)shortFormatOfNumberWithPowerOf10:(RECRYPTBigNumber *) power {

	if (power) {
		BTCBigNumber *btcNumber = [[BTCBigNumber alloc] initWithDecimalString:power.stringValue];
		return [self shortFormatOfNumberWithAddedPower:[btcNumber copy]];
	}
	return [self shortFormatOfNumber];
}

- (RECRYPTBigNumber *)numberWithPowerOfMinus10:(RECRYPTBigNumber *) power {

	JKBigDecimal *bigDecimal = [self.decimalContainer numberWithPowerOfMinus10:power.decimalContainer];
	return [RECRYPTBigNumber decimalWithString:bigDecimal.stringValue];
}

- (RECRYPTBigNumber *)numberWithPowerOf10:(RECRYPTBigNumber *) power {

	JKBigDecimal *bigDecimal = [self.decimalContainer numberWithPowerOf10:power.decimalContainer];
	return [RECRYPTBigNumber decimalWithString:bigDecimal.stringValue];

}

- (NSString *)stringNumberWithPowerOfMinus10:(RECRYPTBigNumber *) power {

	NSString *value = self.stringValue;
	NSInteger valueCount = self.decimalContainer.bigInteger.stringValue.length;
	NSInteger reduceDigits = power.integerValue;

	if ([self.stringValue isEqualToString:@"0"]) {
		return self.stringValue;
	}

	if ((reduceDigits - valueCount) > 255) {
		return [self shortFormatOfNumber];
	}

	NSString *result;
	NSInteger integerDigitsAfter = valueCount - reduceDigits;

	if (integerDigitsAfter > 0) {

		NSMutableString *temp = [value mutableCopy];
		NSRange pointRange = [temp rangeOfString:@"."];

		if (pointRange.location == NSNotFound) {
			pointRange = NSMakeRange (valueCount, 1);
		}

		temp = [[temp stringByReplacingOccurrencesOfString:@"." withString:@""] mutableCopy];

		[temp insertString:@"." atIndex:pointRange.location - power.integerValue];


		NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"([\\.])?0{0,}$" options:0 error:NULL];
		result = [regex stringByReplacingMatchesInString:temp options:0 range:NSMakeRange (0, [temp length]) withTemplate:@""];
	} else {
		NSString *zeroString = @"0.";

		for (int i = 0; i < integerDigitsAfter * -1; i++) {
			zeroString = [zeroString stringByAppendingString:@"0"];
		}

		result = [zeroString stringByAppendingString:[value stringByReplacingOccurrencesOfString:@"." withString:@""]];
	}

	return result;
}

NSString *removeLastZerosInRealNumber(NSString *inputString) {

	NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"([\\.])?0+$" options:0 error:NULL];
	inputString = [regex stringByReplacingMatchesInString:inputString options:0 range:NSMakeRange (0, [inputString length]) withTemplate:@""];

	return inputString;
}

- (NSString *)stringNumberWithPowerOf10:(RECRYPTBigNumber *) power {


	return [self.decimalContainer stringNumberWithPowerOf10:power.decimalContainer];
}

- (NSString *)shortFormatOfNumber {

	BTCBigNumber *btcNumber = [[BTCBigNumber alloc] initWithDecimalString:@"0"];
	return [self shortFormatOfNumberWithAddedPower:btcNumber];
}

- (NSString *)shortFormatOfNumberWithAddedPower:(BTCBigNumber *) power {

	NSString *inputString = self.stringValue;

	if ([inputString isEqualToString:@"0"]) {
		return inputString;
	}

	float value;
	BOOL isNegativeFormat = NO;
	BTCMutableBigNumber *lenght = [[BTCMutableBigNumber alloc] initWithUInt32:0];

	//used regex
	NSRegularExpression *twoPartOfDecimal = [NSRegularExpression regularExpressionWithPattern:@"[0-9]+" options:0 error:NULL];
	NSRegularExpression *firstDigitsFromStringWithPoinRegex = [NSRegularExpression regularExpressionWithPattern:@"[0-9.]{1,5}" options:0 error:NULL];
	NSRegularExpression *firstFourDigitsFromStringPoinRegex = [NSRegularExpression regularExpressionWithPattern:@"[0-9]{1,4}" options:0 error:NULL];
	NSRegularExpression *decimalValueToFirstNonZeroRegex = [NSRegularExpression regularExpressionWithPattern:@"[^1-9]*[0-9]" options:0 error:NULL];
	NSRegularExpression *intValueFromDecimalPartRegex = [NSRegularExpression regularExpressionWithPattern:@"[0]{0,}([0-9]+)" options:0 error:NULL];

	NSArray<NSTextCheckingResult *> *matches = [twoPartOfDecimal matchesInString:inputString options:0 range:NSMakeRange (0, inputString.length)];

	//bail if no matching
	if (matches.count == 0) {
		return @"0";
	}

	//geting first 3 digits of decimal maybe with point
	NSString *integerValueString = [inputString substringWithRange:[matches[0] range]];
	NSTextCheckingResult *threeDigitMatch = [firstDigitsFromStringWithPoinRegex firstMatchInString:inputString options:0 range:NSMakeRange (0, inputString.length)];
	NSString *firstDigitsString = [inputString substringWithRange:[threeDigitMatch range]];
	value = [firstDigitsString floatValue];

	//checking if first digits of decimal greater then zero
	if (value >= 1) {

		lenght = [[[[BTCMutableBigNumber alloc] initWithUInt64:integerValueString.length] subtract:[[BTCBigNumber alloc] initWithInt32:1]] add:power];
		isNegativeFormat = NO;
	}

		//decimal less then 1 and we need to parce decimal part
	else {

		//getting string to first character (0000555000 => 00005) to determine lengh of exp
		NSString *decimalValueString = [inputString substringWithRange:[matches[1] range]];
		NSTextCheckingResult *decimalToNonZeroRes = [decimalValueToFirstNonZeroRegex firstMatchInString:decimalValueString options:0 range:NSMakeRange (0, decimalValueString.length)];
		NSString *decimalToNonZeroString = [decimalValueString substringWithRange:[decimalToNonZeroRes range]];

		//lenght must be negative, coz value less then zero
		lenght = [[[[BTCMutableBigNumber alloc] initWithUInt64:decimalToNonZeroString.length] multiply:[BTCBigNumber negativeOne]] add:power];

		//getting int value without zeros at the begining (0000555000 => 555000)
		NSTextCheckingResult *intValueFromDecimalPartRes = [intValueFromDecimalPartRegex firstMatchInString:decimalValueString options:0 range:NSMakeRange (0, decimalValueString.length)];
		NSRange intFomDecimal = [intValueFromDecimalPartRes rangeAtIndex:1];

		//getting first 4 digits from int part of decimal part, coz we can get a lot of digits (0000555012312312312300 => 5550)
		NSString *matchString = [decimalValueString substringWithRange:intFomDecimal];
		threeDigitMatch = [firstFourDigitsFromStringPoinRegex firstMatchInString:matchString options:0 range:NSMakeRange (0, matchString.length)];
		firstDigitsString = [matchString substringWithRange:[threeDigitMatch range]];

		//getting float from 4 digits
		value = [firstDigitsString floatValue];
	}

	isNegativeFormat = [lenght less:[BTCBigNumber zero]];

	//getting abs of lenght, its for making right result string
	if (isNegativeFormat) {
		lenght = [lenght multiply:[BTCBigNumber negativeOne]];
	}

	while (value >= 10.) {
		value /= 10.;
	}

	NSString *stringValue = value > (int16_t)value ?
			[NSString stringWithFormat:@"%.2f", value] :
			[NSString stringWithFormat:@"%i", (int16_t)value];

	NSString *result = [NSString stringWithFormat:@"%@E%@%@", stringValue, isNegativeFormat ? @"-" : @"+", lenght.decimalString];

	return result;
}

- (RECRYPTBigNumber *)tenInPower:(RECRYPTBigNumber *) power {

	NSString *string = [power stringValue];
	return [[[JKBigDecimal alloc] initWithString:@"10"] pow:string.intValue];
}

#pragma mark - Constants

+ (RECRYPTBigNumber*)maxBigNumberWithPowerOfTwo:(NSInteger) power isUnsigned:(BOOL) isUnsigned {
    
    NSString* value;
    
    switch (power) {
        case 256:
            value = isUnsigned ? @"115792089237316195423570985008687907853269984665640564039457584007913129639935" : @"57896044618658097711785492504343953926634992332820282019728792003956564819967";
            break;
        case 128:
            value = isUnsigned ? @"340282366920938463463374607431768211455" : @"170141183460469231731687303715884105727";
            break;
        case 96:
            value = isUnsigned ? @"79228162514264337593543950335" : @"39614081257132168796771975167";
            break;
        case 64:
            value = isUnsigned ? @"18446744073709551615" : @"9223372036854775807";
            break;
        case 48:
            value = isUnsigned ? @"281474976710655" : @"140737488355327";
            break;
        case 32:
            value = isUnsigned ? @"4294967295" : @"2147483647";
            break;
        case 24:
            value = isUnsigned ? @"16777215" : @"8388607";
            break;
        case 16:
            value = isUnsigned ? @"65535" : @"32767";
            break;
        case 8:
            value = isUnsigned ? @"255" : @"127";
            break;
        case 4:
            value = isUnsigned ? @"15" : @"7";
            break;
        default:
            value = isUnsigned ? @"18446744073709551615" : @"9223372036854775807";
            break;
    }
    
    return [RECRYPTBigNumber decimalWithString:value];
}

#pragma mark - Description

- (NSString *)description {
    
    return [self stringValue];
}

@end

