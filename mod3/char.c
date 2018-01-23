/*
 * =====================================================================================
 *
 *       Filename:  char.c
 *
 *    Description:  Single Character assignment
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:51:11 AM
 *       Revision:  none
 *       Compiler:  gcc chars.c -o chars
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
    char input;
    int age;

    printf("Do you like to code?:");
    scanf("%c", &input);

    printf("1) You entered [%c]\n", input);
    printf("Do you really like to code?:\n");
    //Use an empty space before %c this will take car
    //of the previous ENTER char.
    scanf(" %c", &input);
    printf("2) You entered [%c]\n", input);
    printf("3) You entered [%c]\n", input);
    printf("What is your age?\n");
    scanf("%d", &age);
    printf("Your age is: %d", age);


    return 0;
}
// Function Definitions


