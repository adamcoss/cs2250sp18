/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Create a 10 digit array with random numbers
 *                  between 0 and 99
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:06:22 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants
const int LEN = 10;
// Function Prototypes

// Main Function
int main()
{
    int randArr[LEN];
    srand((int)time(0));

    // 1) Initialize array

    for(int i = 0; i < LEN; i++)
    {
        randArr[i] = rand()%100;
    }
    // 2) Display array
    for(int i = 0; i < LEN; i++)
    {
        printf("%d is %d\n", i + 1, randArr[i]);
    }
    return 0;
}
// Function Definitions


