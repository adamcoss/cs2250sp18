/*
 * =====================================================================================
 *
 *       Filename:  pa1mod12.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/16/2018 04:25:27 PM
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
#include "ItemToPurchase.h"
using namespace std; // For C++

// Constants

// Function Prototypes

// Main Function
int main()
{
    string n = "";
    int p;
    int q;

    ItemToPurchase item1;
    ItemToPurchase item2;
    ItemToPurchase total;

    cout<<"Item 1"<<endl;
    cout<<"Enter the item name:"<<endl;
    cin >> n;
    item1.SetName(n);
    cout<<"Enter the item price:"<<endl;
    cin >> p;
    item1.SetPrice(p);
    cout<<"Enter the item quantity:"<<endl;
    cin >> q;
    item1.SetQuantity(q);
    cout<<endl;

    cin.ignore();
    cout<<"Item 2"<<endl;
    cout<<"Enter the item name:"<<endl;
    cin >> n;
    item2.SetName(n);
    cout<<"Enter the item price:"<<endl;
    cin >> p;
    item2.SetPrice(p);
    cout<<"Enter the item quantity:"<<endl;
    cin >> q;
    item2.SetQuantity(q);

    cout<<"TOTAL COST"<<endl;
    item1.ShowInfo();
    item2.ShowInfo();
    cout<<endl;
    cout<<"Total: $"<< ((item1.GetPrice()*item1.GetQuantity())+
        (item2.GetPrice()*item2.GetQuantity()))<<endl;
    //cout<<"Total: $"<< total.AddItems(item1.GetPrice(), item2.GetPrice())<<endl;

    return 0;
}
// Function Definitions


