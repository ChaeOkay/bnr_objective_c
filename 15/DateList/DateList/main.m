//
//  main.m
//  DateList
//
//  Created by Chae O'Keefe on 2/23/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        // Create three NSDate objects
        NSDate *now = [NSDate date];
        NSDate *tomorrow = [now dateByAddingTimeInterval:24.0 * 60.0 * 60.0];
        NSDate *yesterday = [now dateByAddingTimeInterval:-24.0 * 60.0 * 60.0];
        
        // Create an empty array
        NSMutableArray *dateList = [NSMutableArray array];
        
        // Add the dates to the array
        [dateList addObject:now];
        [dateList addObject:tomorrow];
        
        // Put yesterday at beginning of the list
        [dateList insertObject:yesterday atIndex:0];
        
        for (NSDate *d in dateList) {
            NSLog(@"Here is the date: %@", d);
        }
        
        // Remove yesterday
        [dateList removeObjectAtIndex:0];
        NSLog(@"Now the first dateis: %@", [dateList objectAtIndex:0]);
        
    }
    return 0;
}

