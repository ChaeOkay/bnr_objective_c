//
//  main.c
//  Coolness
//
//  Created by Chae O'Keefe on 2/8/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#include <stdio.h>

void sayNumber(int i)
{
    printf("%d\n", i);
}

void multipleOfFive()
{
    printf("Found one!\n");
}

int main(int argc, const char * argv[])
{
    for (int i = 99; i >= 0; i--) {
        if (i % 3 != 0 ){
            continue;
        }
        
        sayNumber(i);
        
        if (i % 5 == 0) {
            multipleOfFive();
        }
    }
}

