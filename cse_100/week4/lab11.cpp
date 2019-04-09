/*
 * =====================================================================================
 *
 *       Filename:  lab11.cpp
 *
 *    Description:  Lab 11 - Problem Solving:Use appropriate loop construct 
 *                  (for, while, or do while)
 *
 *        Version:  1.0
 *        Created:  04/06/2019 06:10:50 PM
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

int main()
{
    double deposit[3], finalBal[3], withdrawn[3], monthInt[3];
    double balance, interest;
    int i = 0;

    cout << "Balance of savings for 3 months." << endl;
    cout << "Please enter the starting balance:" << endl;
    cin >> balance;
    cout << "Please enter the annual interest rate:" << endl;
    cin >> interest;
    while(i < 3)
    {
        cout << "Enter the total amount deposited for month " << i+1 << ":" << endl;
        cin >> deposit[i];
        while(deposit < 0)
        {
            cout << "Please enter a positive number." << endl;
            cin >> deposit[i];
        }
        finalBal[i] = balance + deposit[i];

        cout << "Enter the total withdrawls for month " << i+1 << ":" << endl;
        cin >> withdrawn[i];
        while(withdrawn[i] < 0)
        {
            cout << "Please enter a positive number." << endl;
            cin >> withdrawn[i];
        }
        while(withdrawn[i] > deposit[i] + balance)
        {
            cout << "Please enter an amount less than the balance:" << endl;
            cin >> withdrawn[i];
        }
        finalBal[i] = balance - withdrawn[i];
        monthInt[i] = ((balance + finalBal[i])/2)*interest/12;
        i++;
    }

    cout << "3-Month Report:" << endl;
    cout << "Starting Balance:\t\t" << balance << endl;
    cout << "Total Deposits:\t\t\t"<< deposit[0]+deposit[1]+deposit[2] << endl;
    cout << "Total Withdrawals:\t\t" << withdrawn[1]+withdrawn[2]+withdrawn[0] << endl;
    cout << "Total Interest Paid:\t\t" << monthInt[0]+monthInt[1]+monthInt[2] << endl;
    cout << "Final Balance:\t\t\t" << finalBal[0]+finalBal[1]+finalBal[2] << endl;

    return 0;
}

