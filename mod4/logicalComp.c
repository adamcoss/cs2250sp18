/*
 * =====================================================================================
 *
 *       Filename:  logicalComp.c
 *
 *    Description:  Comparing logic statements (or, and, xor)
 *
 *        Version:  1.0
 *        Created:  02/01/2018 08:33:03 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include<stdbool.h>     //Boolean variables
// Constants

// Function Prototypes

// Main Function
int main()
{
    int grade;
    bool success = true;
    // 1) Ask user for int value
    printf("Enter your grade\n");
    scanf("%d", &grade);
    // 2) If 100 >= value >= 90, print 'A'
    if(grade > 90 && grade <= 100)// Var has to be stated in both statements.
    {
        printf("You got an A\n");
    }
    // 2) If 90 > value >= 80, print 'B'
    else if(grade >= 80 && grade <= 90)// Var has to be stated in both statements.
    {
        printf("You got an B\n");
    }
    // 2) If 80 > value >= 70, print 'C'
    else if(grade >= 70 && grade <= 79)// Var has to be stated in both statements.
    {
        printf("You got an C\n");
    }
    // 2) If 70 > value, print 'E'
    else// Var has to be stated in both statements.
    {
        printf("You got an E\n");
        success = false;
    }
    // Test for TRUE or FALSE
    if(success)
    {
        printf("Congrats! You passed!\n");

    }
    else
    {
        printf("Sorry, see you next semester.\n");
    }

    return 0;
}
// Function Definitions


