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
 
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CopyInfoStruct
 *  Description:  Makes a copy and returns a SuperDude struct
 * =====================================================================================
 */
SuperDude CopyInfoStruct(const SuperDude* sd)
{
    SuperDude tmp;                  // Assigns tmp var to SuperDude type.
    tmp.age = sd->age;
    tmp.weight = sd->weight;
    tmp.sex = sd->sex;
    //tmp is a structure so uses the '.' operator.
    //sd uses -> because it is an address.

    return tmp;                     // Return tmp (same type as SuperDude)
}
 
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  UpdateInfoStruct
 *  Description:  update values (int, doubles) of struct by some weight
 * =====================================================================================
 */
void UpdateInfoStruct(SuperDude* sd, int myweight)
{
    // 
    sd->age *= myweight;
    sd->weight = sd->weight * myweight;
        return;
}
 
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfoAllStruct
 *  Description:  Display array of structure
 * =====================================================================================
 */
void ShowInfoAllStruct(const SuperDude sd[]) // same as: const int array[]
{
    for(int i = 0 ; i < ASIZE; i++)
    {
        printf("[%d] Member info [%d] [%lf] [%c]\n", i, sd[i].age,
                sd[i].weight, sd[i].sex);
    }
    return;
}

