/*
 * =====================================================================================
 *
 *       Filename:  ec2.cpp
 *
 *    Description:  Extra Credit 2 - Conversion Program
 *
 *        Version:  1.0
 *        Created:  04/14/2019 10:54:33 PM
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
// PROTOTYPES
void displayMenu();
double fahrenheitToCelsius(double fTemp);
double milesToKilometers(double miles);
double litersToGallons(double liters);

int main()
{
    // Display selection menu
    displayMenu();

    return 0;
}
// FUNCTION DEFINITIONS
void displayMenu()
{
    // Local variables
    int menuSelect = 0;
    double inValue;
    
    // Display Menu
    cout << "\n\t\tWelcome to the Conversion Program" << endl;
    cout << "\t\t=================================\n" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Miles to kilometers" << endl;
    cout << "3. Liters to Gallons" << endl;
    cout << "4. Exit from the program\n" << endl;
    cin >> menuSelect;
    
    // Validate input
    while((menuSelect < 1)||(menuSelect > 4))
    {
        cout << "Please choose option 1-4: ";
        cin >> menuSelect;
    }
    if((menuSelect > 0)&&(menuSelect < 4))
    {
        cout << "Enter the value to be converted: ";
        cin >> inValue;
        cout << endl;
    }

    // Conversion selection
    switch(menuSelect)
    {
        case 1:
            cout << inValue << "F = "<< fahrenheitToCelsius(inValue) << "C." << endl;
            break;
        case 2:
            cout << inValue << " miles = " << milesToKilometers(inValue);
            cout << " kilometers." << endl;
            break;
        case 3:
            cout << inValue << " Liters = " << litersToGallons(inValue);
            cout << " Gallons." << endl;
            break;
        case 4:
            cout << "Thank you.\n" << endl;
            break;
    }
    
}
double fahrenheitToCelsius(double fTemp)
{
    return ((fTemp-32)*5/9);
}
double milesToKilometers(double miles)
{
    return (1.609*miles);
}
double litersToGallons(double liters)
{
    return (liters/3.785);
}
