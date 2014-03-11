//
//  Person.h
//  BMITime
//
//  Created by Chae O'Keefe on 3/10/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#import <Foundation/Foundation.h>

// The class Person inherits all the instance variables
// and methods defined by the class NSObject

@interface Person : NSObject
{
    // It has two instance variables
    float heightInMeters;
    int weightInKilos;
}

// You will be able to set those instance variables using these methods
- (float)heightInMeters;
- (void)setHeightInMeters:(float)h;
- (int)weightInKilos;
- (void)setWeightInKilos:(int)w;

// This method calculates the Body Mass Index
- (float)bodyMassIndex;

@end
