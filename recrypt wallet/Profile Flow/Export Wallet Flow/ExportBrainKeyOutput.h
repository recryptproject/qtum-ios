//
//  ExportBrainKeyOutput.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 10.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import "ExportBrainKeyOutputDelegate.h"

@protocol ExportBrainKeyOutput <NSObject>

@property (nonatomic, weak) id <ExportBrainKeyOutputDelegate> delegate;
@property (nonatomic, copy) NSString *brandKey;

@end
