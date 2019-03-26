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
int GetNumOfCharacters(char phrase[]);

// Main Function
int main()
{
    char phrase[STRSIZE];
   // GetOutputWithoutWhitespace(phrase);

    printf("Enter a sentence or phrase:\n");
    fgets(phrase, STRSIZE, stdin);
    printf("You entered: %s\n", phrase);
    printf("Number of Characters: %d\n", GetNumOfCharacters(phrase));
    GetOutputWithoutWhitespace(phrase);
    return 0;
}
// Function Definitions

// FUNC:
// Gets number of characters.

int GetNumOfCharacters(char phrase[])
{
    int count = 0;

    for (int i = 0; i < strlen(phrase); i++)
    {
        if (isalnum(phrase[i]))
        {
            count = count + 1;
        }
    }
    return count;
}
// FUNC:
// Gets output with no spaces
void GetOutputWithoutWhitespace(char phrase[])
{
    char newStr[strlen(phrase)];
    for (int i = 0; i < strlen(phrase); i++)
    {
        if (phrase[i] == ' ')
        {
            for (int j = i; j < strlen(phrase); j++)
            {
                newStr[i] = phrase[i + 1];
            }
                newStr[i] = phrase[i];
        }
    }

    printf("Without spaces: [%s]\n", newStr);


    return;
}


