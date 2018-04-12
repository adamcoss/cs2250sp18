/*
 * =====================================================================================
 *
 *       Filename:  TimeHrMn.h
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
#ifndef  TIMEHRMN__INC__
#define  TIMEHRMN_INC__

#include <iostream> // For C++
using namespace std; // For C++
class TimeHrMn
{
    private:
        int hours;
        int minuts;

    public:
        // Default constructor
        TimeHrMn();
        // Second constructor
        TimeHrMn(int h, int m);
        // Getter Show Function
        void ShowTime() const;
        // Operator +
        TimeHrMn operator+(TimeHrMn rhs);
};
#endif /* ----- #ifndef TIMEHRMN__INC__ ----- */

