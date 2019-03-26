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
#include <string.h>     // <> used for system library
#include "superlib.h"   // "" used for local file
//#ifndef __SUPERLIB_H__
//#define __SUPERLIB_H__
// Main Function
// Function Prototypes
void StrSpaceToHyphen(char modString[], char separator);
int StrCountDigits(char modString[]);
int main()
{
    char userStr[INPUT_STR_SIZE];       // Needs superlib.h included for CONST

    printf("Enter string with spaces: \n");
    fgets(userStr, INPUT_STR_SIZE, stdin);

    StrSpaceToHyphen(userStr, ':');
    
    printf("String with Hyphens: %s\n", userStr);
    printf("Number of digitis: %d\n", StrCountDigits(userStr));

    return 0;
}


