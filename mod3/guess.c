/*
 * =====================================================================================
 *
 *       Filename:  guess.c
 *
 *    Description:  Guess my number 1-10
 *
 *        Version:  1.0
 *        Created:  01/25/2018 10:07:48 AM
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
#include <time.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int input;
    int guess;

    printf("Please enter a number 0-9\n");
    scanf("%d", &input);

    srand((int)time(0)); // get your seed
    guess = rand() % 10; //get your guess number



    printf("You entered %d and guess is %d \n", input, guess);



    return 0;
}
// Function Definitions


