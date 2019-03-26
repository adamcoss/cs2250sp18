/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  Update map position:
 *                  X Cord, and Y Cord.
 *
 *        Version:  1.0
 *        Created:  02/22/2018 09:17:10 AM
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
const int X = 0;
const int Y = 1;
const int DIM = 2;
// Function Prototypes
// 1) Initialize point to (0,0)
// 
//  PASS BY VALUE: void InitPoint(int x, int y);
//  Takes a copy of integer without address
void InitPoint(int *xa, int *ya); //PASS BY REFERENCE: Takes the address to
                                // update outside of the function
// 2) Display current point position.
void ShowPoint(int x, int y);
// 3) Move/Update you point position.
void MovePoint(int x, int y, int *xa, int *ya); // Need two temp 
// var to calculate new position. temp var can be pass by value
// Pass xa and ya by reference to update outside of function.

// Main Function
int main()
{
//    int point[DIM];

    int x = -99;
    int y = -99;

    ShowPoint(x,y);
    InitPoint(&x,&y); // WHEN PASSING BY REFERENCE: You need to include '&'
                      // To assign to address.
    ShowPoint(x,y);
    MovePoint(3, 5, &x, &y);
    ShowPoint(x,y);

    return 0;
}
// Function Definitions
//Show current point
void ShowPoint(int x, int y)
{
    printf("X-position = %d\nY-position = %d\n", x, y);
}
//Initialize point
void InitPoint(int* xa, int* ya)
{
    printf("Inside InitPoint\n");
    ShowPoint(*xa,*ya); //TO UPDATE VALUES of an address, use '*'
    //Update the values, remember to use '*'
    *xa = 0;
    *ya = 0;
    ShowPoint(*xa,*ya);
    printf("End InitPoint\n");

    return;
}
// Move Point with pass by reference:
void MovePoint(int x, int y, int *xa, int *ya) // Need two temp 
{
    *xa = x;        // Pass int x and int y from function to address of
    *ya = y;        // xa and ya to be used outside of the function
    return;
}
