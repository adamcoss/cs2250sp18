/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  Test switch statements
 *    NOTE:         Only works on integers, and single char.
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
    switch(pos)     //Test pos statement
    {
        case 1:         //equivalent to: if (pos == 1)
            printf("You are the GOLD medal winner!!\n");    
            break;      //Exits the block so no other cases are tested.
        case 2:         //equivalent to: if (pos == 2)
            printf("You win silver medal.\n");
            break;
        case 3:         //equivalent to: if (pos == 3)
            printf("You win the bronze medal.\n");
            break;
        case 14:        //can add multiple specific cases, but not in a range.
        case 28:
        case 36:
            printf("You win a fake plastic medal of no value.\n");
            break;
        default:        //equivalent to: else statement
            printf("You did not get a medal.\n");

    }                   //End of switch statment
            return 0;
}
// Function Definitions


