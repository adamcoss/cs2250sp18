/*
 * =====================================================================================
 *
 *       Filename:  branch1.c
 *
 *    Description:  Basics of branching
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:51:48 AM
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
    int age = 0;
    int temp;
    //Request user input
    printf("How old are you?\n");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);
    if(age >= 18)       // if true, go inside black, if not true, the block is skipped.
    {                   // Do not add ";" at the end of if statement because it will end
                        // the statement
        printf("You can vote!\n");
    }
    else                // Do not user (), Default case or FALSE case.
    {
        temp = 18 - age;
        printf("You have %d years to vote\n", temp);
    }
    if(age >= 21)
    {
        printf("You are also able to drink BOOZE!\n");
    }
    else                // Do not user (), Default case or FALSE case.
    {
        temp = 21 - age;
        printf("You have %d years to drink\n", temp);
    }
    if(age >= 65)
    {
        printf("You can retire now.\n");
    }
    else                // Do not user (), Default case or FALSE case.
    {
        temp = 65 - age;
        printf("You have %d years to retire :(\n", temp);
    }
    if(age == 35)
    {
        printf("You are at your prime!!!\n");
    }
    else                // Do not user (), Default case or FALSE case.
    {
        temp = 35 - age;
        printf("You have %d years until you reach your prime.\n", temp);
    }
        printf("Adios amigo!\n");
    return 0;
}
// Function Definitions


