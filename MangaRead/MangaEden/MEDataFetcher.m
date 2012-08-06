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

-(NSDictionary *)fetchMangaList {
  NSString *urlPath = [self.APIURL stringByAppendingString:@"/list/0/"];
  return [self runFetchRequest:urlPath];
}

-(NSDictionary *)fetchMangaTitle:(NSString *)titleID {
  NSString *urlPath = [self.APIURL stringByAppendingFormat:@"/manga/%@/", titleID];
  return [self runFetchRequest:urlPath];
}

-(NSDictionary *)runFetchRequest:(NSString *)urlPath {
  NSURL *fetchURL = [[NSURL alloc] initWithString:urlPath];
  NSData *fetchedData = [[NSData alloc] initWithContentsOfURL:fetchURL];
  NSError *error;
  NSDictionary *parsedJSON = [NSJSONSerialization JSONObjectWithData:fetchedData options:NSJSONReadingAllowFragments error:&error];
  return parsedJSON;
}
@end
