/*
 * =====================================================================================
 *
 *       Filename:  Dude.h
 *
 *    Description:  Const and Prototypes for Dude and SuperDude struct
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:20:24 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  DUDE__INC__
#define  DUDE_INC__

// Constants

struct Dude                     // Creates structure of data of different types
{
    int age;
    double weight;
};                              // A semicolon must be added after a struct

typedef struct SuperDude        // "typedef" creates a new definition to use
                                // SuperDude as a shortcut.
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
#endif /* ----- #ifndef DUDE__INC__ ----- */

