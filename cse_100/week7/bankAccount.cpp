/*
 * =====================================================================================
 *
 *       Filename:  bankAccount.cpp
 *
 *    Description:  Implementation of bankAccount class
 *
 *        Version:  1.0
 *        Created:  04/24/2019 02:38:22 PM
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

bankAccount::bankAccount()
{
    balance = 0;
    accountNumber = 0;
    name = "";
    interest = 0;
}
bankAccount::bankAccount(double initBal,double initInt,double initAcctNum,string initName)
{
    balance = initBal;
    accountNumber = initAcctNum;
    name = initName;
    interest = initInt;
}
void bankAccount::deposit(double deposit)
{
    balance = balance + deposit;
}
void bankAccount::withdraw(double withdraw)
{
    balance = balance - withdraw;
}
void bankAccount::addInterest()
{
    balance = balance*(1+interest);
}
void bankAccount::displayAccountSummary()
{
    cout << "Account Number:\t" << accountNumber << endl;
    cout << "Owner's Name:\t" << name << endl;
    cout << "Balance:\t" << balance << endl;
    cout << "Interest Rate:\t" << interest << "%" << endl;
}

