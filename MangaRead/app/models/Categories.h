//
//  Categories.h
//  MangaRead
//
//  Created by tracey eubanks on 8/5/12.
//  Copyright (c) 2012 tracey eubanks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Titles;

@interface Categories : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *categoryTitles;
@end

@interface Categories (CoreDataGeneratedAccessors)

- (void)addCategoryTitlesObject:(Titles *)value;
- (void)removeCategoryTitlesObject:(Titles *)value;
- (void)addCategoryTitles:(NSSet *)values;
- (void)removeCategoryTitles:(NSSet *)values;

@end
