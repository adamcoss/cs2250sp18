/*
 * =====================================================================================
 *
 *       Filename:  superlib.c
 *
 *    Description:  super function definitions
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:37:31 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//DEFINITION FILE CONTAINS THE ACTUAL CODE FOR THE FUNCTION
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "superlib.h" //HEADER FILE MUST BE INCLUDED TO JOIN THEM:w

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

int StrCountDigits(char modString[])
{
    int i = 0;
    int total = 0;
    for (i = 0; i < strlen(modString); ++i)
    {
        if(isdigit(modString[i]))
                {
                total = total + 1;
                }
                }

                return total;
                }
