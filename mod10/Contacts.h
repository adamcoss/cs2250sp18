/*
 * =====================================================================================
 *
 *       Filename:  Contacts.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2018 10:59:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  CONTACTS__INC__
#define  CONTACTS_INC__
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
typedef struct ContactNode
{
    char contactName[50];
    char contactPhoneNum[50];
    struct ContactNode* nextNodePtr;

}ContactNode;

// Function Prototypes
void CreateContactNode(ContactNode* thisNode, char name[], char num[],
        ContactNode* nextLoc);
void InsertContactAfter(ContactNode* thisNode, ContactNode* newNode);
ContactNode* GetNextContact(ContactNode* thisNode);
void PrintContactNode(ContactNode* thisNode);
#endif /* ----- #ifndef CONTACTS__INC__ ----- */

