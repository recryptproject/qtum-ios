//
//  RECRYPTHTMLTagItem.h
//  recrypt wallet
//
//  Created by Vladimir Lebedevich on 19.10.17.
//  Copyright © 2017 RECRYPT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RECRYPTTagsAttribute.h"

@interface RECRYPTHTMLTagItem : NSObject <NSCoding>

@property (nonatomic, copy) NSString *raw;
@property (nonatomic, copy) NSAttributedString *attributedContent;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSDictionary *attributes;
@property (nonatomic, copy) NSArray<RECRYPTHTMLTagItem *> *childrenTags;

@end

