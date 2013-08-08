//
//  CalendarEvent.h
//  Calendar
//
//  Created by Ole Begemann on 29.07.13.
//  Copyright (c) 2013 Ole Begemann. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CalendarEvent <NSObject>

@property (copy, nonatomic) NSString *title;
@property (assign, nonatomic) NSInteger day;
@property (assign, nonatomic) NSInteger startHour;
@property (assign, nonatomic) NSInteger durationInHours;

@end
