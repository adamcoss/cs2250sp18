/*
 * =====================================================================================
 *
 *       Filename:  task4.c
 *
 *    Description:  print first 20 even numbers
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:08:55 AM
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
    //Print first 20 even numbers.
    
//    int num = 1;
//    int N = 20;
    // second while loop
    int num1 = 0;
    int counter = 0;

/*
    while(num <= N / 2)
    {
        // print even numbers
        printf("%d\n", 2 * N++);
        // skip odd numbers
        
        // when 20 even numbers, break loop
    }
*/
    while(1)
    {
        if ( (num1 % 2) == 0 )
        {
            // print even numbers
            printf("Even number [%d]\n", num1);
        }
        else
        {
            // skip odd numbers
            printf("\tSkip odd number [%d]\n", num1);
            num1++; // increment condition
            continue; // Go to the top of the loop.
        }
    num1++;     //increment
    counter++;  //increment counter
        if(counter == 20)
        {
            break;// leave the loop
        }
    }// end of while loop
        
    return 0;
}
// Function Definitions


