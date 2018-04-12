/*
 * =====================================================================================
 *
 *       Filename:  pa2main.c
 *
 *    Description:  9.7 Ch 9 Program: Data visualization (C)
 *
 *        Version:  1.0
 *        Created:  04/11/2018 08:09:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h> // For C
#include <stdbool.h> // For C
#include <ctype.h> // For C
#include <string.h> // For C
//#include <iostream> // For C++
//using namespace std; // For C++

// Constants

// Function Prototypes

// Main Function
/*
 * (1) Prompt the user for a title for data. Output the title. (1 pt) 
 * Ex:
 *
 * Enter a title for the data:
 * Number of Novels Authored
 * You entered: Number of Novels Authored
 *
 * (2) Prompt the user for the headers of two columns of a table. Output the column headers. (1 pt) 
 *
 * Ex:
 *
 * Enter the column 1 header:
 * Author name
 * You entered: Author name
 *
 * Enter the column 2 header:
 * Number of novels
 * You entered: Number of novels
 * (3) Prompt the user for data points. Data points must be in this format: string, int. Store the information before the comma into a string variable and the information after the comma into an integer. The user will enter -1 when they have finished entering data points. Output the data points. Store the string components of the data points in an array of strings. Store the integer components of the data points in an array of integers. (4 pts) 
 *
 * Ex:
 *
 * Enter a data point (-1 to stop input):
 * Jane Austen, 6
 * Data string: Jane Austen
 * Data integer: 6
 *
 * (4) Perform error checking for the data point entries. If any of the following errors occurs, output the appropriate error message and prompt again for a valid data point.
 *
 * If entry has no comma
 * Output: Error: No comma in string. (1 pt)
 * If entry has more than one comma
 * Output: Error: Too many commas in input. (1 pt)
 * If entry after the comma is not an integer
 * Output: Error: Comma not followed by an integer. (2 pts)
 *
 * Ex:
 *
 * Enter a data point (-1 to stop input):
 * Ernest Hemingway 9
 * Error: No comma in string.
 *
 * Enter a data point (-1 to stop input):
 * Ernest, Hemingway, 9
 * Error: Too many commas in input.
 *
 * Enter a data point (-1 to stop input):
 * Ernest Hemingway, nine
 * Error: Comma not followed by an integer.
 *
 * Enter a valid data point:
 * Ernest Hemingway, 9
 * Data string: Ernest Hemingway
 * Data integer: 9
 *
 * (5) Output the information in a formatted table. The title is right justified with a width of 33. Column 1 has a width of 20. Column 2 has a width of 23. (3 pts) 
 *
 * Ex:
 *
 *  Number of Novels Authored
 *  Author name         |       Number of novels
 *  --------------------------------------------
 *  Jane Austen         |                      6
 *  Charles Dickens     |                     20
 *  Ernest Hemingway    |                      9
 *  Jack Kerouac        |                     22
 *  F. Scott Fitzgerald |                      8
 *  Mary Shelley        |                      7
 *  Charlotte Bronte    |                      5
 *  Mark Twain          |                     11
 *  Agatha Christie     |                     73
 *  Ian Flemming        |                     14
 *  J.K. Rowling        |                     14
 *  Stephen King        |                     54
 *  Oscar Wilde         |                      1
 *
 *  (6) Output the information as a formatted histogram. Each name is right justified with a width of 20. (4 pts) 
 *
 *  Ex:
 *
 *   Jane Austen ******
 *   Charles Dickens ********************
 *   Ernest Hemingway *********
 *   Jack Kerouac **********************
 *   F. Scott Fitzgerald ********
 *   Mary Shelley *******
 *   Charlotte Bronte *****
 *   Mark Twain ***********
 *   Agatha Christie *************************************************************************
 *   Ian Flemming **************
 *   J.K. Rowling **************
 *   Stephen King ******************************************************
 *   Oscar Wilde *
 */
int main()
{
    char title[] = "";
    char col1[] = "";
    char col2[] = "";
    char dstr[] = "";
    char dname[50][50];
    char* chr;
    int charCount = 0;
    int count = 0;
    bool inputDone = false;

    printf("Enter a title for the data:\n");
    fgets(title, 50 , stdin);
    printf("You entered: %s\n", title);

    printf("Enter the column 1 header:\n");
    fgets(col1, 100, stdin);
    printf("You entered: %s\n", col1);

    printf("Enter the column 2 header:\n");
    fgets(col2, 100, stdin);
    printf("You entered: %s\n", col2);

    col1[strlen(col1) - 1] = '\0';
    col2[strlen(col2) - 1] = '\0';

    // Take input
    while(!inputDone)
    {
        fflush(stdin);
        printf("Enter a data point (-1 to stop input):\n");
        fgets(dstr, 50, stdin);
        dstr[strlen(dstr) - 1] = '\0';
        // -1 to exit loop
        //if(strcmp(dstr, "-1") == 0)
        if(strcmp(dstr, "-1"))
        {
            inputDone = true;
            // continue;
            break;
        }
        // check for ',' in string
        chr = strchr(dstr, ',');
        if(chr != NULL)             // if comma exists, start the loop to count
        {                           // number of commas.
            for(int i = 0; i < strlen(dstr); i++)
            {
                if(dstr[i] == ',')
                {
                    charCount++;
                }
            }
            // if there are more than 1 comma, print error
            if(charCount > 1)
            {
                printf("Error: Too many commas in input.\n\n");
                charCount = 0;
                continue;
            }
            else if(charCount == 1)
            {
                for(int j = 0; j < strlen(dstr); j++)
                {
                    if((dstr[j] = ',') && ((isdigit(dstr[j + 1]) == 0) || 
                                (isdigit(dstr[j + 2]) == 0))) 
                    {
                        fflush(stdin);
                        printf("Error: Comma not followed by an integer.\n\n");
                        printf("Enter a valid data point:\n");
                        fgets(dstr, 100, stdin);
                        dstr[strlen(dstr) - 1] = '\0';
                        continue;
                    }
                    else if((dstr[j] != ',') && (dstr[j] != ' '))
                    {
                        dname[count++][j] = dstr[j];
                        // TODO Count data points
                    }
                }
            }
        }
        else if(chr == NULL)
        {
            printf("Error: No comma in string.\n\n");
            continue;
        }
        inputDone = true;
    }
        printf("\n\t\t\t\tFORMATTED TABLE\n");
            printf("%33s", title);
                printf("%20s|%23s\n", col1, col2);
                printf("--------------------------------------------\n");
    return 0;
}
// Function Definitions
