/*
 * =====================================================================================
 *
 *       Filename:  lab16.cpp
 *
 *    Description:  Lab 16 - Creating Functions
 *
 *        Version:  1.0
 *        Created:  04/21/2019 11:11:07 PM
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
double getRadius();
double findArea(double r);
double findCircumference(double r);
int main()
{
    double radius; //the radius of the circle
    double area;             //the area of the circle
    double circumference;    //the circumference of the circle
    //get the value of the radius from the user
    radius = getRadius();
    //determine the area and circumference
    area = findArea(radius);
    circumference = findCircumference(radius);
    //output the results
    cout << "A circle of radius " << radius << " has an area of: " << area <<endl;
    cout << "and a circumference of: "<< circumference << endl;
    return 0;
}

double getRadius()
{
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    return r;
}
double findArea(double r)
{
    return 3.14159*r*r;
}
double findCircumference(double r)
{
    return 2*3.14159*r;
}
