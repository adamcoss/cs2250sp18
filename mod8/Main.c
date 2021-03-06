/*
 * =====================================================================================
 *
 *       Filename:  Main.c
 *
 *    Description:  Mod 8 Programming assignment 1
 *
 *        Version:  1.0
 *        Created:  03/20/2018 12:14:35 PM
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
#include <ctype.h>

// Constants
const int STRSIZE = 128;
// Function Prototypes
int GetNumOfCharacters(char userString[]);
void OutputWithoutWhitespace(char userString[], char userStringNowhite[]);

// Main Function
int main()
{
    char userString[STRSIZE];
    char userStringNoWhite[STRSIZE];
    printf("Enter a sentence or phrase:\n\n");
    fgets(userString, STRSIZE, stdin);
    printf("You entered: %s\n\n", userString);
    printf("Number of characters: %d\n", GetNumOfCharacters(userString));
    OutputWithoutWhitespace(userString, userStringNoWhite);
    printf("String with no whitespace: %s\n", userStringNoWhite);
    return 0;
}
// Function Definitions
int GetNumOfCharacters(char userString[])
{
    int i = 0; 
    int count = 0;
    for (i = 0; i < strlen(userString); i ++)
    {
        if ( isalnum(userString[i] ))
        {
            count = count + 1 ;
        }
        if (userString[i] == ' ')
        {
            count = count + 1 ;
        }
        if ( ispunct(userString[i] ))
        {
            count = count + 1 ;
        }

    }
    return count;
}
void OutputWithoutWhitespace(char userString[],char userStringNoWhite[])
{
    int i,j = 0;
    for ( i = 0; userString[i] != 0; ++i)
    {
        if (userString[i] != ' ')
        {
            userStringNoWhite[j] = userString[i];
            j ++;
        }
        userStringNoWhite[j] = 0; 
    }
    return;
}
