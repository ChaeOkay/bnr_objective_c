//
//  main.c
//  PBR
//
//  Created by Chae O'Keefe on 2/8/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    double pi = 3.14;
    double integerPart;
    double fractionPart;
    
    // Pass the address of integerPart as an argument
    fractionPart = modf(pi, &integerPart);
    
    // Find the value stored in integerPart
    printf("integerPart = %.0f, franctionPart = %.2f\n", integerPart, fractionPart);
    
    return 0;
}

