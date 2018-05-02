//
//  RECRYPTAddressTokenView.m
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 29.05.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "RECRYPTAddressTokenView.h"

@implementation RECRYPTAddressTokenView

- (IBAction)actionPlus:(id) sender {
	[self.delegate actionPlus:sender];
}

- (IBAction)actionTokenAddressControl:(id) sender {
	[self.delegate actionTokenAddressControl];
}

@end
