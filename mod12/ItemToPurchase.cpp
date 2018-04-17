/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.cpp
 *
 *    Description:  ItemToPurchase class
 *
 *        Version:  1.0
 *        Created:  04/16/2018 04:26:01 PM
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

ItemToPurchase::ItemToPurchase()
{
        itemName = "none";
        itemPrice = 0;
        itemQuantity = 0;
    return;
}

void ItemToPurchase::SetName(string n)
{
    itemName = n;
    return;
}

string ItemToPurchase::GetName()
{
    return itemName;
}

void ItemToPurchase::SetPrice(int p)
{
    itemPrice = p;
    return;
}

int ItemToPurchase::GetPrice()
{
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int q)
{
    itemQuantity = q;
    return;
}

int ItemToPurchase::GetQuantity()
{
    return itemQuantity;
}

void ItemToPurchase::ShowInfo() const
{
    cout<<this->itemName<<" "<<this->itemQuantity<<" @ $"<<this->itemPrice<<" = $"<<this->itemPrice * itemQuantity<<endl;
}
