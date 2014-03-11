//
//  Person.m
//  BMITime
//
//  Created by Chae O'Keefe on 3/10/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#import "Person.h"

@implementation Person

@synthesize heightInMeters, weightInKilos;

- (float)bodyMassIndex
{
    float h = [self heightInMeters];
    return [self weightInKilos] / (h * h);
}

@end
