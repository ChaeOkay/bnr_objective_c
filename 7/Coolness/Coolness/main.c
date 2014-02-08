//
//  main.c
//  Coolness
//
//  Created by Chae O'Keefe on 2/8/14.
//  Copyright (c) 2014 com.chaeokay. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 0;
 
    // while loop
    while (i < 12) {
        printf("Aaron is Cool\n");
        i ++;
    }
    
    // for loop
    for (i = 0; i < 12; i++) {
        printf("%d. Aaron is Cool\n", i);
    }
    
    // breaking a loop
    int j;
    for (j = 0; j < 12; j++){
        printf("Checking j = %d\n", j);
        
        if (j + 90 == j * j) {
            break;
        }
    }
    
    printf("The answer is %d\n", j);
    
    // skip when k is 3
    int k;
    for (k = 0; k < 12; k++){
        if (k % 3 == 0){
            continue;
        }
        printf("Checking k = %d\n", k);
        if (k + 90 == k * k){
            break;
        }
    }
    printf("The answer is %d.\n", k);
    
    // do while loop
    
    int l = 0;
    do {
        printf("%d. Aaron is Cool\n", l);
        l++;
    } while (l < 13);
    
    
    return 0;
}

