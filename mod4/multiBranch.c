/*
 * =====================================================================================
 *
 *       Filename:  multiBranch.c
 *
 *    Description:  Nested branches ( if statements within other if statements)
 *
 *        Version:  1.0
 *        Created:  01/30/2018 10:10:25 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int income = 30000;

    if(income)          // Integer values always true unless = 0
    {
        printf("Income is %d\n", income);
    }
    else
    {
        printf("No income\n");
    }

    return 0;
}
// Function Definitions


