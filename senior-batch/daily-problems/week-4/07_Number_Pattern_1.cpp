/**
    Problem Name    :   Number Pattern 1
    Problem Link    :   https://www.codingninjas.com/studio/problems/number-pattern-1_893187
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include <bits/stdc++.h> 
using namespace std; 

// Function to print a pattern of 1's
void printPattern1(int patternSize) 
{
    // Loop over each row
    for(int currentRow=1; currentRow<=patternSize; currentRow++) 
    {
        // Loop over each column up to the current row number
        for(int currentColumn=1; currentColumn<=currentRow; currentColumn++) 
        {
            // Print a "1"
            cout << "1";
        }
        // Print a newline character at the end of each row
        cout << endl;
    }
}