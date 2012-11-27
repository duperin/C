//
//  main.c
//  Degrees
//
//  Created by Eduardo Perin on 11/15/12.
//  Copyright (c) 2012 BigNerdRanch. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Declare a global variable
float lastTemperature;

float fahrenheitFromCelsius(float cel)
{
    lastTemperature = cel;
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr);
    return fahr;
}


int main(int argc, const char * argv[])
{
    float freezeInc = 0;
    float freezeInf = fahrenheitFromCelsius(freezeInc);
    printf("Water freezes at %f degrees Fahrenheit\n", freezeInf);
    printf("The last temperature converted was %f\n", lastTemperature);
    return 0;
}

