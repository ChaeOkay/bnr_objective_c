//
//  Person.m
//  BMITime
//
//  Created by Chae O'Keefe on 3/10/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#import "Person.h"

@implementation Person

- (float)heightInMeters
{
    return heightInMeters;
}
- (void)setHeightInMeters:(float)h
{
    heightInMeters = h;
}
- (int)weightInKilos
{
    return weightInKilos;
}
- (void)setWeightInKilos:(int)w;
{
    weightInKilos = w;
}
- (float)bodyMassIndex
{
    return weightInKilos / (heightInMeters * heightInMeters);
}

@end
