/*
 * =====================================================================================
 *
 *       Filename:  multiParam.c
 *
 *    Description:  Working with multiple paramaters passed to functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 08:44:35 AM
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

// Main Function
int main()
{
    int a = 17;
    double w = 175;
    struct Dude man1;           // Same as initialize var and sets a var
                                // "man1" to a struct type
    man1.age = 32;
    man1.weight = 186.9;        // Use '.' operator to add values to members
                                // of the struct "Dude".
    ShowInfo(a, w);
    SuperDude man2;           // Same as initialize var and sets a var
                                // "man1" to a struct type
    man2.age = 22;
    man2.weight = 286.9;        // Use '.' operator to add values to members
    man2.sex = 'M';
                                // of the struct "Dude".
    ShowInfo(a, w);
    ShowInfo(man1.age, man1.weight);
    ShowInfoStruct(man2);

    return 0;
}
