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

// Constants

// Function Prototypes

// Main Function
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
int main()
{
    ContactNode* headObj = NULL;
    ContactNode* currObj = NULL;
    ContactNode* lastObj = NULL;

    int i = 0;

    headObj = (ContactNode*)malloc(sizeof(ContactNode));

    for(i = 0; i<3, i++)
    {
        // Insert print statement and loop currobj malloc
        //
        // lastObj = currObj;
        //
    }

    return 0;
}
// Function Definitions


