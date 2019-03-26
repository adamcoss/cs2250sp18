/*
 * =====================================================================================
 *
 *       Filename:  testPersonClass.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2018 08:43:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// #include <stdio.h> // For C
#include "PersonClass.h"
#include <iostream> // For C++
using namespace std; // For C++

// Constants

// Function Prototypes

// Main Function
int main()
{

    //char Person[4];
    /*
    Person p1;  // Before constructor
    p1.SetAge(31);
    p1.SetName("Adam");
    p1.SetWeight(195.0);
    cout<<"Age: "<<p1.GetAge()<<endl;
    cout<<"Name: "<<p1.GetName()<<endl;
    cout<<"Weight: "<<p1.GetWeight()<<endl;
    */

    Person p2;  // Default Constructor
    p2.ShowInfo();

    Person p3(4, "Waldo", 33.2);  // Values Constructor
    p3.ShowInfo();

    Person p4(66, "Mario", 2.0);
    p4.ShowInfo();

    p2 = p3 + p4;
    p2.ShowInfo();

    /*

    // Task: Define an array of 4 persons and set their values to defaults
    // Display all members
    int Size = 4;

    Person persons[Size];

    for(int i =0; i < Size; i++)
    {
        cout<<i<<" ";
        persons[i].ShowInfo();
        cout<<endl;
//        Persons[i].ShowInfo();
    }
    // Task 2: Enable Person + Person operation.
    // Add two ints, combine names, add doubles.
*/

    return 0;
}
// Function Definitions


