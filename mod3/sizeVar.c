/*
 * =====================================================================================
 *
 *       Filename:  sizeVar.c
 *
 *    Description:  Test the size of variables that can be stored.
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:00:10 AM
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
    int num = 1;
    unsigned int unum = 1;
    num = num * 1000;
    unum = unum * 1000;

    // sizeof: returns the number of bytes
    printf("the size of int is %ld\n", sizeof(num));
    printf("the size of unsigned int is %ld\n", sizeof(unum));

    printf("num = [%d]. unum = [%d]\n", num, unum);
    num *= 10000; // compound operator 
    unum *= 10000; // compound operator 
    printf("num = [%d]. unum = [%d]\n", num, unum);
    //The range of an int is 1^32 ~ 4.29*10^9
    //Range: -(i/2) to + (i/2 -1)
    //%u is for unsigned integers.
    num *= 100; // compound operator 
    unum *= 100; // compound operator 
    printf("num = [%d]. unum = [%u]\n", num, unum);
    


    return 0;
}
// Function Definitions


