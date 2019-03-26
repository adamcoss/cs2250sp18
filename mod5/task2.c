/*
 * =====================================================================================
 *
 *i n      Filename:  task2.c
 *
 *    Description:  prompt for positive number, stay in loop until one is entered
 *
 *        Version:  1.0
 *        Created:  02/06/2018 10:05:05 AM
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
    int num = 0;
    // The following can be done within the while loop as long as the initial
    // value of num allows you to jump into the loop.
    printf("Please enter a positive number:\n");
    scanf("%d", &num);
    printf("You entered: %d\n", num);


    while(num <= -1)
    {
        printf("ERROR: Please print a positive number\n");
        scanf("%d", &num);
    }
    printf("Thank you!\n");
    return 0;
}
// Function Definitions


