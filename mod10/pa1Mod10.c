/*
 * =====================================================================================
 *
 *       Filename:  pa1Mod10.c
 *
 *    Description:  Programming Assignment 1 Mod 10
 *
 *        Version:  1.0
 *        Created:  04/02/2018 10:51:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "Contacts.h"
/*
 (1) Create three files to submit.
 - Contacts.h - Struct definition, including the data members and
   related function declarations
 - Contacts.c - Related function definitions
 - main.c - main() function

 (2) Build the ContactNode struct per the following specifications:
 - Data members
 - char contactName[50]
 - char contactPhoneNum[50]
 - struct ContactNode* nextNodePtr
 - Related functions
 - CreateContactNode() (2 pt)
 - InsertContactAfter() (2 pts)
   - Insert a new node after node
 - GetNextContact() (1 pt)
   - Return location pointed by nextNodePtr
 - PrintContactNode()
 (3) In main(), prompt the user for three contacts and output
     the user's input. Create three ContactNodes and use the
     nodes to build a linked list. (2 pts)
 (4) Output the linked list. (2 pts)
*/

// Main Function
int main()
{
    ContactNode* headObj = NULL;
    ContactNode* currObj = NULL;
    ContactNode* lastObj = NULL;

    int i = 0;

    headObj = (ContactNode*)malloc(sizeof(ContactNode));
    currObj = (ContactNode*)malloc(sizeof(ContactNode));
    lastObj = (ContactNode*)malloc(sizeof(ContactNode));
    CreateContactNode(headObj, "", "", NULL);

    // Loop to get user inputs

    for(i = 1; i<=3; i++)
    {
        char name[50] = "";
        char num[13] = "";
        printf("Person %d\nEnter name:\n", i);
        scanf(" %[^\n]s", name);
        printf("Enter phone number:\n");
        scanf(" %s", num);

        switch (i)
        {
            case 1:
                CreateContactNode( headObj, name, num, currObj);
                printf("You entered: %s, %s\n\n", headObj->contactName, 
                        headObj->contactPhoneNum);
                break;
            case 2:
                CreateContactNode( currObj, name, num, lastObj);
                printf("You entered: %s, %s\n\n", currObj->contactName, 
                        currObj->contactPhoneNum);
                break;
            case 3:
                CreateContactNode( lastObj, name, num, NULL);
                printf("You entered: %s, %s\n\n", lastObj->contactName, 
                        lastObj->contactPhoneNum);
                break;
        }
    }
    // Print values of each node

    printf("CONTACT LIST\n");
    PrintContactNode(headObj);
    printf("\n");
    PrintContactNode(currObj);
    printf("\n");
    PrintContactNode(lastObj);
    printf("\n");

    // Free memory at the addresses

    free(headObj);
    free(currObj);
    free(lastObj);

    return 0;
}
