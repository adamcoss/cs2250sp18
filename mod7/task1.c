/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Take two numbers (floats) from the users
 *                  Define the following functions:
 *                  1) TheSum: ret sum of two numbers.
 *                  2) TheProd: ret prod of two numbers.
 *
 *        Version:  1.0
 *        Created:  02/20/2018 09:32:03 AM
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
char Menu(void);
int TheSum(double num1, double num2);
double TheProd(double num1, double num2);

// Main Function
int main()
{
    double num1;
    double num2;
    char input;

            printf("Enter a number:\n");
            scanf("%lf", &num1);
            printf("Enter a second number:\n");
            scanf("%lf", &num2);
    input = Menu();
    switch(input)
    {
        case 's':
            printf("The sum of %lf and %lf is: [%d]\n", num1, num2, TheSum(num1, num2));
            break;
        case 'p':
            printf("The product of %lf and %lf is: [%lf]\n", num1, num2, TheProd(num1, num2));
            break;
        default:
            printf("invalid choice\n");
    }

    return 0;
}
// Function Definitions

// Func TheSum
// returns sum of two numbers
int TheSum(double num1, double num2)
{
    // Return int of sum, use casting
    return (int) (num1 + num2);
}
// Func TheProd
// returns prod of two numbers
double TheProd(double num1, double num2)
{
    return num1 * num2;
}
// Func Menu
// Capture char to determine which operation to perform.
char Menu(void)
{
    char in = 'n';

    printf("Would you like the sum (s) or product (p)?\n");
    scanf(" %c", &in);


    return in;
}

