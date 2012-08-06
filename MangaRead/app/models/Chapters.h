//
//  Chapters.h
//  MangaRead
//
//  Created by tracey eubanks on 8/5/12.
//  Copyright (c) 2012 tracey eubanks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Titles.h"

@class Titles;

@interface Chapters : Titles

@property (nonatomic, retain) NSString * externalId;
@property (nonatomic, retain) NSString * chapterName;
@property (nonatomic, retain) NSNumber * number;
@property (nonatomic, retain) NSDate * dateUploaded;
@property (nonatomic, retain) Titles *chapterTitle;

@end
