//
//  main.c
//  BMICalc
//
//  Created by Chae O'Keefe on 2/8/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#include <stdio.h>

// Here is the declaration of the struct Person
struct Person {
    float heightInMeters;
    int weightInKilos;
};

int main(int argc, const char * argv[])
{
    struct Person person;
    person.weightInKilos = 96;
    person.heightInMeters = 1.8;
    printf("person weighs %i kilograms\n", person.weightInKilos);
    printf("person is %.2f meters tall\n", person.heightInMeters);
    
    return 0;
}

