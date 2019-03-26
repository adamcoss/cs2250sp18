/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  group task with velocity
 *
 *        Version:  1.0
 *        Created:  02/22/2018 08:41:41 AM
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
const int MtoK = 1000;
const int HourToMin = 60;
// Function Prototypes
// calculate velocity distance/time
double Velocity(double distance, double inTime);
// Convert to Km per sec.
double ConvDis(double Km);
double ConvTime(double hr);
// Main Function
int main()
{
    double dist, hours;

    printf("Enter the distance in Km:\n");
    scanf("%lf", &dist);
    printf("Enter the hours:\n");
    scanf("%lf", &hours);

    printf("Velocity is %lf Km/hr\n", Velocity(dist, hours));
    printf("Converted to meters and seconds: %lf m/s\n", 
            Velocity(ConvDis(dist), ConvTime(hours)));
    return 0;
}
// Function Definitions
// Func: Calc velocity
double Velocity(double distance, double inTime)
{
    return distance / inTime;
}
// Func: Convert Km to m
double ConvDis(double Km)
{
    return Km * MtoK;
}
// Func: Conv hours to min.
double ConvTime(double hr)
{
    return hr * HourToMin;
}

