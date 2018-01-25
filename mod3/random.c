/*
 * =====================================================================================
 *
 *       Filename:  random.c
 *
 *    Description:  Working with random numbers
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:51:53 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>     // for rand() functio
#include <time.h>       // for srand() function: set random seed
// Constants

// Function Prototypes

// Main Function
int main()
{
    // Set random seed
    srand((int)time(0));
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
    


    return 0;
}
// Function Definitions


