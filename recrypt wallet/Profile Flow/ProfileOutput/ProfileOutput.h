//
//  ProfileOutput.h
//  recrypt wallet
//
//  Created by Sharaev Vladimir on 07.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProfileOutputDelegate.h"

@protocol ProfileOutput <NSObject>

@property (nonatomic, weak) id <ProfileOutputDelegate> delegate;

@end
