/**
    Problem Name    :   Print The Pattern Set 1
    Problem Link    :   https://practice.geeksforgeeks.org/problems/print-the-pattern-set-1/1
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include <bits/stdc++.h>
using namespace std;

// Function to print a specific pattern
void printPat(int patternSize)
{
    // Outer loop decrements from patternSize to 1
    for(int currentRow=patternSize; currentRow>=1; currentRow--) 
    {
        // Inner loop decrements from patternSize*currentRow to 1
        for(int currentColumn=patternSize*currentRow; currentColumn>=1; currentColumn--)
        {
            // Print the ceiling of currentColumn divided by currentRow
            cout << ceil( (1.0*currentColumn) / currentRow ) << " ";
        }
        // Print a "$" at the end of each row
        cout << "$";
    }
}
