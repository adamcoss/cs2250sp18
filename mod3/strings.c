/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  First use of strings
 *
 *        Version:  1.0
 *        Created:  01/23/2018 10:04:46 AM
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
    char name[21];   // Allocate 20 chars plus NULL char.

    printf("Enter your name, please:\n");
    // 1) NOTE: If you use an ARRAY, for ex. a string,
    // DO NOT use '&' address operator
    // If VAR has [BRACKETS] you don't need & in scanf
    // 2) The input ends with a space.
    scanf("%s", name);
    printf("Your name is [%s]\n", name);

    return 0;
}
// Function Definitions


