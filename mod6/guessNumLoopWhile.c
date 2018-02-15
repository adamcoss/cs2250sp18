/*
 * =====================================================================================
 *
 *       Filename:  guessnum.c
 *
 *    Description:  Create a guessing game with a loop
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:28:46 AM
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
const int LEN = 5;
const int NUM = 20;
// Function Prototypes

// Main Function
int main()
{
    int input[LEN];
    int guess = 0;
    int opp = 0;
    char ans = 'y';

    srand((int)time(0));
    // TASK: When done, ask "Do you want to play again"
    // 'y' will repeat.
    // 'n' will quit.
    do
    {
        // 1) Create a rand num 0-20
        guess = rand()% NUM;
        //    for(int i = 0; i < LEN; i++)
        while(opp < LEN)
        {
            // 2) Ask user to guess num
            printf("Please enter a number 0-%d:\n", NUM);
            scanf("%d", &input[opp]);
            if(input[opp] > NUM || input[opp] < 0)
            {
                continue; //Validate the input and restart
                // the loop
            }
            if(input[opp] < guess)
            {
                // 3) If num < randnum print "Go higher"
                printf("Go higher!\n");
            }
            else if (input[opp] == guess)
            {
                printf("You got it!!\n");
                break; // Exit loop
            }
            else
                //      else print "Go lower"
            {
                printf("Go lower.\n");
            }
            opp++;
        }
        // 4) You have 5 chances to guess correcty
        printf("You entered:\n");
        for(int i = 0; i <= opp; i++)
        {
            printf(" [ %d ] \n", input[i]);
        }
        printf("Do you want to play again?\n");
        scanf(" %c", &ans);// remember to take the ENTER key into consideration
        opp = 0; // reset values
    }       // end of while loop ans != 'n'
    while(ans != 'n');
    printf("Thanks for playing\n");

    return 0;
}
// Function Definitions


