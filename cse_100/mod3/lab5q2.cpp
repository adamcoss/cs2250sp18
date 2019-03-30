/*
* =====================================================================================
*
*       Filename:  lab5q2.cpp
*
*    Description:  Lab 5 If/else if statements
*
*        Version:  1.0
*        Created:  03/29/2019 11:42:43 PM
*       Revision:  none
*       Compiler:  gcc
*
*         Author:  Adam Coss (), coss.adam@gmail.com
*   Organization:  
*
* =====================================================================================
*/
// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise
// PLACE YOUR NAME HERE

#include <iostream>
using namespace std;
int main()
{
    float average; // holds the grade average
    cout << "Input your average:" << endl;
    cin >> average;
    if ((average >= 60) && (average < 80))
    {
        cout << "You Pass" << endl;
    }
    else if ((average >= 80) && (average < 90))
    {
        cout << "B" << endl;
    }
    else if ((average >= 90) && (average < 101))
    {
        cout << "A" << endl;
    }
    else if (average >= 101)
    {
        cout << "Invalid data" << endl;
    }
    else if ((average >= 0) && (average < 60))
    {
        cout << "You Fail" << endl;
    }
    return 0;
}
