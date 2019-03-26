/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  More work with for loops;
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:52:08 AM
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
const int ROW = 10;
const int COL = 10;
// Function Prototypes

// Main Function
int main()
{
    for(int r = 1; r <= COL; r++)
    {
        for(int i = 1; i <= ROW; i++)
        {
        printf("[%3d] ", r * i);
    }// end of row
        printf("\n");
       //value of c? NO it is out of scope
       //r and c only exist within the loop


}       // end of col

    return 0;
}
// Function Definitions


