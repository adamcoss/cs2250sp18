/*
 * =====================================================================================
 *
 *       Filename:  coolMath.c
 *
 *    Description:  Using more advanced math with math library
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:39:39 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h> //gives sqrt(), pow(), fabs() etc...

// Constants

// Function Prototypes

// Main Function
int main()
{
    //calculate the triangle size
    double sideA = 4.0;
    double sideB = 5.0;
    double sideC;

    sideC = sqrt((sideA * sideA) + (sideB *sideB));
    printf("SideA %lf, SideB %lf, SideC %lf\n", sideA, sideB, sideC);

    sideC = sqrt(pow(sideA, 2) + pow(sideB, 2));
    printf("SideA %lf, SideB %lf, SideC %lf\n", sideA, sideB, sideC);
    double a = -99.0;
    printf("The abs of %lf is %lf\n", a, fabs(a));

    return 0;
}
// Function Definitions


