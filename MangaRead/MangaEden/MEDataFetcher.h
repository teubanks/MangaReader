//
//  DataFetcher.h
//  MangaRead
//
//  Created by tracey eubanks on 8/5/12.
//  Copyright (c) 2012 tracey eubanks. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MEDataFetcher : NSObject
@property (atomic, readonly) NSString *APIURL;
-(id)init;
-(NSDictionary *)fetchMangaList;
-(NSDictionary *)fetchMangaTitle:(NSString *)titleID;
@end
