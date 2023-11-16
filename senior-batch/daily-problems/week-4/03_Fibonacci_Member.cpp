/**
    Problem Name    :   Fibonacci Member
    Problem Link    :   https://www.codingninjas.com/studio/problems/fibonacci-number_1589
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include <iostream>

// Function to check if a number is a member of the Fibonacci sequence
bool checkMember(int targetNumber)
{
    // The first two numbers in the Fibonacci sequence are 0 and 1
    // If the target number is 0 or 1, it is a member of the Fibonacci sequence
    if (targetNumber==0 || targetNumber==1) 
    {
        return true;
    }

    // Initialize the first two numbers in the Fibonacci sequence
    int firstNumber = secondNumber = 1, fibonacciSum;

    // Generate numbers in the Fibonacci sequence until we reach or exceed the target number
    while (secondNumber < targetNumber)
    {
        // The next number in the Fibonacci sequence is the sum of the previous two numbers
        fibonacciSum = firstNumber + secondNumber;

        // Update the first two numbers for the next iteration
        firstNumber = secondNumber;
        secondNumber = fibonacciSum;
    }

    // If the last generated number in the Fibonacci sequence is equal to the target number,
    // the target number is a member of the Fibonacci sequence
    if (fibonacciSum == targetNumber) 
    {
        return true;
    }

    // If we've reached this point, the target number is not a member of the Fibonacci sequence
    return false;
}   