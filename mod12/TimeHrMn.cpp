/*
 * =====================================================================================
 *
 *       Filename:  TimeHrMn.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2018 09:59:13 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// #include <stdio.h> // For C
#include <iostream> // For C++
#include "TimeHrMn.h"
using namespace std; // For C++

// Constants

// Function Prototypes

// Main Function
TimeHrMn::TimeHrMn()
{
    hours = 0;
    minutes = 0;
    return;
}
        // Second constructor
TimeHrMn::TimeHrMn(int h, int m)
{
    hours = h;
    minutes = m;
    return;
}
        // Getter Show Function
void TimeHrMn::ShowTime() const
{
    cout << hours;
    cout << minutes;
    return;
}
TimeHrMn TimeHrMn::operator+(TimeHrMn rhs)
{
    TimeHrMn tmp;
    tmp.hours = hours + rhs.hours;
    tmp.minutes = minuts + rhs.hours;
    return tmp;
}
// Function Definitions


