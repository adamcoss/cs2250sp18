/*
 * =====================================================================================
 *
 *       Filename:  lab13.cpp
 *
 *    Description:  Lab 13 - Parallel Arrays
 *
 *        Version:  1.0
 *        Created:  04/13/2019 10:06:29 AM
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
    int SIZE = 7, maxSnowId = 0;
    double sum = 0, avg = 0;
    int date[SIZE];
    double snowFall[SIZE];
    string month;

    // Store the date and number of inches of snow fall.
    // Ask the user to enter the name of the month.
    cout << "Enter the month" << endl;
    cin >> month;

    // Store date and snow fall in arrays
    cout << "Enter the date and corresponding snow fall." << endl;
    for(int i=0; i < SIZE; i++)
    {
        cout << "Enter date:" << endl;
        cin >> date[i];
        while((date[i] < 1) || (date[i] > 31))
        {
            cout << "Enter a valid date:" << endl;
            cin >> date[i];
        }
        cout << "Inches of snow fall on " << month << " " << date[i] <<":" << endl;
        cin >> snowFall[i];
    }
    for(int i=0; i<SIZE; i++)
    {
    int count = i+1;
    while((date[count-1] > date[count])&&(count<=SIZE)){
         int tempdate, tempsnow;
            tempdate = date[count];
            tempsnow = snowFall[count];
            date[count] = date[count-1];
            snowFall[count] = snowFall[count-1];
            date[count-1] = tempdate;
            snowFall[count-1] = tempsnow;
            count++;
        }
    }

    for(int i=0; i<SIZE; i++)
    {                                           // Find average and max values
        if(snowFall[i] > snowFall[maxSnowId])   // Find max snow
            maxSnowId = i;
        sum = sum + snowFall[i];                // Get sum for average
    }
    avg = sum/SIZE;                             // Compute average
    
    // Display results
    cout << endl;
    cout << "\tSnow Fall Report for " << month << " " << date[0] << "-";
    cout << date[SIZE-1] << endl;
    cout << "Date\t\tSnow Fall" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    for(int i=0; i < SIZE; i++)
    {
        cout << date[i] << "\t\t" << snowFall[i] << endl;
    }
    cout << "Maximum snow fall of " << snowFall[maxSnowId] << " inches on ";
    cout << month << " " << date[maxSnowId] << endl;
    cout << "Average snow fall is " << avg << " inches." << endl;
}

