/*
 * =====================================================================================
 *
 *       Filename:  Dude.c
 *
 *    Description:  Definitions for Dude.h
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:19:36 AM
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
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfo    ----- NOTE: ",cfu" creates function name template
 *  Description:  Display age
 * =====================================================================================
 */
void ShowInfo(int age, double weight)
{
    printf("Your age is %d\n", age);
    printf("Your weight is %.2lf\n", weight);
    return;
}
 
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfoStruct
 *  Description:  Displays SuperDude information
 * =====================================================================================
 */
void ShowInfoStruct(SuperDude sd)
{
    printf("Your age is %d\n", sd.age);
    printf("Your weight is %.2lf\n", sd.weight);
    printf("Your sex is %c\n", sd.sex);
    return;
}


