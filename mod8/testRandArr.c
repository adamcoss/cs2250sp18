/*
 * =====================================================================================
 *
 *       Filename:  testRandArr.c
 *
 *    Description:  Test a random array functions
 *
 *        Version:  1.0
 *        Created:  03/15/2018 09:13:16 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "randArr.h"


// Constants

// Function Prototypes

// Main Function
int main()
{
    int ar[ASIZE];

    InitRandArray(ar);
    ShowRandArray(ar);

    return 0;
}
// Function Definitions


