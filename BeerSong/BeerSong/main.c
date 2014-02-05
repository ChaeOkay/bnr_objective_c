//
//  main.c
//  BeerSong
//
//  Created by Chae O'Keefe on 2/4/14.
//  Copyright (c) 2014 com.chaeokay. All rights reserved.
//

#include <stdio.h>

void singTheSong(int numberOfBottles)
{
    if (numberOfBottles == 0){
        printf("There are simply no more bottles of beer on the wall.\n");
    } else {
        printf("%d bottles of beer on the wall. %d bottles of beer.\n", numberOfBottles, numberOfBottles);
        int oneFewer = numberOfBottles - 1;
        printf("Take one down, pass it around, %d bottles of beer on the wall.\n", oneFewer);
        singTheSong(oneFewer);
        printf("Put a bottle in the recyling, %d empty bottles in the bin.\n", numberOfBottles);
    }
}

int main(int argc, const char * argv[])
{
    singTheSong(10);
    return 0;
}

