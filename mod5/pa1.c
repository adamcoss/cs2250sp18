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
    /* 1) Output a fixed height triangle using * character.
    //  modify so user can input their own character.
    // 2) Modify the program to use a nested loop to output a right
    //  triangle of triangleHeight. The first line will have one 
    //  user-specified character, such as % or *. Each subsequent line will 
    //  have one additional user-specified character until the number in the triangle's 
    //  base reaches triangleHeight. Output a space after each user-specified 
    //  character, including after the line's last 
    //  user-specified character. (2 pts)
    */

    char triangleChar = '-';
    int triangleHeight = 0;
    int i;
    int j;

    printf("Enter a character:\n");
    scanf("%c", &triangleChar);

    printf("Enter triangle height:\n");
    scanf("%d", &triangleHeight);

    for(i = 0; i <= triangleHeight; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("%c ", triangleChar);
        }
        printf("\n");
    }
    return 0;
}


