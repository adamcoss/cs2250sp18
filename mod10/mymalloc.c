/*
 * =====================================================================================
 *
 *       Filename:  mymalloc.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2018 12:35:43 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    int num;
    int* sa = NULL; // define as NULL for pointer or array.

    printf("How many numbers do you need?\n");
    scanf("%d", &num);
    // malloc( # of bytes) returns address
    // %lu long unsigned
    printf("int is [%lu] bytes\n", sizeof(int));
    printf("int array of [%d] is [%lu] bytes\n", num, num * sizeof(int));

    sa = (int*) malloc(num * sizeof(int));
    // Cast address to pointer type (type*).
    // INIT array
    for(int i = 0; i < num; i++){
        // sa is an address that knows the array so it can act like an array
        sa[i] = i + 10;
    }
    //diplay the array
    for(int i = 0; i < num; i++){
        // sa is an address that knows the array so it can act like an array
        printf("%d element is [%d]\n", i, sa[i]);
    }

    free(sa); // value is not changed, free only removes memory allocation
    return 0;
}
// Function Definitions


