//
//  main.c
//  TwoFloats
//
//  Created by Chae O'Keefe on 2/2/14.
//  Copyright (c) 2014 com.chaeokay. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // Delcare two floats
    float firstNumber;
    float secondNumber;
    
    // Assign each variable to a nubmer with a decimal point
    firstNumber = 1.11;
    secondNumber = 2.22;
    
    // Declare another variable of type double
    double total;

    // Assign the sum of the two floats
    total = firstNumber + secondNumber;
    
    // Print the results
    printf("Number %f plus %f equals %f", firstNumber, secondNumber, total);
    
    return 0;
}

