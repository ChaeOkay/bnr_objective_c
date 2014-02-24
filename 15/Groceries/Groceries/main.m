//
//  main.m
//  Groceries
//
//  Created by Chae O'Keefe on 2/23/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#import <Foundation/Foundation.h>

void display(NSMutableArray *collection) {
    for (NSString *item in collection){
        NSLog(@"%lu. %@", [collection indexOfObject:item] + 1, item);
    }
}

void addItemToList(NSMutableArray *collection, NSString *item){
    [collection addObject:item];
}

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        // insert code here...
        NSMutableArray *groceries = [NSMutableArray array];
        
        NSString *quinoa = @"Quinoa";
        NSString *edamame = @"Edamame";
        NSString *roobois = @"Roobois";
        
        [groceries addObject:quinoa];
        [groceries addObject:edamame];
        [groceries addObject:roobois];
        
        display(groceries);
        
    }
    return 0;
}

