//
//  main.c
//  Time
//
//  Created by Chae O'Keefe on 2/8/14.
//  Copyright (c) 2014 chaeokay.com. All rights reserved.
//

#include <stdio.h>
#include <time.h>

typedef struct {
    long timePlus4Mil;
} Future;

void returnFutureDate(long timeElapsed)
{
    struct tm later;
    
    Future future;
    future.timePlus4Mil = time(NULL) + timeElapsed;
    localtime_r(&future.timePlus4Mil, &later);
    
    printf("The date is %d:%d:%d\n", later.tm_mon + 1, later.tm_mday, later.tm_year + 1900);
}

int main(int argc, const char * argv[])
{
    returnFutureDate(4000000);
    
    return 0;
}

