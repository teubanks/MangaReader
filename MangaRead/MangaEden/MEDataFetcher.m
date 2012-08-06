//
//  DataFetcher.m
//  MangaRead
//
//  Created by tracey eubanks on 8/5/12.
//  Copyright (c) 2012 tracey eubanks. All rights reserved.
//

#import "MEDataFetcher.h"

@implementation MEDataFetcher

@synthesize APIURL = _APIURL;
-(id)init {
  self = [super init];
  if(self)
    _APIURL = @"http://www.mangaeden.com/api";
  return(self);
}

-(NSDictionary *)mangaList {
  NSString *urlPath = [self.APIURL stringByAppendingString:@"/list/0/"];
  NSURL *listUrl = [[NSURL alloc] initWithString:urlPath];
  NSData *listData = [[NSData alloc] initWithContentsOfURL:listUrl];
  NSError *error;
  NSDictionary *parsedList =  [NSJSONSerialization JSONObjectWithData:listData options:NSJSONReadingAllowFragments error:&error];
  return parsedList;
}
@end
