/*
 * =====================================================================================
 *
 *       Filename:  pa1Mod11.c
 *
 *    Description:  9.6 Ch 9 Warm up: Parsing strings (C)
 *
 *        Version:  1.0
 *        Created:  04/10/2018 10:10:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h> // For C
#include <string.h>
#include <stdbool.h>
//#include <iostream> // For C++
//using namespace std; // For C++

// Constants

// Function Prototypes

// Main Function
int main()
{
    char name[99] = "";
    char first[50] = "";
    char last[50] = "";
    char* str = NULL;
    bool inputDone = false;

    while(!inputDone)
    {
        printf("Enter input string:\n");
        fgets(name, 50, stdin);
        str = strrchr(name, ',');

        if(str == NULL)
        {
            printf("Error: No comma in string.\n\n");
            continue;
        }
        int i = 0;
        int j = 0;
        for(i = 0; i < strlen(name); i++)
        {
            if(name[i] != ',' && name[i] != ' ')
            {
                first[j++] = name[i];
            }
            else
            {
                break;
            }
        }
        first[j] = '\0';
        j = 0;
        while(i < strlen(name))
        {
            if(name[i] != ',' && name[i] != ' ')
            {
                last[j++] = name[i];
            }
            i++;
        }
        last[j] = '\0';

        printf("First word: %s\n", first);
        printf("Second word: %s\n", last);

        inputDone = true;
    }
    return 0;
}
// Function Definitions
