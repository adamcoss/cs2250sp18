/*
 * =====================================================================================
 *
 *       Filename:  pa1Mod11-2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2018 11:32:42 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
 #include <stdio.h> // For C
 #include <string.h> // For C
 #include <stdlib.h> // For C
//#include <iostream> // For C++
//using namespace std; // For C++

// Constants

// Function Prototypes

// Main Function
int main()
{
    char name[]= "";
    char lname[]="";
    char fname[]="";
    char *space = ' ';
    char *sc = ',';
    space = (char*)malloc(50);
    sc = (char*)malloc(50);
    int spaceInd = 0;

    printf("Enter name:\n");
    fgets(name, 50, stdin);

    spaceInd = strchr(name, space);
    //sc = strstr(name, sc);
    printf("SPACE[%s]\n", space);
    printf("COMMA[%s]\n", sc);
    printf("FIRST [%s]\nLAST [%s]\n", fname, lname);

    return 0;
}
// Function Definitions


