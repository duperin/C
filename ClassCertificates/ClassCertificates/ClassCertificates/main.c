//
//  main.c
//  ClassCertificates
//
//  Created by Eduardo Perin on 11/14/12.
//  Copyright (c) 2012 BigNerdRanch. All rights reserved.
//

#include <stdio.h>

void congratulateStudent(char *student, char *course, int numDays)
{
    printf("%s has done as much %s Programming as I could fit into %d days.\n",
           student, course, numDays);
}

int main(int argc, const char * argv[])
{

    congratulateStudent("Mark", "Cocoa", 5);
    congratulateStudent("Bo", "Objetive-C", 2);
    congratulateStudent("Mike", "Phyton", 5);
    congratulateStudent("Ted", "iOS", 5);
    
    return 0;
    
}

