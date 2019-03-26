/*
 * =====================================================================================
 *
 *       Filename:  HelloFunc.c
 *
 *    Description:  Learn to use functions
 *
 *        Version:  1.0
 *        Created:  02/20/2018 08:41:20 AM
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
void Hello(void);               // 'void' argument takes no parameters,
                                // 'void' type returns no values.
void HelloMany(int num);        // Will take one int var as parameter.
int HelloNum(void);                 // 'int' will return an integer value.
int HelloNumMany(int num);          // will take an int and return an int.
int MySquare(int n);                

// Main Function
int main()
{
    Hello();                    // Call by typing name followed by ();
    Hello();
    HelloMany(3);               // Calls function and passes parameter to
                                // the number of times the function prints.
    int n = HelloNum();
    printf("I got %d from HelloNum()\n", n);
    n = HelloNumMany(5);
    printf("I got %d from HelloNumMany()\n", n);
    printf("The square of 4 is %d\n", MySquare(4));


    return 0;
}
// Function Definitions
//
// Func: Hello
// Prints message
void Hello(void)
{
    printf("Hello Ogden World\n");
    return; // return optional for void type functions. Can not return
            // a value for void type.
}
// Fund: HelloMany
// Prints message num times.
void HelloMany(int num)
{
    for(int i = 0; i < num; i++)
    {
        printf("Weber State Great, Great, Great!\n");
    }
    return;
}
// Func: HelloNum
// returns an integer.
int HelloNum(void)                 // 'int' will return an integer value.
{
    int num = 99;
    return num;                  // will return int value only. You can use 
                                // variable to return num
}
// Func: HelloNumMany
// takes an integer and returns
// the sum of Hello print statements
int HelloNumMany(int num)          // will take an int and return an int.
{
    int count = 0;
    for(int i = 0; i < num; i++)
    {
        printf("%d HelloNumMany\n", i);
        count++;
    }
    return count;
}
// Func: MySquare
// will return the square of a number
int MySquare(int n)
{
    return n * n;               // Return can have operators.
}





