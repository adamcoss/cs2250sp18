/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2018 10:46:55 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include "ShoppingCart.h"
// Function Definitions
// Add item
ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart)
{
    strcpy(cart.cartItems[cart.cartSize].itemName, item.itemName);
    strcpy(cart.cartItems[cart.cartSize].itemDescription, item.itemDescription);
    cart.cartItems[cart.cartSize].itemPrice = item.itemPrice;
    cart.cartItems[cart.cartSize].itemQuantity = item.itemQuantity;

    ++cart.cartSize;
    return cart;
}
// Remove item
ShoppingCart RemoveItem(char name[50], ShoppingCart cart)
{
    int i = 0;
    while(i <= cart.cartSize)
    {
        if(i == cart.cartSize)
        {
            printf("Item not found in cart. Nothing removed.\n");
            printf("\n");
            ++i;
        }
        if(strcmp(cart.cartItems[i].itemName, name) == 0)
        {
            for(i = i; i < cart.cartSize - 1; ++i)
            {
                cart.cartItems[i] = cart.cartItems[i + 1];
            }
            --cart.cartSize;
            printf("\n");
            break;
        }
        ++i;
    }
    return cart;
}
// Change an item
ShoppingCart ModifyItem(ItemToPurchase item, ShoppingCart cart)
{
    int i = 0;
    while(i <= cart.cartSize)
    {
        if(i == cart.cartSize)
        {
            printf("Item not found in cart. Nothing modified.\n");
            printf("\n");
            ++i;
        }
        if(strcmp(cart.cartItems[i].itemName, item.itemName) == 0)
        {
            cart.cartItems[i].itemQuantity = item.itemQuantity;
            break;
        }
        ++i;
    }
    return cart;
}
// show number of items in the cart
int GetNumItemsInCart(ShoppingCart cart)
{
    int itemTotal = 0;
    for(int i = 0; i < cart.cartSize; ++i)
    {
        itemTotal = (itemTotal + cart.cartItems[i].itemQuantity);
    }
    return itemTotal;
}
// show cost of items
int GetCostOfCart(ShoppingCart cart)
{
    int cartTotal = 0;
    for(int i = 0; i < cart.cartSize; ++i)
    {
        cartTotal = cartTotal + (cart.cartItems[i].itemPrice * cart.cartItems[i].itemQuantity);
    }
    return cartTotal;
}
// total number of items in cart
void PrintTotal(ShoppingCart cart)
{
    int numItems = GetNumItemsInCart(cart);
    int cartTotal = GetCostOfCart(cart);
    printf("%s's Shopping Cart - %s\n", cart.customerName, cart.currentDate);
    printf("Number of Items: %d\n", numItems);
    printf("\n");
    if(numItems == 0)
    {
        printf("SHOPPING CART IS EMPTY\n");
    }
    for(int i = 0; i < cart.cartSize; ++i)
    {
        PrintItemCost(cart.cartItems[i]);
    }
    printf("\n");
    printf("Total: $%d\n", cartTotal);
    printf("\n");
    return;
}
// show description of item
void PrintDescriptions(ShoppingCart cart)
{
    printf("%s's Shopping Cart - %s\n", cart.customerName, cart.currentDate);
    printf("\n");
    printf("Item Descriptions\n");
    for(int i = 0; i < cart.cartSize; ++i)
    {
        PrintItemDescription(cart.cartItems[i]);
    }
    printf("\n");
    return;
}
// MENU
char PrintMenu(ShoppingCart* cart)
{
    char userChar;
    printf("MENU\n");
    printf("a - Add item to cart\n");
    printf("r - Remove item from cart\n");
    printf("c - Change item quantity\n");
    printf("i - Output items' descriptions\n");
    printf("o - Output shopping cart\n");
    printf("q - Quit\n");
    printf("\n");
    printf("Choose an option:\n");
    scanf(" %c", &userChar);

    while(userChar != 'a' || userChar!= 'r' || userChar != 'c' || 
            userChar != 'i' || userChar != 'o' || userChar != 'q')
    {
        if(userChar == 'a' || userChar== 'r' || userChar == 'c' || 
                userChar == 'i' || userChar == 'o' || userChar == 'q')
        {
            break;
        }
        printf("Choose an option:\n");
        scanf(" %c", &userChar);
        if(userChar == 'a' || userChar== 'r' || userChar == 'c' || 
                userChar == 'i' || userChar == 'o' || userChar == 'q')
        {
            break;
        }
    }
    if(userChar == 'a')
    {
        getchar();
        ItemToPurchase item;
        printf("ADD ITEM TO CART\n");
        printf("Enter the item name:\n");
        fgets(item.itemName, sizeof(item.itemName), stdin);
        for(int i = 0; i < sizeof(item.itemName); ++i)
        {
            if(item.itemName[i] == '\n')
            {
                item.itemName[i] = '\0';
            }
        }
        printf("Enter the item description:\n");
        fgets(item.itemDescription, sizeof(item.itemDescription), stdin);
        for(int i = 0; i < sizeof(item.itemDescription); ++i)
        {
            if(item.itemDescription[i] == '\n')
            {
                item.itemDescription[i] = '\0';
            }
        }
        printf("Enter the item price:\n");
        scanf(" %d", &item.itemPrice);
        printf("Enter the item quantity:\n\n");
        getchar();
        scanf(" %d", &item.itemQuantity);
        getchar();
        *cart = AddItem(item, *cart);
    }
    else if(userChar == 'r')
    {
        getchar();
        char deleteItem[50];
        printf("REMOVE ITEM FROM CART\n");
        printf("Enter name of item to remove:\n");
        fgets(deleteItem, sizeof(deleteItem), stdin);
        for(int i = 0; i < sizeof(deleteItem); ++i)
        {
            if(deleteItem[i] == '\n')
            {
                deleteItem[i] = '\0';
            }
        }
        *cart = RemoveItem(deleteItem, *cart);
    }
    else if(userChar == 'c')
    {
        getchar();
        ItemToPurchase item;
        char modItem[50];
        int modQuantity;
        printf("CHANGE ITEM QUANTITY\n");
        printf("Enter the item name:\n");
        fgets(modItem, sizeof(modItem), stdin);
        for(int i = 0; i < sizeof(modItem); ++i)
        {
            if(modItem[i] == '\n')
            {
                modItem[i] = '\0';
            }
        }
        printf("Enter the new quantity:\n");
        scanf(" %d", &modQuantity);
        strcpy(item.itemName, modItem);
        item.itemQuantity = modQuantity;
        *cart = ModifyItem(item, *cart);
    }
    else if(userChar == 'i')
    {
        getchar();
        printf("OUTPUT ITEMS' DESCRIPTIONS\n");
        PrintDescriptions(*cart);
    }
    else if(userChar == 'o')
    {
        getchar();
        printf("OUTPUT SHOPPING CART\n");
        PrintTotal(*cart);
    }
    return userChar;
}
