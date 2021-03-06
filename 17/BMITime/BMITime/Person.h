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

@property float heightInMeters;
@property int weightInKilos;

- (float)bodyMassIndex;

@end
