/*
 * =====================================================================================
 *
 *       Filename:  sentences.c
 *
 *    Description:  Working with STRINGS in functions and arrays
 *
 *        Version:  1.0
 *        Created:  03/13/2018 08:34:23 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
// Constants
const int STRSIZE = 128;

// Function Prototypes


// Main Function
int main()
{

    char fullName[STRSIZE];
    printf("Please enter your full name:\n");
    fgets(fullName, STRSIZE, stdin);         
    // fgets(char *s, int size, FILE *stream);
    // To get rid of final enter in input, we can replace "\n" with ""
    for(int i = 0; i < strlen(fullName); i++)
    {
    printf("%c", fullName[i]);
    }
//    scanf("%s", fullName);
//    printf("Hi [%s]\n", fullName);

    return 0;
}
// Function Definitions


