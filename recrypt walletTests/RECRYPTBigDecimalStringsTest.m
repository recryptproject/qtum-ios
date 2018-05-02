//
//  RECRYPTBigDecimalStringsTest.m
//  recrypt walletTests
//
//  Created by Vladimir Lebedevich on 04.11.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "RECRYPTBigNumber.h"

@interface RECRYPTBigDecimalStringsTest : XCTestCase

@end

@implementation RECRYPTBigDecimalStringsTest

- (void)testShortStringDecimal1 {

	RECRYPTBigNumber *decimal = [RECRYPTBigNumber decimalWithString:@"400000000.6780"];

	NSString *result = [decimal shortFormatOfNumber];

	XCTAssertTrue([result isEqualToString:@"4E+8"]);
}

- (void)testShortStringDecimal2 {

	RECRYPTBigNumber *decimal = [RECRYPTBigNumber decimalWithString:@"4.678000000000000000000"];

	NSString *result = [decimal shortFormatOfNumber];

	XCTAssertTrue([result isEqualToString:@"4.68E+0"]);
}

- (void)testShortStringDecimal3 {

	RECRYPTBigNumber *decimal = [RECRYPTBigNumber decimalWithString:@"0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000678000000000000000000"];

	NSString *result = [decimal shortFormatOfNumber];

	XCTAssertTrue([result isEqualToString:@"6.78E-151"]);
}

- (void)testShortStringDecimal4 {

	RECRYPTBigNumber *decimal = [RECRYPTBigNumber decimalWithString:@"0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000678000000000000000000"];

	NSString *result = [decimal shortFormatOfNumber];

	XCTAssertTrue([result isEqualToString:@"6.78E-301"]);
}

- (void)testShortStringDecimal5 {

	RECRYPTBigNumber *decimal = [RECRYPTBigNumber decimalWithString:@"0.5"];
	RECRYPTBigNumber *power = [RECRYPTBigNumber decimalWithString:@"-501"];

	NSString *result = [decimal shortFormatOfNumberWithPowerOf10:power];

	XCTAssertTrue([result isEqualToString:@"5E-502"]);
}

- (void)testShortStringDecimal6 {

	RECRYPTBigNumber *decimal = [RECRYPTBigNumber decimalWithString:@"0.5"];
	RECRYPTBigNumber *power = [RECRYPTBigNumber decimalWithString:@"501"];

	NSString *result = [decimal shortFormatOfNumberWithPowerOf10:power];

	XCTAssertTrue([result isEqualToString:@"5E+500"]);
}

- (void)testShortStringDecimal7 {

	RECRYPTBigNumber *decimal = [RECRYPTBigNumber decimalWithString:@"5"];
	RECRYPTBigNumber *power = [RECRYPTBigNumber decimalWithString:@"1024"];

	NSString *result = [decimal shortFormatOfNumberWithPowerOf10:power];

	XCTAssertTrue([result isEqualToString:@"5E+1024"]);
}

- (void)testShortStringDecimal8 {

	RECRYPTBigNumber *decimal = [RECRYPTBigNumber decimalWithString:@"5000000000000"];
	RECRYPTBigNumber *power = [RECRYPTBigNumber decimalWithString:@"1024"];

	NSString *result = [decimal shortFormatOfNumberWithPowerOf10:power];

	XCTAssertTrue([result isEqualToString:@"5E+1036"]);
}

- (void)testShortStringDecimal9 {

	RECRYPTBigNumber *decimal = [RECRYPTBigNumber decimalWithString:@"5"];
	RECRYPTBigNumber *power = [RECRYPTBigNumber decimalWithString:@"10000000000000000"];

	NSString *result = [decimal shortFormatOfNumberWithPowerOf10:power];

	XCTAssertTrue([result isEqualToString:@"5E+10000000000000000"]);
}

- (void)testShortStringDecimal10 {

	RECRYPTBigNumber *decimal = [RECRYPTBigNumber decimalWithString:@"5"];
	RECRYPTBigNumber *power = [RECRYPTBigNumber decimalWithString:@"9223372036854775808"];

	NSString *result = [decimal shortFormatOfNumberWithPowerOf10:power];

	XCTAssertTrue([result isEqualToString:@"5E+9223372036854775808"]);
}


- (void)testShortStringDecimal11 {

	RECRYPTBigNumber *decimal = [RECRYPTBigNumber decimalWithString:@"12351354256346345"];

	NSString *result = [decimal shortFormatOfNumber];

	XCTAssertTrue([result isEqualToString:@"1.24E+16"]);
}

@end
