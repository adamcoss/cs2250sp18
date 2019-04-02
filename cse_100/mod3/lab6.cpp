/*
 * =====================================================================================
 *
 *       Filename:  lab6.cpp
 *
 *    Description:  Lab 6 Understand  the mechanism of  Nested if/else Statements
 *
 *        Version:  1.0
 *        Created:  04/01/2019 10:52:36 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), coss.adam@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
// This program determines the fee for a cat or dog pet tag.
// It uses nested if/else statements.
// Adam Coss
#include <iostream> 
#include <string>
using namespace std;

int main() 
{ 
    string pet;         // "cat"or "dog"
    char spayed;        // 'y' or 'n'

    // Get pet type and spaying information
    cout << "Enter the pet type (cat or dog): ";
    cin  >> pet;

    // Determine the pet tag fee 
    if ((pet != "cat")&&(pet != "dog"))
    {   cout << "Only cats and dogs need pet tags. \n";
    }
    else
    {
        cout << "Has the pet been spayed or neutered (y/n)? ";
        cin  >> spayed;
    }
    if (pet == "cat")
    {  if ((spayed == 'y')||(spayed == 'Y')) 
        cout << "Fee is $4.00 \n";
        else
            cout << "Fee is $8.00 \n";
    }
    else if (pet == "dog")
    {  if ((spayed == 'y')||(spayed == 'Y'))
        cout << "Fee is $6.00 \n";
        else
            cout << "Fee is $12.00 \n";
    }
    else

        return 0;
}


