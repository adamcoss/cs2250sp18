/*
 * =====================================================================================
 *
 *       Filename:  hwModule6.c
 *
 *    Description:  Programming Assignment 5.17
 *
 *        Version:  1.0
 *        Created:  02/15/2018 09:40:26 AM
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
const int PLAYERS = 5;
const int ATTRI = 2;

// Function Prototypes

// Main Function
int main()
{
    // 1.0) Define variables for values
    int jersey[PLAYERS];
    int ratings[ATTRI];
    // 1.1) Fill in values
    for(int i = 0; i < PLAYERS; i++)
    {
    printf("Enter player %d's jersey number:\n", i+1);
    scanf("%d", &jersey[i]);
    if(jersey[i] > 99)
    {
        printf("Enter number 0-99\n");
        scanf("%d", &jersey[i]);
    }

    printf("Enter player %d's rating:\n", i+1);
    scanf("%d", &ratings[i]);
    }
    for(int i = 0; i < PLAYERS; i++)
    {
    printf("Player %d jersey [%d]\n", i+1, jersey[i]);
    printf("Player %d rating [%d]\n", i+1, ratings[i]);
    }

    


    // {Begin loop
    // 2.0) Create menu
    // MENU
    // u - Update player rating
    // a - Output players above a rating
    // r - Replace player
    // o - Output roster
    // q - Quit
    //
    // Choose an option:
    
    // 3.0) Create roster menu option
    
    // 4.0) Update player rating
    
    // 5.0) Output players above specific rating
    
    // 6.0) Replace player menu option
    // }end of loop




    return 0;
}
// Function Definitions


