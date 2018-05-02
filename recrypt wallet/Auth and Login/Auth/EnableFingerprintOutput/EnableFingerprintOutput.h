//
//  EnableFingerprintOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 10.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EnableFingerprintOutputDelegate.h"

@protocol EnableFingerprintOutput <NSObject>

@property (weak, nonatomic) id <EnableFingerprintOutputDelegate> delegate;

@end
