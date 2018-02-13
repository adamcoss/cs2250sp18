/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  Working with arrays
 *
 *        Version:  1.0
 *        Created:  02/13/2018 08:44:26 AM
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
const int LEN = 20;

// Function Prototypes

// Main Function
int main()
{
    // Arrays use '[ ]' to access specific location in the array.
    // Variables can be used to determine size so you don't have
    // to code each value when updating file.
    int ar[LEN];
    ar[0] = 33;     // First element
    ar[1] = 22;
    ar[2] = 66;
    ar[3] = 99;     // Can not initialize more than available spaces in array

    printf("First value: [%d]\n", ar[0]);
    printf("Fourth value: [%d]\n", ar[3]);

    //Initialize the full array
    for(int i = 0; i < LEN; i++)
    {
        // Task initialize numbers divisible by 3
        // to 0, else st it to -99
        if(i % 3 == 0)
        {
            ar[i] = 0;
        }
        else
        {
            ar[i] = -99;
        }
    }
    
    

    // Iterate over the full array
    // for loops are more common for fixed numbers. Arrays typically use 
    // for loop for iteration.
    
    for(int i = 0; i < LEN; i++)
    {
        printf("The %d value is %d\n", i, ar[i]);
    }

    return 0;
}
// Function Definitions


