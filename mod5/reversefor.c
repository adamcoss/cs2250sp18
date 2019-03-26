/*
 * =====================================================================================
 *
 *       Filename:  reversefor.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:55:47 AM
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
{               //Will help with HOMEWORK MOD5
    char name[] = "Waldo Weber";

        printf("[%s] you are [%lu] bytes long\n", name, sizeof(name));
    // print one char at a time


    //print in revers order one char at time
    for(int c = 0; c < sizeof(name); c++)
    {
        printf("%c\n", name[c]);
    }
    
    for(int i = 10; i > 0; i--)
    {
        printf("i [%d]\n", i);
    }

    return 0;
}
// Function Definitions


