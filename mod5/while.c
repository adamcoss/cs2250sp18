/*
 * =====================================================================================
 *
 *       Filename:  while.c
 *
 *    Description:  Practice while loops
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:50:59 AM
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
const int low = 1;
const int max = 20;
// Function Prototypes

// Main Function
int main()
{
    int num = 0;
    unsigned int fact = 1;          //unsigned allows you to use more positive numbers


    printf("Please enter a number from %d-%d:\n", low, max);
    printf("and I will give you the factorial!\n");
    scanf("%d", &num);
    if(num >= low && num <= max)
    {
        printf("Calculating factorial...\n");
        while(num > 0)          // need to chang num to prevent infinite loop
        {
            printf("Num = [%d], fact [%u]\n", num, fact);
            fact = fact * num;
            num = num - 1;
        }
    }
    else
    {
        printf("You did not follow instructions\n");
    }
    printf("Done. Your fact is [%u]\n", fact);

    return 0;
}
// Function Definitions


