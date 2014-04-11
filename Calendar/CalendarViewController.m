//
//  CalendarViewController.m
//  Calendar
//
//  Created by Ole Begemann on 29.07.13.
//  Copyright (c) 2013 Ole Begemann. All rights reserved.
//

#import "CalendarViewController.h"
#import "CalendarDataSource.h"
#import "HeaderView.h"

@implementation CalendarViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    // Register NIB for supplementary views
    UINib *headerViewNib = [UINib nibWithNibName:@"HeaderView" bundle:nil];
    [self.collectionView registerNib:headerViewNib forSupplementaryViewOfKind:@"DayHeaderView" withReuseIdentifier:@"HeaderView"];
    [self.collectionView registerNib:headerViewNib forSupplementaryViewOfKind:@"HourHeaderView" withReuseIdentifier:@"HeaderView"];
    
    // Define cell and header view configuration
    CalendarDataSource *dataSource = (CalendarDataSource *)self.collectionView.dataSource;
    dataSource.configureCellBlock = ^(CalendarEventCell *cell, NSIndexPath *indexPath, id<CalendarEvent> event) {
        cell.titleLabel.text = event.title;
    };
    dataSource.configureHeaderViewBlock = ^(HeaderView *headerView, NSString *kind, NSIndexPath *indexPath) {
        if ([kind isEqualToString:@"DayHeaderView"]) {
            headerView.titleLabel.text = [NSString stringWithFormat:@"Day %d", indexPath.item + 1];
        } else if ([kind isEqualToString:@"HourHeaderView"]) {
            headerView.titleLabel.text = [NSString stringWithFormat:@"%2d:00", indexPath.item + 1];
        }
    };
}

@end
