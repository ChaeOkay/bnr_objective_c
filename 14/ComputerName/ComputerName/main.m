//
//  main.m
//  ComputerName
//
//  Created by Chae O'Keefe on 2/13/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#import <Foundation/Foundation.h>

void sayComputerName()
{
    NSHost *myComputer = [NSHost currentHost];
    NSString *myComputerName = [myComputer localizedName];
    NSLog(@"My computer name is %@\n", myComputerName);
}

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        sayComputerName();
        
    }
    return 0;
}

