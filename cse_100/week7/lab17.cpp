/*
 * =====================================================================================
 *
 *       Filename:  lab17.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/24/2019 03:10:16 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), coss.adam@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std;
#include "bankAccount.h"
int main()
{
    bankAccount myAccount(1000.50,0.05,1111, "John William");
    myAccount.deposit(500);
    myAccount.withdraw(200);
    myAccount.addInterest();
    myAccount.displayAccountSummary();
    
        return 0;
}
