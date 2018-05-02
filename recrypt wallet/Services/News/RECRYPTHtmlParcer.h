//
//  RECRYPTHtmlParcer.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 19.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RECRYPTHTMLTagItem.h"
#import "Cancelable.h"

typedef void(^RECRYPTTagsItems)(NSArray <RECRYPTHTMLTagItem *> *feeds);

@interface RECRYPTHtmlParcer : NSObject <Cancelable>

- (void)parceNewsFromHTMLString:(NSString *) html withCompletion:(RECRYPTTagsItems) completion;

@end
