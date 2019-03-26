/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Body Mass Index
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:28:40 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    // 1) Capture weight in kg
    double weight;
    double height;
    double bmi;

    printf("Enter your weight.\n");
    scanf("%lf", &weight);
    printf("Enter your height.\n");
    scanf("%lf", &height);
    // 2) Capture the height in meters
    // 3) Calculate your BMI = weight/height^2
    bmi = weight/pow(height, 2);
    printf("Your BMI is: %lf\n", bmi);
    // 4) Display BMI
    return 0;
}
// Function Definitions


