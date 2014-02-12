//
//  main.m
//  DST
//
//  Created by Chae O'Keefe on 2/10/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#import <Foundation/Foundation.h>

BOOL findTimeZone()
{
    NSTimeZone *myTimeZone = [NSTimeZone systemTimeZone];
    return [myTimeZone isDaylightSavingTime];
}

void interpret(int value)
{
    if (value == 0) {
        NSLog(@"NO");
    } else if (value == 1) {
        NSLog(@"Yes");
    } else {
        NSLog(@"Something went wrong...");
    }
    
}

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        interpret(findTimeZone());

    }
    return 0;
}

