//
//  Parser.m
//  MangaRead
//
//  Created by tracey eubanks on 8/5/12.
//  Copyright (c) 2012 tracey eubanks. All rights reserved.
//

#import "MEParser.h"

@implementation MEParser
@synthesize fetcher = _fetcher;

-(id)init {
  self = [super init];
  if(self) {
    _fetcher = [[MEDataFetcher alloc] init];
  }
  return(self);
}

-(NSArray *)parseMangaList {
  NSDictionary *mangaTitle;
  NSDictionary *listDictionary = [self.fetcher fetchMangaList];
  NSMutableArray *mangaItems = [[NSMutableArray alloc] init];
  for (NSDictionary *mangaItem in [listDictionary objectForKey:@"manga"]) {
    mangaTitle = [self.fetcher fetchMangaTitle:[mangaItem objectForKey:@"i"]];
    NSMutableDictionary *parsedList = [[NSMutableDictionary alloc] initWithObjectsAndKeys:
                                       @"externalID",       [mangaItem objectForKey:@"i"],
                                       @"mangaName",        [mangaItem objectForKey:@"t"],
                                       @"alias",            [mangaItem objectForKey:@"a"],
                                       @"status",           [mangaTitle objectForKey:@"status"],
                                       @"titleDescription", [mangaTitle objectForKey:@"description"],
                                       nil];
    [mangaItems addObject:mangaItem];
  }
  return mangaItems;
}
@end
