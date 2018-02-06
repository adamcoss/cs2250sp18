/*
 * =====================================================================================
 *
 *       Filename:  while2.c
 *
 *    Description:  Infinite while loop
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:24:14 AM
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
    int num = 2;
    int age = 21;
    while(num)      // Is false when num = 0
    {
        printf("Num [%d]\n",num);
        num--;
    }
    while(1)        // This loop requires a break statement
    {
        if(age == 0)
        {
            printf("Thank you\n");
            break;          // Breaks out of loop or switch statements
        }                   // Not out of the 'if' statement.
        printf("Your age is %d\n", age);
        age--;
    }
    printf("Done\n");

    return 0;
}
// Function Definitions


