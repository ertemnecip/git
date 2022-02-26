/*
 * FILE : f4.cpp
 * PROJECT : PROG1345 - Focused Assignment 4
 * PROGRAMMER : Necip Ertem Student Number: 8800684
 * FIRST VERSION : 2022-12-02
 * SECOND VERSION: 2022-17-02
 * DESCRIPTION : This program displays the smallest variable and its position in an array of 10 numbers, before that user is prompted and the numbers are entered by the user
 */
#include <stdio.h>
#pragma warning(disable : 4996)
int getNum(void);
int main()
{
    int myArray[10];
    int x = 0;
    int index = 0;
    int lowest = 0; // Defined and initalized all variables

    for (int x = 0; x < 10; x++) // this loop is to prompt the user to enter all numbers into the array
    {
        printf("Please input the value at index %d in the array: ", x);
        myArray[x] = getNum();
        lowest = myArray[0]; // smallest variable is set to be in the first position

        for (int x = 0; x < 10; x++) // The for loop compares each element against in the against the lowest
        {
            if (myArray[x] < lowest) // If there is a smaller element in the array than lowest, then that element is set to be the new lowest
            {
                lowest = myArray[x];
                index = x; // The position of that element in the array is stored into the index variable
            }
        }
    }

    printf("\nThe lowest value is %d at index %d\n", lowest, index);
    return 0;
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