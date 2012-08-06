//
//  Titles.h
//  MangaRead
//
//  Created by tracey eubanks on 8/5/12.
//  Copyright (c) 2012 tracey eubanks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Titles : NSManagedObject

@property (nonatomic, retain) NSString * externalID;
@property (nonatomic, retain) NSString * mangaName;
@property (nonatomic, retain) NSString * thumbnail;
@property (nonatomic, retain) NSDate * releaseDate;
@property (nonatomic, retain) NSString * alias;
@property (nonatomic, retain) NSNumber * status;
@property (nonatomic, retain) NSString * titleDescription;
@property (nonatomic, retain) NSSet *titleChapter;
@property (nonatomic, retain) NSSet *titleCategory;
@property (nonatomic, retain) NSSet *titleAuthors;
@end

@interface Titles (CoreDataGeneratedAccessors)

- (void)addTitleChapterObject:(NSManagedObject *)value;
- (void)removeTitleChapterObject:(NSManagedObject *)value;
- (void)addTitleChapter:(NSSet *)values;
- (void)removeTitleChapter:(NSSet *)values;

- (void)addTitleCategoryObject:(NSManagedObject *)value;
- (void)removeTitleCategoryObject:(NSManagedObject *)value;
- (void)addTitleCategory:(NSSet *)values;
- (void)removeTitleCategory:(NSSet *)values;

- (void)addTitleAuthorsObject:(NSManagedObject *)value;
- (void)removeTitleAuthorsObject:(NSManagedObject *)value;
- (void)addTitleAuthors:(NSSet *)values;
- (void)removeTitleAuthors:(NSSet *)values;

@end
