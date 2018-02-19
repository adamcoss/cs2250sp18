/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Programming assignment 1 module 6
 *
 *        Version:  1.0
 *        Created:  02/18/2018 11:39:22 AM
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
const int NUM_PEOPLE = 5;
// Function Prototypes

// Main Function
int main()
{
    double weights[NUM_PEOPLE];
    int i;
    double tot = 0;
    double max = 0;

    //(1) Prompt the user to enter five numbers, being five people's 
    //weights. Store the numbers in an array of doubles. Output the array's 
    //numbers on one line, each number followed by one space. (2 pts)
    for(i = 0; i < NUM_PEOPLE; i++)
    {
    printf("Enter weight %d:\n", i + 1);
    scanf("%lf", &weights[i]);
    tot = tot + weights[i];
    if(weights[i] > max)
        {
            max = weights[i];
        }
    }
    printf("You entered: ");
    for(i = 0; i < NUM_PEOPLE; i++)
    {
    printf("%lf ", weights[i]);
    }
    printf("\n");
    //(2) Also output the total weight, by summing the array's elements. (1 pt)
    printf("\n");
    printf("Total weight: %lf\n", tot);

    //(3) Also output the average of the array's elements. (1 pt)
    printf("Average weight: %lf\n", tot / NUM_PEOPLE);

    //(4) Also output the max array element. (2 pts)
    printf("Max weight: %lf\n", max);


    return 0;
}
// Function Definitions


