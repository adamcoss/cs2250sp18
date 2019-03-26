/*
 * =====================================================================================
 *
 *       Filename:  enum.c
 *
 *    Description:  Learn enumeration
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:40:50 AM
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
//                  0       1           2        3
enum LightState {LS_RED, LS_GREEN, LS_YELLOW, LS_DONE}; 
// Defines labels for each stat

// Function Prototypes
int main()

    /* ENUM SETS VALUES TO EACH ELEMENT AUTOMATICALLY
     * THIS WAY YOU DON'T HAVE TO DEFINE EACH VALUE MANNUALLY
     */

{
    enum LightState lightVal; // Must define enum to assign var.

/*    lightVal = LS_RED;
    printf("Light value [%d]\n", lightVal);
    lightVal = LS_YELLOW;
    printf("Light value [%d]\n", lightVal);

    return 0;
*/    
    char userCmd;

    lightVal = LS_RED;
    userCmd = '-';

    printf("User commands: n (next), r (red), q (quit).\n\n");

    lightVal = LS_RED;
    while (lightVal != LS_DONE) {

        if (lightVal == LS_GREEN) {
            printf("Green light  ");
            scanf(" %c", &userCmd);
            if (userCmd == 'n') { // Next
                lightVal = LS_YELLOW;
            }
        }
        else if (lightVal == LS_YELLOW) {
            printf("Yellow light  ");
            scanf(" %c", &userCmd);
            if (userCmd == 'n') { // Next
                lightVal = LS_RED;
            }
        }
        else if (lightVal == LS_RED) {
            printf("Red light  ");
            scanf(" %c", &userCmd);
            if (userCmd == 'n') { // Next
                lightVal = LS_GREEN;
            }
        }

        if (userCmd == 'r') { // Force immediate red
            lightVal = LS_RED;
        }
        else if (userCmd == 'q') { // Quit
            lightVal = LS_DONE;
        }
    }

    printf("Quit program.\n");

    return 0;
}


