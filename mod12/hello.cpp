/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  Hello world in C++
 *
 *        Version:  1.0
 *        Created:  04/10/2018 08:42:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> -- for C language
#include <iostream> // -- for C++, stream of input and output
using namespace std; // To use namespace in C++
// Constants

// Function Prototypes

// Main Function
int main() // int main() still used in C++
{
    int age;
    string name; // C++ has a string type
    // C++ method for print
    // Redirection operator "<<" sends parameter to "cout" to print
    // using "std" namespace is written std::cout unless declared at
    // beginning.

    cout << "Hello World C++" << endl;
    cout << "How old are you?" << endl;

    // cin to capture input ">>" redirects value to "age"
    cin >> age;
    cout << "You are " << age << " old" << endl;
    cout << "What is your name?" << endl;

    // Can take in a string up to the first whitespace
    // cin >> name;
    // cout << "Hello " << name << endl;
    // TODO Take care of enter key from previous cin calls
    // Takes all input including spaces. getline(<input>, <variable to save to>)
    cin.ignore(); // Should take care of extra ENTER key
    getline(cin, name);
    cout << "Hello " << name << endl;

    return 0;
}
// Function Definitions


