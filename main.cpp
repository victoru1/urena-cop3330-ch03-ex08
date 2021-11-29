/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Victor Urena
 */

#include "std_lib_facilities.h"

void isOddorEven(int num)
{
    if (abs(num) % 2 == 1)
        cout << "The value " << num << " is an odd number.\n";
    else
        cout << "The value " << num << " is an even number.\n";
}

int main()
{
    int value;
    cout << "Enter a number: ";
    cin >> value;
    isOddorEven(value);
}