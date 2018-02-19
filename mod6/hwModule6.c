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
#include <string.h>
// Constants
const int PLAYERS = 5;
const int ATTRI = 2;

// Function Prototypes

// Main Function
int main()
{
    //This program will store roster and rating information for a soccer 
    //team. Coaches rate players during tryouts to ensure a balanced team.
    //
    //(1) Prompt the user to input five pairs of numbers: A player's jersey 
    //number (0 - 99) and the player's rating (1 - 9). 
    //Store the jersey numbers in one int array and the ratings in 
    //another int array. Output these arrays (i.e., output the roster). (3 pts)
    int jersey[PLAYERS];
    int ratings[PLAYERS];

    // 1.1) Fill in values
    for(int i = 0; i < PLAYERS; i++)
    {
    printf("Enter player %d's jersey number:\n", i+1);
    scanf("%d", &jersey[i]);
    if(jersey[i] > 99)
    {
    printf("Enter player %d's jersey number:\n", i+1);
    scanf("%d", &jersey[i]);
    }
    printf("Enter player %d's rating:\n", i+1);
    scanf("%d", &ratings[i]);
    printf("\n");
    }
    printf("\nROSTER\n");
    for(int i = 0; i < PLAYERS; i++)
    {
    printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jersey[i], ratings[i]);
    }

    

    char userInput = 'y';
    while(userInput != 'q')
    {
    // {Begin loop
    // 2.0) Create menu
    // MENU

    printf("\nMENU\nu - Update player rating\na - Output players above a rating\nr - Replace player\no - Output roster\nq - Quit\n\nChoose an option:\n");
    scanf(" %c", &userInput);
    switch(userInput)
    {
        case 'u':{
                     int num = -1;
                     printf("Enter a jersey number:\n");
                     scanf("%d", &num);
                     for(int i = 0; i < PLAYERS; i++)
                     {
                         if(num == jersey[i])
                         {
                             printf("Enter a new rating for player:\n");
                             scanf("%d", &ratings[i]);
                         }
                     }
                 }
                 break;
        case 'a':{
                     int ratingNum = 0;
                     printf("Enter a rating:\n");
                     scanf("%d", &ratingNum);
                     printf("\nABOVE %d\n", ratingNum);
                     for(int i = 0; i < PLAYERS; i++)
                     {
                         if(ratingNum < ratings[i])
                         {
                             printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jersey[i], ratings[i]);
                         }
                     }
                 }
                 break;
        case 'r':{
                     int temp = 0;
                     int num = -1;
                     printf("Enter a jersey number:\n");
                     scanf("%d", &num);
                     printf("Enter a new jersey number:\n");
                     scanf("%d", &temp);
                     for(int i = 0; i < PLAYERS; i++)
                     {
                         if(num == jersey[i])
                         {
                             jersey[i] = temp;
                             printf("Enter a rating for the player:\n");
                             scanf("%d", &ratings[i]);
                         }
                     }
                 }
                 break;
        case 'o':{
                     printf("ROSTER\n");
                     for(int i = 0; i < PLAYERS; i++)
                     {
                         printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jersey[i], ratings[i]);
                     }
                 }
                 break;
    }
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
    }




    return 0;
}
// Function Definitions


