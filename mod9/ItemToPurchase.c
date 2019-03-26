/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2018 09:11:35 PM
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
#include "ItemToPurchase.h"
/*
 * ===  FUNCTION  ======================================================================
 *         Name:  MakeItemBlank
 *  Description:  Initializes item to none
 * =====================================================================================
 */

void MakeItemBlank(ItemToPurchase* item) //Make sure to dereference when trying to print (->)
{
    strcpy(item->itemName, "none");
    strcpy(item->itemDescription, "none");
    item->itemPrice = 0;
    item->itemQuantity = 0;
    return;
}


/*
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintItemCost
 *  Description:  Prints the total cost
 * =====================================================================================
 */

void PrintItemCost(ItemToPurchase item)
{
    int cost = (item.itemQuantity * item.itemPrice);
    printf("%s %d @ $%d = $%d", item.itemName, item.itemQuantity, item.itemPrice, cost);
    return;
}

/*
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintItemDescription
 *  Description:  Prints description of all the items
 * =====================================================================================
 */

void PrintItemDescription(ItemToPurchase item)
{
    printf("%s: %s\n", item.itemName, item.itemDescription);
    return;
}

