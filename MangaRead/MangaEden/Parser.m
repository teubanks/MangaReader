//
//  Parser.m
//  MangaRead
//
//  Created by tracey eubanks on 8/5/12.
//  Copyright (c) 2012 tracey eubanks. All rights reserved.
//

#import "Parser.h"

@implementation Parser
@synthesize fetcher = _fetcher;

-(id)init {
  self = [super init];
  if(self) {
    _fetcher = [[DataFetcher alloc] init];
  }
  return(self);
}

-(NSDictionary *)parseMangaList {
  NSDictionary *listDictionary = [self.fetcher mangaList];
  return listDictionary;
}
@end
