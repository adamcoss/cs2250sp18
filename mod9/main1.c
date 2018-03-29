/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2018 10:46:41 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "ShoppingCart.h"

int main()
{
    ShoppingCart cart;
    for(int i = 0; i < 10; ++i)
    {
        MakeItemBlank(&cart.cartItems[i]);
    }
    printf("Enter Customer's Name:\n");
    fgets(cart.customerName, 50, stdin);
    for(int i = 0; i < sizeof(cart.customerName); ++i)
    {
        if(cart.customerName[i] == '\n')
        {
            cart.customerName[i] = '\0';
        }
    }
    printf("Enter Today's Date:\n");
    fgets(cart.currentDate, 50, stdin);
    for(int i = 0; i < sizeof(cart.currentDate); ++i)
    {
        if(cart.currentDate[i] == '\n')
        {
            cart.currentDate[i] = '\0';
        }
    }
    printf("\n");
    printf("Customer Name: %s\n", cart.customerName);
    printf("Today's Date: %s\n", cart.currentDate);
    printf("\n");
    char userChar;
    cart.cartSize = 0;
    userChar = PrintMenu(&cart);
    while(userChar != 'q')
    {
        userChar = PrintMenu(&cart);
    }
    return 0;
}

