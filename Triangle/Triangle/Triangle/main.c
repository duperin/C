//
//  main.c
//  Triangle
//
//  Created by Eduardo Perin on 11/27/12.
//  Copyright (c) 2012 BigNerdRanch. All rights reserved.
//

#include <stdio.h>

// add your new function here

float remainingAngle(float angleA, float angleB)
{
      return 180 - (angleA + angleB);
    }

int main(int argc, const char * argv[])


{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;

    }

