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
    
    printf("A NULL value stored at the myPointer is %zu bytes\n", sizeof(*myPointer));
    
    // a short is 16 bits
    // unsigned short is 2^16 = 65536
    //  0 is a also a number, so the largest number is 65535
    //  smallest number is 0
    
    // signed short has 1 bit for the sign 2^15 = 32768
    //  0 is also a number, so the largest number is 32767
    //  smallest number is -32768

    return 0;
}

