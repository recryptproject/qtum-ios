//
//  WatchContractOutputDelegate.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 27.07.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol WatchContractOutputDelegate <NSObject>

- (void)didSelectChooseFromLibrary:(id) sender;

- (void)didChangeAbiText;

- (void)didPressedBack;

@end
