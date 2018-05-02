//
//  HistoryItemOutput.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 11.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "HistoryItemOutputDelegate.h"

@class HistoryElement;

@protocol HistoryItemOutput <NSObject>

@property (strong, nonatomic) HistoryElement *item;
@property (weak, nonatomic) id <HistoryItemOutputDelegate> delegate;

@end
