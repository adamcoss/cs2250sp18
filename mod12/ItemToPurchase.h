/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/16/2018 04:26:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE_INC__
#include <iostream> // For C++
using namespace std; // For C++
// Class
class ItemToPurchase
{
    private:
        string itemName;
        int itemPrice;
        int itemQuantity;

    public:
        ItemToPurchase();

        void SetName(string n);
        string GetName();

        void SetPrice(int p);
        int GetPrice();

        void SetQuantity(int q);
        int GetQuantity();

        void ShowInfo() const;
        int AddItems(int item1, int item2) const;
};

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */
