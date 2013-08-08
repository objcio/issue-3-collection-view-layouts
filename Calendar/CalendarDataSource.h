//
//  CalendarDataSource.h
//  Calendar
//
//  Created by Ole Begemann on 29.07.13.
//  Copyright (c) 2013 Ole Begemann. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CalendarEvent.h"
#import "CalendarEventCell.h"
#import "HeaderView.h"

typedef void (^ConfigureCellBlock)(CalendarEventCell *cell, NSIndexPath *indexPath, id<CalendarEvent> event);
typedef void (^ConfigureHeaderViewBlock)(HeaderView *headerView, NSString *kind, NSIndexPath *indexPath);

@interface CalendarDataSource : NSObject <UICollectionViewDataSource>

@property (copy, nonatomic) ConfigureCellBlock configureCellBlock;
@property (copy, nonatomic) ConfigureHeaderViewBlock configureHeaderViewBlock;

- (id<CalendarEvent>)eventAtIndexPath:(NSIndexPath *)indexPath;
- (NSArray *)indexPathsOfEventsBetweenMinDayIndex:(NSInteger)minDayIndex maxDayIndex:(NSInteger)maxDayIndex minStartHour:(NSInteger)minStartHour maxStartHour:(NSInteger)maxStartHour;

@end
