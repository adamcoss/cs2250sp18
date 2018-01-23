/*
 * =====================================================================================
 *
 *       Filename:  floatDiv.c
 *
 *    Description:  Learn about floats with division
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:24:23 AM
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

// Function Prototypes

// Main Function
int main()
{
    int age = 25;
    int grade = 303;
    double result;
    int iresult;
    
    //Need to cast the int to doubles put (double) in front of var to change
    //to double one time. Useful for dividing when only integers are given.
    result = (double)grade/(double)age;
    printf("result = %lf\n", result);
    iresult = (double)grade/(double)age;
    printf("result = %d\n", iresult);
    //print a double as an integer
    printf("result = %d\n", (int)result);

    return 0;
}
// Function Definitions


