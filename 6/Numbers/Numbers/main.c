//
//  main.c
//  Numbers
//
//  Created by Chae O'Keefe on 2/8/14.
//  Copyright (c) 2014 com.chaeokay. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    printf("3 * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2);
    printf("11 / 3 = %d remainder of %d \n", 11 / 3, 11 % 3);
    printf("11 / 3.0 = %f\n", 11 / (float)3);
    
    int x = 5;
    printf("5 + 5 using the shorthand += operator is %d\n", x += 5);
    
    printf("The absolute value of -5 is %d\n", abs(-5));
    
    return 0;
}

