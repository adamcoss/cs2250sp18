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

// Constants

struct Dude                     // Creates structure of data of different types
{
    int age;
    double weight;
};                              // A semicolon must be added after a struct

typedef struct SuperDude        // "typedef" creates a new definition to use
                                // SuperDude as a shortcut
{
    int age;
    double weight;
    char sex;
}SuperDude;                              // Must include struct name before 
                                         // the ';'
// Function Prototypes
void ShowInfoStruct(SuperDude sd); // Struct definitions must be defined above
                                // function prototypes.

void ShowInfo(int age, double weight);
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
