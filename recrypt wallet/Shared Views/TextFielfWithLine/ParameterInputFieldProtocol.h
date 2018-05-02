//
//  ParameterInputFieldProtocol.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 11.12.2017.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AbiTextFieldWithLineDelegate;
@class AbiinterfaceInput;

@protocol ParameterInputFieldProtocol <NSObject>

- (instancetype)initWithFrame:(CGRect) frame andInterfaceItem:(AbiinterfaceInput *) item;
- (BOOL)isValidParameterText;

@property (weak, nonatomic) id <AbiTextFieldWithLineDelegate> customDelegate;
@property (strong, nonatomic) AbiinterfaceInput *item;

@end
