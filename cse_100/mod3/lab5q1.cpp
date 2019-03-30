/*
* =====================================================================================
*
*       Filename:  lab5q1.cpp
*
*    Description:  Lab 5 - if/else statements
* *        Version:  1.0
*        Created:  03/29/2019 11:28:11 PM
*       Revision:  none
*       Compiler:  gcc
*
*         Author:  Adam Coss (), coss.adam@gmail.com
*         Organization:  
*
* =====================================================================================
*/
#include <iostream>
using namespace std;
int main( )
{
    int num1, // num1 is not initialized
        num2 = 5; // num2 has been initialized to 5
    cout << "Please enter an integer" << endl;
    cin >> num1;
    cout << "Please enter a second integer" << endl;
    cin >> num2;
    cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
    if (num1 == num2)
    {
        cout << "The values are the same." << endl;
        cout << "Hey, that’s a coincidence!" << endl;
    }
    else
    {
        cout << "The values are not the same" << endl;
    }

    return 0;
}
