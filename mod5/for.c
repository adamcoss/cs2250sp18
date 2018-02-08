/*
 * =====================================================================================
 *
 *       Filename:  for.c
 *
 *    Description:  Practice with for loops
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:34:02 AM
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
    // For loops are best for a specific number of times.
    // while loops will repeat while a condition is true.
    // Continue allows you to jump back to the beginning of the for loop.
    //
    // 1) Init your condition
    // 2) Do work
    // 3) Update condition
    // IF still true, continue work
    // Else finish loop.

    int rounds = 3;

    while(rounds != 0)
    {
        printf("Hello there\n");
        rounds -= 1;
    }
    // For loop version
    rounds = 4;
    for(int r = 0; r < rounds; r++)
    {
        printf("Hello there\n");
    }
    printf("rounds [%d]\n", rounds);
    printf("rounds [%d]\n", rounds++);
    printf("rounds [%d]\n", rounds);

    return 0;
}
// Function Definitions


