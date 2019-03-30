/*
 * =====================================================================================
 *
 *       Filename:  lab4.cpp
 *
 *    Description:  Lab 4
 *
 *        Version:  1.0
 *        Created:  03/29/2019 06:13:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), coss.adam@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
// lab4.cpp 
// This program will determine how many brownies will fit in a baking pan of a specified
// size.
// Adam Coss
#include <iostream>
using namespace std;

int main()
{   
    // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
    // NAME AND AN APPROPRIATE DATA TYPE. 
    int panLength, panWidth, panArea, numSmall, numLarge;

    // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
    // THE PROGRAM NEEDS TO GET FROM THE USER.
    cout<<"Enter the length of the pan (in inches)."<<endl;
    cin>>panLength;
    cout<<"Enter the width of the pan (in inches)."<<endl;
    cin>>panWidth;
    // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS  
    // AND ASSIGN THE RESULTS TO VARIABLES.
    panArea = panLength * panWidth;
    numSmall = panArea;
    numLarge = panArea/4;

    // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
    cout<<"A "<< panLength << " x " << panWidth << " inch pan can hold "
        << numSmall << " small brownies or " << numLarge << " large brownies."<< endl;
    return 0;
}
