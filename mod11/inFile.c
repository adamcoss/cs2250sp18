/*
 * =====================================================================================
 *
 *       Filename:  inFile.c
 *
 *    Description:  Read data from files
 *
 *        Version:  1.0
 *        Created:  04/03/2018 09:17:25 AM
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

// Constants
#define NUM 4
// Defining the label "NUM" with value 4. No ':' needed because it is
// a definition not a statement.
// Same as const int = 4;
// use static const to prevent changing.

// Function Prototypes

// Main Function
int main()
{
//    int data[NUM];    // Static memory
    int* userNums;      // User numbers (dynamically allocated)
    int arrSize = 0;    // User specified number of inputs
    FILE* inFile = NULL;
        // FILE (data type) pointing to and address of a file.
    printf("Opening file data.txt\n");
    // Open file for reading
//    inFile = fopen("data1.txt", "r");
    inFile = fopen("data.txt", "r");
        //inFile is now the address of the file NOT THE CONTENTS!
    // Test for success
    if(inFile == NULL)
    {
        printf("Could not open file\n");
        return -1;
        // Return a different number to reference an error.
        // "0" implies no error and should only be at the end of the
        // main function.
    }
    // Scan file, get number of records
    fscanf(inFile, "%d", &arrSize);
    printf("arrSize[%d]\n", arrSize);
    // Allocate memory
    userNums = (int*)malloc(sizeof(int) * arrSize);
    // Check if you got the memory
    if(userNums == NULL)
    {
        printf("Unable to malloc memory\n");
        // Close the file
        fclose(inFile);
        return -2;
    }
    // arrSize is the first member of the file, which is the header record
    // or the number of records in the file. Use i = 1 to skip header record.
    int i = 1;
    while( i <= arrSize)
    {
        fscanf(inFile, "%d", &(userNums[i - 1])); // i - 1 so you skip the
        // HEADER but still allocate from index 0.
                i = i + 1;
    }
    // Print records
    i = 0;
    while(i < arrSize)
    {
        printf("Numbers [%02d]\n", userNums[i]);
        i++;
    }
    // Close the file and clean allocated memory
    fclose(inFile);
    free(userNums);

    return 0;
}
// Function Definitions


