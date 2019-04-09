/*
 * =====================================================================================
 *
 *       Filename:  hw2.cpp
 *
 *    Description:  Homework 2
 *
 *        Version:  1.0
 *        Created:  04/08/2019 09:34:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), coss.adam@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

// Questions
// 1)
// #include <iostream>
// using namespace std;
//
// int main(){
//  double temp = 0;
//  double velocity = 0;
//
//  cout << "Velocity of sound in dry air." << endl;
//  cout << "Please enter the temperature of the air in Celsius." << endl;
//  cin >> temp;
//
//  velocity = 331.3 + 0.61*temp;
//
//  cout << "At " << temp << " degrees Celsius the velocity of sound is " << velocity << " m/s." << endl;
//      
//      return 0;
//
// }
// 2) 2
//    6
//    22
//    -66
//    16
// 3) myString1: This
//    myChar1: i
//    myChar2: s
//    myString2: my first C++ program
#include<iostream> 
#include<string>
using namespace std;
int    main(){ 
    string nameUser, nameInstructor, food, adjective, color, animal;
    int num;

    cout << "---Mad Lib Program---" << endl;
    cout << "Please enter your instructor's name:" << endl;
    cin >> nameInstructor;
    cout << "Please enter your name:" << endl;
    cin >> nameUser;
    cout << "Please enter a food:" << endl;
    cin >> food;
    cout << "Please enter a number between 100 and 120:" << endl;
    cin >> num;
    cout << "Please enter an adjective:" << endl;
    cin >> adjective;
    cout << "Please enter a color:" << endl;
    cin >> color;
    cout << "Please enter an animal:" << endl;
    cin >> animal;
    
    cout << "I am sorry I am unable to turn in my homework at this time. First, I ate a rotten " << food << ", which made me turn " << color << " and extremely ill. I came down with a fever of " << num << ". Next, my " << adjective << " pet " << animal << " must have smelled the remains of the " << food << " on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it here." << endl;
    cout << endl;
    cout << "Sincerely," << endl;
    cout << nameUser;
    cout << endl;

    return 0;
}
