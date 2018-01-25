/*
 * =====================================================================================
 *
 *       Filename:  index.c
 *
 *    Description:  Working with indexes
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:42:39 AM
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
    //define two strings
    char fname[20];
    char lname[20];
    
    //get fname
    printf("Please enter you first name:\n");
    scanf("%s", fname);
    //get lname
    printf("Please enter you last name:\n");
    scanf("%s", lname);
    //display initials
    printf("Hello %s %s\n", fname, lname);
    //To access individual members of an array you use index notation,
    //   char[index position]
    printf("Your initials are [%c%c]\n", fname[0,2], lname[0]);


    return 0;
}
// Function Definitions


