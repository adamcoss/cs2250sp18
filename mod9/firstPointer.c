/*
 * =====================================================================================
 *
 *       Filename:  firstPointer.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:56:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int i = 5;
    // A pointer to an integer (pointer = address)
    int* pi; // '*' used as pointer. The pointer stores addresses not int

    printf("Value of  i [%14d] \taddress[%p]\n", i, &i);
    printf("Value of pi [%14p] \taddress[%p]\n", pi, &pi);
    // Assign value to pointer
    pi = &i;
    printf("Value of pi [%14p] \taddress[%p]\n", pi, &pi);
    // Modify int through point with dereference '*'
    *pi = 6;
    printf("Value of  i [%14d] \taddress[%p]\n", i, &i);
    printf("Value of pi [%14p] \taddress[%d]\n", pi, *pi);
    i = 99;
    printf("Value of  i [%14d] \taddress[%p]\n", i, &i);
    printf("Value of pi [%14p] \taddress[%d]\n", pi, *pi);

    return 0;
}
// Function Definitions


