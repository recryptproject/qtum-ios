//
//  LanguageViewController.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 23.05.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LanguageOutput.h"
#import "Presentable.h"

@interface LanguageViewController : BaseViewController <LanguageOutput, Presentable>

@property (nonatomic, weak) id <LanguageOutputDelegate> delegate;

- (NSString *)getCellIdentifier;

@end
