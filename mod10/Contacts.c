/*
 * =====================================================================================
 *
 *       Filename:  Contacts.c
 *
 *    Description:  Function definitions
 *
 *        Version:  1.0
 *        Created:  04/02/2018 10:59:25 PM
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
#include <string.h>
/*
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
 */
// Function Definitions

void CreateContactNode(ContactNode* thisNode, char name[], char num[],
        ContactNode* nextLoc)
{
    strcpy(thisNode->contactName, name);
    strcpy(thisNode->contactPhoneNum, num);
    thisNode->nextNodePtr = nextLoc;
    return;
}
void InsertContactAfter(ContactNode* thisNode, ContactNode* newNode)
{
    ContactNode* tmpNext = NULL;
    tmpNext = thisNode->nextNodePtr;
    thisNode->nextNodePtr = newNode;
    newNode->nextNodePtr = tmpNext;
    return;
}
ContactNode* GetNextContact(ContactNode* thisNode)
{
    return thisNode->nextNodePtr;
}
void PrintContactNode(ContactNode* thisNode)
{
    printf("%s\n", thisNode->contactName);
    printf("%s\n", thisNode->contactPhoneNum);
    return;
}

