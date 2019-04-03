/*
 * =====================================================================================
 *
 *       Filename:  lab9.cpp
 *
 *    Description:  Lab 9
 *
 *        Version:  1.0
 *        Created:  04/02/2019 09:53:53 PM
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
    const float G = 9.8;
    double time, height, distance;
    int count;

    // Get data
    cout << "Please input the time of fall in seconds:" << endl;
    cin >> time;
    cout << "Please input the height of the bridge in meters:" << endl;
    cin >> height;
    cout << "Time Falling (seconds) Distance Fallen (meters)" << endl;
    cout << "***********************************************" << endl;

    // Loop
    count = 0;
    while(count <= time)
    {
        distance = 0.5*G*count*count;
        if(distance > height)
        {
            // Error message
            cout << "Warning-Bad Data: The distance fallen exceeds the height of the bridge." << endl;
        break;
        }
        else
        {
            cout << count << " " << distance << endl;
            count++;
        }
    }

    return 0;
}

