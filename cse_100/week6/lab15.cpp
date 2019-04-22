/*
 * =====================================================================================
 *
 *       Filename:  lab14.cpp
 *
 *    Description:  Lab 15 - Pass by Reference
 *
 *        Version:  1.0
 *        Created:  04/14/2019 09:18:11 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Adam Coss (), coss.adam@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;
// FUNCTION PROTOTYPES
double calcFinalScore(double test1, double test2, double hw);
void readTestandHwScore (double &test1Score, double &test2Score, double &hwScore);
void printFinalScore(double finalScore);

int main()
{
    // Local variables
    double test1, test2, finalScore, hw;

    // Read inputs
    readTestandHwScore(test1,test2,hw);

    // OUTPUT FINAL SCORE AND GRADE
    printFinalScore(calcFinalScore(test1,test2,hw));
    return 0;
}
// FUNCTION DEFINITIONS
// READ TEST AND HOMEWORK SCORES
void readTestandHwScore (double &test1Score, double &test2Score, double &hwScore)
{
    // GET DATA FROM USER
    cout << "Enter the score for test #1: ";
    cin >> test1Score;

    cout << "Enter the score for test #2: ";
    cin >> test2Score;

    cout << "Enter the score for the homework: ";
    cin >> hwScore;

}
// CALCULATES AND RETURNS THE FINAL SCORE.
double calcFinalScore(double test1, double test2, double hw)
{
    double testWeight = 0.40;
    double hwWeight = 0.20;

    return (testWeight*(test1 + test2) + hwWeight*(hw));
}
// PRINTS THE FINAL SCORE AND LETTER GRADE.
void printFinalScore(double finalScore)
{
    char grade;

    if(finalScore < 60)
    {
        grade = 'F';
    }
    else if((finalScore > 59)&&(finalScore < 70))
    {
        grade = 'D';
    }
    else if((finalScore > 69)&&(finalScore < 80))
    {
        grade = 'C';
    }
    else if((finalScore > 79)&&(finalScore < 90))
    {
        grade = 'B';
    }
    else if(finalScore > 89)
    {
        grade = 'A';
    }

    cout << "The student's final score is: " << finalScore << endl;
    cout << "Their final letter grade is: " << grade << endl;
}




