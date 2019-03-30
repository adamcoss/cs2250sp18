/*
 * =====================================================================================
 *
 *       Filename:  hw1.cpp
 *
 *    Description:  Determine wage based on hours worked and rate of pay.
 *
 *        Version:  1.0
 *        Created:  03/29/2019 10:41:24 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), coss.adam@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

int main()
{
    //Variables
    double hours, rate, wage;
    //Get input from user.
    cout << "How many hours did you work?" << endl;
    cin >> hours;
    cout << "How much to you get paid per hour?" << endl;
    cin >> rate;
    //Perform calculation
    wage = hours * rate;
    //Output result
    cout << "You have earned $" << wage << endl;

    return 0;
}

