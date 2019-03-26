/*
 * =====================================================================================
 *
 *       Filename:  randArr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/15/2018 09:15:05 AM
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
#include <time.h>
#include <stdlib.h>
// Constants

// Function Definitions
void InitRandArray(int superAr[])
{
    srand((int)time(0));

    for(int i = 0; i < ASIZE; i++)
    {
        superAr[i] = rand() %100;
    }
    return;
}

void ShowRandArray(int superAr[])
{
    for(int i = 0; i < ASIZE; i++)
    {
        printf("[%d] ", superAr[i]);
    }
    return;
}

