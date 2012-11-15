//
//  main.c
//  Boolean variables
//
//  Created by Eduardo Perin on 11/14/12.
//  Copyright (c) 2012 BigNerdRanch. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int i = 20;
    int j = 25;
    
    int k = ( i > j ) ? 10 : 5;
    
    if ( 5 < j - k ) { // first expression
        printf("The first expression is true.");
    } else if ( j > i ) { // second expression
        printf("The second expression is true.");
    } else {
        printf("Neither expression is true.");
    }
    
}

