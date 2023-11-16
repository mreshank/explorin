/**
    Problem Name    :   Print The Pattern   # 3rd Approach [NOTE : ONLY TO PRINT/TEST, NOT TO SUBMIT DIRECTLY]
    Problem Link    :   https://www.codingninjas.com/studio/problems/print-the-pattern_893299
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include <bits/stdc++.h> 
using namespace std; 

/* Third Approach :: Only to print it not pass it */

int main() 
{
    // The size of the pattern
    int patternSize = 5;

    // Variables to control the starting number of each row
    int startNumber, rowMultiplier = -1;

    // Loop over each row of the pattern
    for (int rowIndex = 0; rowIndex < patternSize; rowIndex++) 
    {
        // If the row index is less than or equal to half the pattern size
        if(rowIndex <= floor(patternSize / 2.0)) 
        {
            // Increment the row multiplier and calculate the start number for the row
            rowMultiplier++;
            startNumber = patternSize * rowMultiplier + 1;
            rowMultiplier++;
        }
        else 
        {
            // Decrement the row multiplier and calculate the start number for the row
            rowMultiplier -= 2;
            startNumber = patternSize * rowMultiplier + 1;
        }

        // Print the numbers for the current row
        for(int columnIndex = 1; columnIndex <= patternSize; columnIndex++) 
        {
            cout << startNumber++ << " ";
        }

        // Print a newline character at the end of each row
        cout << endl;
    }
    return 0;
}