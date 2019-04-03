/*
 * =====================================================================================
 *
 *       Filename:  lab10.cpp
 *
 *    Description:  Lab 10
 *
 *        Version:  1.0
 *        Created:  04/03/2019 01:29:43 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), coss.adam@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;

int main()
{
    // Variables
    int numUpper = 0;
    int numLower = 0;
    int numDigit = 0;
    int numAlpha = 0;
    int numTotal = 0;
    char line[100];
    
    // Get string
    cout << "Please enter a string. End the string with '#'." << endl;
    cin.getline(line,100,'#');
    cout << line << endl;

    // Loop through string
    int i = 0;
    while(i <= (strlen(line)-1))
    {
        if(isupper(line[i]))
        {
            numUpper++;
        }
        else if(islower(line[i]))
        {
            numLower++;
        }
        if(isdigit(line[i]))
        {
            numDigit++;
        }
        else if(isalpha(line[i]))
        {
            numAlpha++;
        }
        i++;
    }

    // Output
    cout << endl;
    cout << "Uppercase:\t" << numUpper << endl;
    cout << "Lowercase:\t"<<  numLower << endl;
    cout << "Digit:\t\t" << numDigit << endl;
    cout << "Letter:\t\t" << numAlpha << endl;
    cout << "Total:\t\t" << strlen(line) << endl;
    return 0;
}

