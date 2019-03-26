/*
 * =====================================================================================
 *
 *       Filename:  firstClass.cpp
 *
 *    Description:  Hello World with class
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:11:07 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// #include <stdio.h> // For C
#include <iostream> // For C++
using namespace std; // For C++

// Constants
    // Define class, similar to struct. Ends with semicolon like a struct.
class HelloNum
{

    // Only the developer sees private section
    // Can't access directly, compiler will give an error because it
    // is private. This is were data and values are stored.
    private:
        // Attribute
        int number;
    // the user has access to public area.
    // Functions or Methods will use private data and the user can access the
    // values returned from the function or method. This is where you access and use
    // functions on the data.
    public:
        // Method to display value, don't need to explicitly define parameters
        // for variables in private section.
        // Prototype:
        void SetNumber(int n); // Setter - Initializes
        int GetNumber();       // Getter - Gets value
        void ShowNumber();     // Prototype for functions
};
// Function Prototypes

// Main Function
int main()
{
    // create variable of HelloNum class
    // n1 is an instance of HelloNum and is an object
    HelloNum n1;

    // Use dot operator to call a method or function for that instance
    n1.SetNumber(91);
    n1.ShowNumber();
    cout << "Number is " << n1.GetNumber() << endl;
    return 0;
}
// Function Definitions

// Function in HelloNum class
void HelloNum::ShowNumber()
{
    cout << "Your number is " << number << endl;
    return;
}

void HelloNum::SetNumber(int n)
{
    // Set private member
    number = n;
    return;
}
int HelloNum::GetNumber()
{
    // Returns private member
    return number;
}
