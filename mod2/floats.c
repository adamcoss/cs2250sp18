/*
 * =====================================================================================
 *
 *       Filename:  floats.c
 *
 *    Description:  Learning about floating point
 *
 *        Version:  1.0
 *        Created:  01/18/2018 08:53:22 AM
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
    const double G = 9.8; // m/s^2
    //CONSTANTS CAN NOT BE CHANGED.
    const double LB_TO_KG = 0.453592;
// Function Prototypes

// Main Function
int main()
{
    double weight = 2.4;

    printf("My w is %lf\n", weight);
    printf("Please enter your weight in lbs\n");
    scanf("%lf", &weight);
    printf("My w is %lf\n", weight);
    printf("My weight in kg is %lf\n", weight * LB_TO_KG);
    printf("Your real weight is %lf\n", weight * G * LB_TO_KG);


    return 0;
}
// Function Definitions


