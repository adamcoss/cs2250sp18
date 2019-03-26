/*
 * =====================================================================================
 *
 *       Filename:  superlib.h
 *
 *    Description:  It is super duper functions for STRINGS!
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:34:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef __SUPERLIB_H__
#define __SUPERLIB_H__
// HEADER FILES CONTAIN CONSTANTS AND FUN PROTOTYPES
// Constants Inside header files ad 'static' before definition
static const int INPUT_STR_SIZE = 50;
// Function Prototypes
void StrSpaceToHyphen(char modString[], char separator);
//Task 1: Function takes a string and returns number of digits
int StrCountDigits(char modString[]);
#endif
