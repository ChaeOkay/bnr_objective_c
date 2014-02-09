//
//  main.m
//  Alive
//
//  Created by Chae O'Keefe on 2/9/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSDateComponents *comps = [[NSDateComponents alloc] init];
        [comps setYear:1983];
        [comps setMonth:6];
        [comps setDay:7];
        
        NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSGregorianCalendar];
        NSDate *dateOfBirth = [g dateFromComponents:comps];
        NSDate *now = [NSDate date];
    
        double d = [now timeIntervalSinceDate:dateOfBirth];
        
        NSLog(@"I have been alive %f many seconds", d);
        
    }
    return 0;
}

