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
void ShowInfoStruct(const SuperDude* sd) // "sd" is an address of a structure,
                                         // NOT a structure itself. Must use ->
                                         // operator in following statements.
{
    printf("Your age is %d\n", sd->age);
    printf("Your weight is %.2lf\n", sd->weight);
    printf("Your sex is %c\n", sd->sex);
    return;
}
 
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InitInfoStruct
 *  Description:  Initializes values of SuperDude struct
 * =====================================================================================
 */
void InitInfoStruct(SuperDude* sd)  // The '.' operator does not work when passing
                                    // by value.
{
    sd->age = -99;
    sd->weight = -99;
    sd->sex = 'N';                  // Use "->" operator to access struct member
                                    // instead of the '.' operator
                                    // Can also use (*sd).sex to dereference.
    return;
}

