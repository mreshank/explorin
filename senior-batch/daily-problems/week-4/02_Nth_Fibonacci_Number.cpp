/**
    Problem Name    :   Nth Fibonacci Number.
    Problem Link    :   https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

// Include necessary libraries
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Declare variables for the Fibonacci sequence
    int targetPosition, first=1, second=1, nextNumber=-1;

    // Take the target Fibonacci number from the user
    cin >> targetPosition;

    // If the target number is 1 or 2, the Fibonacci number is 1
    if(targetPosition==1 || targetPosition==2) 
    {
        cout << 1;
    }

    // Calculate the Fibonacci number for the target number
    for(int i = 3; i <= targetPosition; i++) {
        // The next number in the Fibonacci sequence is the sum of the previous two numbers
        nextNumber = first + second;

        // If we've reached the target number, print the Fibonacci number
        if(i == targetPosition) 
        {
            cout << nextNumber;
        }

        // Update the first two numbers for the next iteration
        first = second;
        second = nextNumber;
    }

    // If somehow, the loop doesn't works, then deafult statement to print // won't occur !
    if(nextNumber == -1) 
    {
        cout << "Error Occured !" << endl;
    }
}