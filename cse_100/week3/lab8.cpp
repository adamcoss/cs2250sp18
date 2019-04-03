/*
 * =====================================================================================
 *
 *       Filename:  lab8.cpp
 *
 *    Description:  Lab 8
 *
 *        Version:  1.0
 *        Created:  04/02/2019 09:27:57 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), coss.adam@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
using  namespace std;

int main()
{
    // Variables
    int numTimes,count = 1;
    
    // Ask for number
    cout << "How many times should the message be printed?" << endl;
    cin >> numTimes;

    // Output result loop
    while(count <= numTimes)
    {
        cout << count << " ";
        cout << "I love computer science!" << endl;
        count++;
    }

    cout << "Printed this message " << count-1 << " times." << endl;

    return 0;
}
