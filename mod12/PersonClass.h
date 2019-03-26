/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.h
 *
 *    Description:  PersonClass information
 *
 *        Version:  1.0
 *        Created:  04/12/2018 08:41:54 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  PERSONCLASS__INC__
#define  PERSONCLASS_INC__

#include <iostream> // For C++
using namespace std; // For C++
class Person
{
    private:
        int age;
        string name;
        double weight;
    public:
        // Default Constructor
        Person(); // Has same name as class
        // TODO Set parameters as optionl
        // Person(int a = 0, string n = "none", double w = 0.0); // Default with init.
        // Second Constructor
        Person(int a, string n, double w);// Takes parameters.

        void SetAge(int a); // Setter
        int GetAge();       // Getter

        void SetName(string n);
        string GetName();

        void SetWeight(double w);
        double GetWeight();
        
        void ShowInfo() const; // Constant Getter, read only

        Person operator+(Person rhs); // Operator + overload
};

#endif /* ----- #ifndef PERSONCLASS__INC__ ----- */

