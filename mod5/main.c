/*
 * =====================================================================================
 *
 *       Filename:  pa1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/12/2018 10:29:22 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), adamcoss@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>


int main(void)
{
    /*
     * 1) Modify the given program to use a loop to output an arrow base
     * of height arrowBaseHeight. (1 pt)
     * 2) Modify the given program to use a loop to output an arrow base
     * of width arrowBaseWidth. Use a nested loop in which the inner loop
     * draws the *s, and the outer loop iterates a number of times equal to
     * the height of the arrow base. (1 pt)
     * 3) Modify the given program to use a loop to output an arrow head of
     * width arrowHeadWidth. Use a nested loop in which the inner loop draws
     * the *s, and the outer loop iterates a number of times equal to the
     * height of the arrow head. (2 pts) 
     * 4) Modify the given program to only accept an arrow head width that is
     * larger than the arrow base width. Use a loop to continue prompting the
     * user for an arrow head width until the value is larger than the arrow
     * base width. (1 pt)
    */

    char arrowChar = '*';
    int arrowBaseHeight = 0;
    int arrowBaseWidth = 0;
    int arrowHeadWidth =0;
    int i = 0;
    int j = 0;

    printf("Enter arrow base height:\n");
    scanf("%d", &arrowBaseHeight);

    printf("Enter arrow base width:\n");
    scanf("%d", &arrowBaseWidth);

    printf("Enter arrow head width:\n");
    scanf("%d", &arrowHeadWidth);

    while(arrowHeadWidth <= arrowBaseWidth)
    {
        printf("Enter arrow head width:\n");
        scanf("%d", &arrowHeadWidth);
    }
    printf("\n");
    for(i = 0; i < arrowBaseHeight; i++)
    {
        for(j = 0; j < arrowBaseWidth; j++)
        {
            printf("%c", arrowChar);
        }
        printf("\n");
    }
    for(i = 0; i < arrowHeadWidth; arrowHeadWidth--)
    {
        for(j = 0; j < arrowHeadWidth; j++)
        {
            printf("%c", arrowChar);
        }
        printf("\n");
    }
    return 0;
}


