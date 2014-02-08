//
//  main.c
//  Addresses
//
//  Created by Chae O'Keefe on 2/8/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 17;
    int *addressOfI = &i;
    printf("i stores its value at %p\n", addressOfI);
    printf("this function starts at %p\n", main);
    printf("the int stored at addressOfI is %d\n", *addressOfI);
    
    *addressOfI = 2;
    printf("Now i is %d\n", i);
    
    printf("An int is %zu bytes\n", sizeof(int));
    printf("A pointer is %zu bytes\n", sizeof(int *));
    
    printf("Another way to write an int is %zu bytes\n", sizeof(i));
    printf("Another way to write a pointer is %zu bytes\n", sizeof(addressOfI));
    
    float *myPointer;
    myPointer = NULL; // NULL is zero
    
    if (myPointer) {
        printf("myPointer is pointing to something.\n");
    } else {
        printf("myPointer is NULL.\n");
    }

    return 0;
}

