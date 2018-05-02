//
//  WatchContractOutput.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 27.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WatchContractOutputDelegate.h"
#import "FavouriteTemplatesCollectionSourceOutput.h"

@protocol WatchContractOutput <NSObject>

@property (weak, nonatomic) id <WatchContractOutputDelegate> delegate;
@property (weak, nonatomic) id <FavouriteTemplatesCollectionSourceOutput> collectionSource;

- (void)changeStateForSelectedTemplate:(TemplateModel *) templateModel;

@end
