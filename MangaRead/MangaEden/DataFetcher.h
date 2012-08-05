//
//  DataFetcher.h
//  MangaRead
//
//  Created by tracey eubanks on 8/5/12.
//  Copyright (c) 2012 tracey eubanks. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataFetcher : NSObject
@property (atomic, readonly) NSString *APIURL;
-(id)init;
-(NSDictionary *)mangaList;
@end
