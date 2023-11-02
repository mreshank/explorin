/**
    Problem Name    :   Star Pattern
    Problem Link    :   https://www.codingninjas.com/studio/problems/star-pattern_893204
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include <bits/stdc++.h> 
using namespace std;

// Function to print a pyramid pattern of stars
void printPattern(int pyramidHeight) 
{
    // Loop over each row
    for(int currentRow = 1; currentRow <= pyramidHeight; currentRow++) 
    {
        // Print spaces for the left padding of the pyramid
        for(int spaceIndex = 1; spaceIndex <= pyramidHeight - currentRow; spaceIndex++) 
		{
            cout << " ";
		}
        // Print stars for the current row of the pyramid
        // The number of stars is 2*currentRow - 1
        for(int starIndex = 1; starIndex <= currentRow * 2 - 1; starIndex++)
		{
            cout << "*";
        }
		// Print a newline character (change the line) at the end of each row
        cout << endl;
    }
}