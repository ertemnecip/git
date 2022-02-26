/*
 * FILE : f3.cpp
 * PROJECT : PROG1345 - Focused Assignment 3
 * PROGRAMMER : Necip Ertem Student number: 8800684
 * FIRST VERSION : 2021-03-02
 * DESCRIPTION : This program check if a given integer number is even or odd
 */
#include <stdio.h>
#pragma warning(disable 4996) // required by Visual Studio
int getNum(void);
int isOdd(int num);
int main()
{

    printf("Enter an Integer :"); // user is prompted for input
    int x = getNum();             // input assigned to integer x

    if (isOdd(x) == 1) // the number x is checked by calling isOdd function using if-else statement
    {
        printf("number is odd\n "); // print odd if value 1
    }
    else if (isOdd(x) == 0)

    {
        printf("number is even\n "); // print even if value 0
    }
    return 0;
}

//
// FUNCTION : isOdd
// DESCRIPTION :
// Checks if a number is odd or even
// PARAMETERS :
// int num: any integer number is checked
//
// RETURNS :
// 0 if the number is even, 1 if the number is odd
//

int isOdd(int num)
{
    {

        if (num % 2 == 0) // modulus operator used, if the integer number is perfectly divisible by 2 then it is even
        {
            return 0; // returns 0 when even
        }
        else // if the number isnt perfectly divisible then it is odd
        {
            return 1; // returns 1 when odd
        }
    }
}

int getNum(void)
{
    /* we will see in a later lecture how we can improve this code */
    char record[121] = {0}; /* record stores the string */
    int number = 0;
    /* NOTE to student: indent and brace this function consistent with
your others */

    /* use fgets() to get a string from the keyboard */
    fgets(record, 121, stdin);
    /* extract the number from the string; sscanf() returns a number
     * corresponding with the number of items it found in the string */
    if (sscanf(record, "%d", &number) != 1)
    {
        /* if the user did not enter a number recognizable by
         * the system, set number to -1 */
        number = -1;
    }
    return number;
}
