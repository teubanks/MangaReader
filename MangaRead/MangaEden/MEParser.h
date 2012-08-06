//
//  Parser.h
//  MangaRead
//
//  Created by tracey eubanks on 8/5/12.
//  Copyright (c) 2012 tracey eubanks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MEDataFetcher.h"

@interface MEParser : NSObject
@property (nonatomic, retain) MEDataFetcher *fetcher;
-(id)init;
-(NSDictionary *)parseMangaList;
@end
