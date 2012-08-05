//
//  Parser.h
//  MangaRead
//
//  Created by tracey eubanks on 8/5/12.
//  Copyright (c) 2012 tracey eubanks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataFetcher.h"

@interface Parser : NSObject
@property (nonatomic, retain) DataFetcher *fetcher;
-(id)init;
-(NSDictionary *)parseMangaList;
@end
