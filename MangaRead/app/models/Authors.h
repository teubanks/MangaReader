//
//  Authors.h
//  MangaRead
//
//  Created by tracey eubanks on 8/5/12.
//  Copyright (c) 2012 tracey eubanks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Titles;

@interface Authors : NSManagedObject

@property (nonatomic, retain) NSString * authorName;
@property (nonatomic, retain) NSSet *authorTitles;
@end

@interface Authors (CoreDataGeneratedAccessors)

- (void)addAuthorTitlesObject:(Titles *)value;
- (void)removeAuthorTitlesObject:(Titles *)value;
- (void)addAuthorTitles:(NSSet *)values;
- (void)removeAuthorTitles:(NSSet *)values;

@end
