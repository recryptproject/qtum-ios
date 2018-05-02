//
//  PaymentValuesManager.m
//  recrypt wallet
//
//  Created by Vladimir Sharaev on 04.10.2017.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

NSString *const PaymentValuesManagerFeeKey = @"PaymentValuesManagerFeeKey";
NSString *const PaymentValuesManagerGasPriceKey = @"PaymentValuesManagerGasPriceKey";
NSString *const PaymentValuesManagerGaslimitKey = @"PaymentValuesManagerGaslimitKey";

long const MaxFee = 1;

long const StandartGasLimitForCreateContract = 2000000;
long const StandartGasLimit = 200000;
long const MinGasLimit = 100000;
long const MinGasPrice = 40;

long const GasPriceStep = 5;
long const GasPriceStepsCount = 16;
long const GasLimitStep = 100000;
long const GasLimitStepsCount = 49;

@interface PaymentValuesManager ()

@property (nonatomic) RECRYPTBigNumber *gasPrice;
@property (nonatomic) RECRYPTBigNumber *gasLimit;
@property (nonatomic) RECRYPTBigNumber *fee;

@end

@implementation PaymentValuesManager

- (instancetype)init {

	self = [super init];
	if (self != nil) {
		_minGasLimit = [RECRYPTBigNumber decimalWithInteger:MinGasLimit];
		_minGasPrice = [RECRYPTBigNumber decimalWithInteger:MinGasPrice];
		_maxFee = [RECRYPTBigNumber decimalWithInteger:MaxFee];
		_standartGasLimit = [RECRYPTBigNumber decimalWithInteger:StandartGasLimit];
		_standartGasLimitForCreateContract = [RECRYPTBigNumber decimalWithInteger:StandartGasLimitForCreateContract];
		[self calculateMaxValues];

		[self loadLastValues];
		[self loadDGPInfo];
	}
	return self;
}

- (void)saveLastValues {
	NSUserDefaults *userDefaults = [NSUserDefaults standardUserDefaults];
	[userDefaults setObject:self.fee forKey:PaymentValuesManagerFeeKey];
	[userDefaults setObject:self.gasPrice forKey:PaymentValuesManagerGasPriceKey];
	[userDefaults setObject:self.gasLimit forKey:PaymentValuesManagerGaslimitKey];
	[userDefaults synchronize];
}

- (void)loadLastValues {

	NSUserDefaults *userDefaults = [NSUserDefaults standardUserDefaults];
	RECRYPTBigNumber *fee = [userDefaults objectForKey:PaymentValuesManagerFeeKey];
	RECRYPTBigNumber *gasPrice = [userDefaults objectForKey:PaymentValuesManagerGasPriceKey];
	RECRYPTBigNumber *gasLimit = [userDefaults objectForKey:PaymentValuesManagerGaslimitKey];

	if (fee)
		_fee = fee;
	if (gasPrice)
		_gasPrice = gasPrice;
	if (gasLimit)
		_gasLimit = gasLimit;
}

- (void)calculateMaxValues {

	_maxGasPrice = [RECRYPTBigNumber decimalWithInteger:[self.minGasPrice integerValue] + GasPriceStep * GasPriceStepsCount];
	_maxGasLimit = [RECRYPTBigNumber decimalWithInteger:[self.minGasLimit integerValue] + GasLimitStep * GasLimitStepsCount];
}

- (void)loadDGPInfo {
	__weak typeof (self) weakSelf = self;
	[SLocator.requestManager getDGPinfo:^(id responseObject) {
		NSDictionary *dictionary = (NSDictionary *)responseObject;

		NSNumber *mingasprice = [dictionary objectForKey:@"mingasprice"];
		weakSelf.minGasPrice = [RECRYPTBigNumber decimalWithString:mingasprice.stringValue];

		[weakSelf calculateMaxValues];
	}                 andFailureHandler:^(NSError *error, NSString *message) {
		DLog(@"Cannot get DGP info");
	}];
}

@end
