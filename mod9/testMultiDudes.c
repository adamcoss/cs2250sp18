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
    SuperDude s1, s2;
    SuperDude ss[ASIZE];  // Create an array of structs
    // Use '&' to assign to an address
    InitInfoStruct(&s1);
    ShowInfoStruct(&s1);
    s2 = CopyInfoStruct(&s1);
    ShowInfoStruct(&s2);
    // initialize your array of structs
    printf("--------------\nNow array info\n--------------\n");
    for(int i = 0; i < ASIZE; i++)
    {
        InitInfoStruct(&ss[i]); // An array is an address, HOWEVER, the members
        // need an address pointer.
        UpdateInfoStruct(&ss[i], i * 10);
        //ShowInfoStruct(&ss[i]);
    }

    ShowInfoAllStruct(ss);  // name of the array is an address.

    return 0;
}
// Function Definitions


