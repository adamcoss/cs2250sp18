/*
 * =====================================================================================
 *
 *       Filename:  testMultiDudes.c
 *
 *    Description:  Test multiple structures in functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:37:27 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "Dude.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
    SuperDude s1;
    // Use '&' to assign to an address
    InitInfoStruct(&s1);
    ShowInfoStruct(&s1);

    return 0;
}
// Function Definitions


