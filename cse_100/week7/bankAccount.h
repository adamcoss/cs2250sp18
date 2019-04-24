/*
 * =====================================================================================
 *
 *       Filename:  bankAccount.h
 *
 *    Description:  Header file for bankAccount class
 *
 *        Version:  1.0
 *        Created:  04/24/2019 02:04:46 PM
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

class bankAccount
{
    public:
        bankAccount();
        bankAccount(double balance,double interest,double accountNumber,string name);
        double getBalance();
        void deposit(double);
        void withdraw(double);
        void addInterest();
        void displayAccountSummary();

    private:
        double balance;
        int accountNumber;
        string name;
        double interest;
};
