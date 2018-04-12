/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:48:53 AM
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
#include "PersonClass.h"
using namespace std; // For C++

// Constructor
Person::Person() // Has same name as class
{
    //INIT all/most variables/attributes
        age = 0;
        name = "None";
        weight = 0.0;
    return;
}
// Second Constructor
Person::Person(int a, string n, double w)
{
        age = a;
        name = n;
        weight = w;
    return;
}
/*
Person::Person(int a = 0, string n = "none", double w = 0.0)
{
    return;
}
*/

// Function Definitions
void Person::SetAge(int a)
{
    age = a;
    return;
}
int Person::GetAge()
{
    return age;
}

void Person::SetName(string n)
{
    name = n;
    return;
}
string Person::GetName()
{
    return name;
}

void Person::SetWeight(double w)
{
    weight = w;
    return;
}
double Person::GetWeight()
{
    return weight;
}
void Person::ShowInfo() const // Constant Getter, read only.
{
    // "this" operator is an alias to
    // the object itself.
    cout<<"Age: "<< this->age<<endl;
    cout<<"Name: "<< this->name<<endl;
    cout<<"Weight: "<< this->weight<<endl;
    return;
}
// DIFFERENT NOTATION
Person Person::operator+(Person rhs) // Operator + overload
{
    Person tmp; // Combines before overwriting original member
    tmp.age = age + rhs.age;
    //    First^     ^Second
    tmp.name = name + " " + rhs.name;
    tmp.weight = weight + rhs.weight;

    // Similar to 
    //   k = i + j
    //   return k
    //   i is current person
    //   j is the value on the RHS

    return tmp;
}
