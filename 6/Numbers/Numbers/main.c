//
//  main.c
//  Numbers
//
//  Created by Chae O'Keefe on 2/8/14.
//  Copyright (c) 2014 com.chaeokay. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int x = 255;
    printf("x is %d.\n", x);
    printf("In octal, x is %o.\n", x);
    printf("In hexadecimal, x is %x.\n\n", x);
    
    long longX = 255;
    printf("longX is %ld.\n", longX);
    printf("In octal, longX is %lo.\n", longX);
    printf("In hexidecimal, longX is %lx.\n\n", longX);
    
    unsigned long unsignedLongX = 255;
    printf("unsignedLongX is %lu.\n", unsignedLongX);
    
    // Octal and hex already assumed the number was unsigned
    printf("In octal, unsignedLongX is %lo.\n", unsignedLongX);
    printf("In hexidecimal, unsignedLongX is %lx.\n\n", unsignedLongX);
    
    return 0;
}

