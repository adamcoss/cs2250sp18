/*
 * =====================================================================================
 *
 *       Filename:  multiInput.c
 *
 *    Description:  Multiple inputs with scanf
 *
 *        Version:  1.0
 *        Created:  04/03/2018 08:42:22 AM
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
void Help(void);

// Main Function
int main()
{
    int hr, min;
    char AmPm[3];
    int rc = 0;
    /*
    int feet, in;

    printf("Enter feet and inches separated by a space\n");
    scanf("%d %d", &feet, &in);
    // Place holders mimic placement or format of entered values
    // User will have to enter like this:
    // Ex "1 6" will store 1 into var feet and 6 into var in.
    printf("You entered: %d feet and %d inches\n", feet, in);
    */
    printf("Enter the time in this format: HH:MM AM/PM\n");
    rc = scanf("%2d:%2d %2s", &hr, &min, AmPm);
    // rc now is equal to 3.
    // if(rc != 3) is a valid if statement
    if(scanf("%2d:%2d %2s", &hr, &min, AmPm) != 3)
    // REQUIRES ':' for correct input!
    {
        //printf("Bad input\n");
        Help();
    }
    else
    {
    printf("You entered: %2d:%2d %s\n", hr, min, AmPm);
    }
    return 0;
}
// Function Definitions

void Help(void)
{
    printf("Bad format. Please make sure you enter time as shown below:\n");
    printf("HH:MM AM/PM\n");
}
