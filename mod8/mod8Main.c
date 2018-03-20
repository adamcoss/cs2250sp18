/*
 * =====================================================================================
 *
 *       Filename:  mod8Main.c
 *
 *    Description:  Mod 8 Programming Assignment
 *
 *        Version:  1.0
 *        Created:  03/15/2018 10:01:12 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Constants
const int STRSIZE = 128;
// Function Prototypes
void GetOutputWithoutWhitespace(char phrase[]);
void GetNumOfCharacters();

// Main Function
int main()
{
    char phrase[STRSIZE];
    GetNumOfCharacters();
    GetOutputWithoutWhitespace(phrase);

    return 0;
}
// Function Definitions

// FUNC:
// Gets number of characters.

void GetNumOfCharacters()
{
    int count = 0;
    char phrase[STRSIZE];

    printf("Enter a sentence or phrase:\n");
    fgets(phrase, STRSIZE, stdin);
    printf("You entered: %s\n", phrase);
    for (int i = 0; i < strlen(phrase); i++)
    {
        if (isalnum(phrase[i]))
        {
            count = count + 1;
        }
    }
    printf("Number of Characters: %d\n", count);
    return;
}
// FUNC:
// Gets output with no spaces
void GetOutputWithoutWhitespace(char phrase[])
{

    return;
}


