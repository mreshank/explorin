/**
    Problem Name    :   Ninja And The Star Pattern I
    Problem Link    :   https://www.codingninjas.com/studio/problems/ninja-and-the-star-pattern-i_6581920
    Solution Author :   Mr. Eshank Tyagi 
    Solution Video  :   to-be-updated-soon
*/

#include <iostream> // No Need to write this 
using namespace std; // No Need to write this 

// Function to print a star pattern of size n x n
void getStarPattern(int patternSize) 
{
    // Loop over each row
    for(int rowIndex=0; rowIndex<patternSize; rowIndex++) 
    {
        // Loop over each column
        for(int columnIndex=0; columnIndex<patternSize; columnIndex++) 
        {
            // If the current position is on the border of the array (first or last row, or first or last column)
            if(rowIndex==0 || columnIndex==0 || rowIndex==patternSize-1 || columnIndex==patternSize-1)
            {
                // then, print a star
                cout << "*";
            }
            // If the current position is not on the border, print a space
            else
            {
                cout << " ";
            }
        }
        // Print a newline character at the end of each row
        cout << endl;
    }
}