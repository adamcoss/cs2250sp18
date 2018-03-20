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
void ShowInfoStruct(const SuperDude* sd);
// ^^^ Pass a constant address so it cannot be changed. Is READ ONLY.
void InitInfoStruct(SuperDude* sd); // Pass by reference so it is available in
                                    // the other files.
void ShowInfo(int age, double weight);
#endif /* ----- #ifndef DUDE__INC__ ----- */

