/*
 * =====================================================================================
 *
 *       Filename:  funcStr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:04:52 AM
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
const int INPUT_STR_SIZE = 50;
// Function Prototypes
void StrSpaceToHyphen(char modString[], char separator);
// Main Function
int main()
{
    char userStr[INPUT_STR_SIZE];

    printf("Enter string with spaces: \n");
    fgets(userStr, INPUT_STR_SIZE, stdin);

    StrSpaceToHyphen(userStr, ':');

    printf("String with Hyphens: %s\n", userStr);

    return 0;
}
// Function Definitions
void StrSpaceToHyphen(char modString[], char separator)
{
    int i = 0;
    for (i = 0; i < strlen(modString); ++i)
    {
        if(modString[i] == ' ')
        {
            modString[i] = separator;
        }
    }
    return;
}


