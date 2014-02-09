//
//  main.c
//  TheHeap
//
//  Created by Chae O'Keefe on 2/9/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

float bodyMassIndex(Person *p)
{
    // p->weightInKilos says "Dereference the pointer p to the structure and get me the member called weightInKiols"
    return p->weightInKilos / (p->heightInMeters * p->heightInMeters);
}

int main(int argc, const char * argv[])
{
    // Allocate memory for one Person structure
    Person *x = (Person *)malloc(sizeof(Person)); // malloc() claims space for a struct on a heap
    
    // Fill in two members of the structure
    x->weightInKilos = 81;
    x->heightInMeters = 2.0;
    
    // Print out the BMI of the original Person
    float xBMI = bodyMassIndex(x);
    printf("x has a BMI of = %f\n", xBMI);
    
    // Let the memory be recycled
    free(x);
    
    // Foreget where it was
    x = NULL;
    
    return 0;
}

