//
//  main.m
//  BMITime
//
//  Created by Chae O'Keefe on 3/10/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        // instance of Person
        Person *person = [[Person alloc] init];
        
        // Give the instance varibables values
        [person setWeightInKilos:96];
        [person setHeightInMeters:1.8];
        
        // Call the bodyMassIndex method
        float bmi = [person bodyMassIndex];
        NSLog(@"person (%d, %f) has a BMI of %f",
              [person weightInKilos], [person heightInMeters], bmi);
        
    }
    return 0;
}

