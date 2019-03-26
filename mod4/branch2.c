/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  More work with branches and if else statements
 *
 *        Version:  1.0
 *        Created:  01/30/2018 09:29:57 AM
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
    int pos = 0;
    printf("What is your position?\n");
    scanf("%d", &pos);
    // 1) pos = 1 => gold medal
    // 2) pos = 2 => silver medal
    // 3) pos = 3 => bronze medal
    if(pos == 1)                                        //else if  statements keep
    {                                                   //the test with the same process.
        printf("You are the GOLD medal winner!!\n");    //multiple if statements is bad form if
    }                                                   //you are in the same process.
    else if(pos == 2)
    {
        printf("You win silver medal.\n");
    }
    else if(pos == 3)
    {
        printf("You win the bronze medal.\n");
    }
    else
    {
        printf("You did not get a medal.\n");
    }
    return 0;
}
// Function Definitions


