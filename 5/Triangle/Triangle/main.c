//
//  main.c
//  Triangle
//
//  Created by Chae O'Keefe on 2/4/14.
//  Copyright (c) 2014 com.chaeokay. All rights reserved.
//

#include <stdio.h>

float remainingAngle(float angle1, float angle2)
{
    float angle3 = 180.0 - angle1 - angle2;
    return angle3;
};


int main(int argc, const char * argv[])
{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}

