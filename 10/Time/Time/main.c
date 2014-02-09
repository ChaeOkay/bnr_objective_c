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

int main(int argc, const char * argv[])
{
//    struct tm now;
//    long secondsSince1970 = time(NULL);
//    printf("It has been %ld seconds since 1970\n\n", secondsSince1970);
//    
//    localtime_r(&secondsSince1970, &now);
//    printf("The time is %d:%d:%d\n", now.tm_hour, now.tm_min, now.tm_sec);
//    printf("The date is %d:%d:%d\n", now.tm_mon + 1, now.tm_mday, now.tm_year + 1900);
//    printf("\n");
    
    Future future;
    future.timePlus4Mil = time(NULL) + 4000000;
    
    printf("The time since 1970 plus 4,000,000 is %ld seconds \n\n", future.timePlus4Mil);
    
    struct tm later;
    localtime_r(&future.timePlus4Mil, &later);
    printf("The date is %d:%d:%d\n", later.tm_mon + 1, later.tm_mday, later.tm_year + 1900);
    printf("\n");
    
    return 0;
}

