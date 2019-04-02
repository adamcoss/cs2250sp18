/*
 * =====================================================================================
 *
 *       Filename:  lab7.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/01/2019 11:20:55 PM
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
    // Variables
    int option = 0;
    double numLength, numHeight;

    // Menu
    cout << "Program to calculate areas of objects" << endl;
    cout << endl;
    cout << "\t1 -- square" << endl;
    cout << "\t2 -- circle" << endl;
    cout << "\t3 -- right triangle" << endl;
    cout << "\t4 -- quit" << endl;
    cout << endl;
    cout << "Select an option." << endl;
    cin >> option;

    // Swith statement to select from multiple options.
    switch (option)
    {
        case 1:
            cout << "Enter length:" << endl;
            cin >> numLength;
            cout << "The area of the square is: " << 2*numLength << endl;
            break;
        case 2:
            cout << "Enter radius:" << endl;
            cin >> numLength;
            cout << "The area of the circle is: " << 3.14*numLength*numLength << endl;
            break;
        case 3:
            cout << "Enter base:" << endl;
            cin >> numLength;
            cout << "Enter height:" << endl;
            cin >> numHeight;
            cout << "The area of the triangle is: " << 0.5*numLength*numHeight << endl;
            break;
        case 4:
            break;
        default:
            cout << "Invalid option. Please select an option 1 through 4." << endl;
    }
    return 0;
}

